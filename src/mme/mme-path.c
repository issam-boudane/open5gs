/*
 * Copyright (C) 2019 by Sukchan Lee <acetcom@gmail.com>
 *
 * This file is part of Open5GS.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "s1ap-path.h"
#include "nas-path.h"
#include "sgsap-path.h"
#include "mme-gtp-path.h"
#include "mme-path.h"
#include "mme-sm.h"

void mme_send_delete_session_or_detach(mme_ue_t *mme_ue)
{
    ogs_assert(mme_ue);

    switch (mme_ue->detach_type) {
    /* TS23.401 5.3.8.2.1 */
    case MME_DETACH_TYPE_REQUEST_FROM_UE:
        ogs_debug("Detach Request from UE");
        if (SESSION_CONTEXT_IS_AVAILABLE(mme_ue)) {
            mme_gtp_send_delete_all_sessions(
                    mme_ue, OGS_GTP_DELETE_SEND_DETACH_ACCEPT);
        } else {
            ogs_assert(OGS_OK == nas_eps_send_detach_accept(mme_ue));
        }
        break;

    /* TS23.401 5.3.8.3 With Step 1 */
    /* MME Explicit Detach, ie: O&M Procedures */
    case MME_DETACH_TYPE_MME_EXPLICIT:
        ogs_debug("Explicit MME Detach");
        if (SESSION_CONTEXT_IS_AVAILABLE(mme_ue)) {
            mme_gtp_send_delete_all_sessions(mme_ue,
                OGS_GTP_DELETE_SEND_S1_REMOVE_AND_UNLINK);
        } else {
            enb_ue_t *enb_ue = enb_ue_cycle(mme_ue->enb_ue);
            if (enb_ue) {
                ogs_assert(OGS_OK ==
                    s1ap_send_ue_context_release_command(enb_ue,
                        S1AP_Cause_PR_nas, S1AP_CauseNas_normal_release,
                        S1AP_UE_CTX_REL_S1_REMOVE_AND_UNLINK, 0));
            } else
                ogs_error("ENB-S1 Context has already been removed");
        }
        break;

    /* TS23.401 5.3.8.4 With Step 2 */
    /* HSS Explicit Detach, ie: Subscription Withdrawl Cancel Location */
    case MME_DETACH_TYPE_HSS_EXPLICIT:
        ogs_debug("Explicit HSS Detach");
        if (SESSION_CONTEXT_IS_AVAILABLE(mme_ue)) {
            mme_gtp_send_delete_all_sessions(mme_ue, OGS_GTP_DELETE_NO_ACTION);
        } else {
            enb_ue_t *enb_ue = enb_ue_cycle(mme_ue->enb_ue);
            if (enb_ue) {
                ogs_assert(OGS_OK ==
                    s1ap_send_ue_context_release_command(enb_ue,
                        S1AP_Cause_PR_nas, S1AP_CauseNas_normal_release,
                        S1AP_UE_CTX_REL_UE_CONTEXT_REMOVE, 0));
            } else
                ogs_error("ENB-S1 Context has already been removed");
        }
        break;

    /* TS23.401 5.3.8.3 Without Step 1 */
    /* MME Implicit Detach, ie: Lost Communication */
    case MME_DETACH_TYPE_MME_IMPLICIT:
        ogs_debug("Implicit MME Detach");
        if (SESSION_CONTEXT_IS_AVAILABLE(mme_ue)) {
            if (ECM_IDLE(mme_ue)) {
                mme_gtp_send_delete_all_sessions(mme_ue,
                    OGS_GTP_DELETE_NO_ACTION);
            } else {
                mme_gtp_send_delete_all_sessions(mme_ue,
                    OGS_GTP_DELETE_SEND_S1_REMOVE_AND_UNLINK);
            }
        } else {
            enb_ue_t *enb_ue = enb_ue_cycle(mme_ue->enb_ue);
            if (enb_ue) {
                ogs_assert(OGS_OK ==
                    s1ap_send_ue_context_release_command(enb_ue,
                        S1AP_Cause_PR_nas, S1AP_CauseNas_normal_release,
                        S1AP_UE_CTX_REL_S1_REMOVE_AND_UNLINK, 0));
            } else
                ogs_error("ENB-S1 Context has already been removed");
        }
        break;

    /* TS23.401 5.3.8.4 Without Step 2 */
    /* HSS Implicit Detach, ie: MME-UPDATE-PROCEDURE */
    case MME_DETACH_TYPE_HSS_IMPLICIT:
        ogs_debug("Implicit HSS Detach");
        if (SESSION_CONTEXT_IS_AVAILABLE(mme_ue)) {
            if (ECM_IDLE(mme_ue)) {
                mme_gtp_send_delete_all_sessions(mme_ue,
                    OGS_GTP_DELETE_UE_CONTEXT_COMPLETE_REMOVE);
            } else {
                mme_gtp_send_delete_all_sessions(mme_ue,
                    OGS_GTP_DELETE_SEND_UE_CONTEXT_RELEASE_COMMAND);
            }
        } else {
            enb_ue_t *enb_ue = enb_ue_cycle(mme_ue->enb_ue);
            if (enb_ue) {
                ogs_assert(OGS_OK ==
                    s1ap_send_ue_context_release_command(enb_ue,
                        S1AP_Cause_PR_nas, S1AP_CauseNas_normal_release,
                        S1AP_UE_CTX_REL_UE_CONTEXT_REMOVE, 0));
            } else
                ogs_error("ENB-S1 Context has already been removed");
        }
        break;
    default:
        ogs_fatal("    Invalid OGS_NAS_EPS TYPE[%d]", mme_ue->nas_eps.type);
        ogs_assert_if_reached();
    }
}

void mme_send_delete_session_or_mme_ue_context_release(mme_ue_t *mme_ue)
{
    ogs_assert(mme_ue);

    if (SESSION_CONTEXT_IS_AVAILABLE(mme_ue)) {
        mme_gtp_send_delete_all_sessions(mme_ue,
                OGS_GTP_DELETE_SEND_UE_CONTEXT_RELEASE_COMMAND);
    } else {
        enb_ue_t *enb_ue = enb_ue_cycle(mme_ue->enb_ue);
        if (enb_ue) {
            ogs_assert(OGS_OK ==
                s1ap_send_ue_context_release_command(enb_ue,
                    S1AP_Cause_PR_nas, S1AP_CauseNas_normal_release,
                    S1AP_UE_CTX_REL_UE_CONTEXT_REMOVE, 0));
        } else {
            ogs_warn("[%s] No S1 Context", mme_ue->imsi_bcd);
        }
    }
}

void mme_send_release_access_bearer_or_ue_context_release(enb_ue_t *enb_ue)
{
    mme_ue_t *mme_ue = NULL;
    ogs_assert(enb_ue);

    mme_ue = enb_ue->mme_ue;
    if (mme_ue) {
        ogs_debug("[%s] Release access bearer request", mme_ue->imsi_bcd);
        ogs_assert(OGS_OK ==
            mme_gtp_send_release_access_bearers_request(
                mme_ue, OGS_GTP_RELEASE_SEND_UE_CONTEXT_RELEASE_COMMAND));
    } else {
        ogs_debug("No UE Context");
        ogs_assert(OGS_OK ==
            s1ap_send_ue_context_release_command(enb_ue,
                S1AP_Cause_PR_nas, S1AP_CauseNas_normal_release,
                S1AP_UE_CTX_REL_S1_CONTEXT_REMOVE, 0));
    }
}

void mme_send_after_paging(mme_ue_t *mme_ue, bool failed)
{
    mme_bearer_t *bearer = NULL;

    ogs_assert(mme_ue);

    switch (mme_ue->paging.type) {
    case MME_PAGING_TYPE_DOWNLINK_DATA_NOTIFICATION:
        bearer = mme_bearer_cycle(mme_ue->paging.data);
        if (!bearer) {
            ogs_error("No Bearer [%d]", mme_ue->paging.type);
            goto cleanup;
        }

        if (failed == true) {
            ogs_assert(OGS_OK ==
                mme_gtp_send_downlink_data_notification_ack(
                    bearer, OGS_GTP2_CAUSE_UNABLE_TO_PAGE_UE));
        } else {
            ogs_assert(OGS_OK ==
                mme_gtp_send_downlink_data_notification_ack(
                    bearer, OGS_GTP2_CAUSE_REQUEST_ACCEPTED));
        }
        break;
    case MME_PAGING_TYPE_CREATE_BEARER:
        bearer = mme_bearer_cycle(mme_ue->paging.data);
        if (!bearer) {
            ogs_error("No Bearer [%d]", mme_ue->paging.type);
            goto cleanup;
        }

        if (failed == true) {
            ogs_assert(OGS_OK ==
                mme_gtp_send_create_bearer_response(
                    bearer, OGS_GTP2_CAUSE_UNABLE_TO_PAGE_UE));
        } else {
            ogs_assert(OGS_OK ==
                nas_eps_send_activate_dedicated_bearer_context_request(bearer));
        }
        break;
    case MME_PAGING_TYPE_UPDATE_BEARER:
        bearer = mme_bearer_cycle(mme_ue->paging.data);
        if (!bearer) {
            ogs_error("No Bearer [%d]", mme_ue->paging.type);
            goto cleanup;
        }

        if (failed == true) {
            ogs_assert(OGS_OK ==
                mme_gtp_send_update_bearer_response(
                    bearer, OGS_GTP2_CAUSE_UNABLE_TO_PAGE_UE));
        } else {
            ogs_gtp_xact_t *xact = ogs_gtp_xact_cycle(bearer->update.xact);
            if (!xact) {
                ogs_error("No GTP xact");
                goto cleanup;
            }

            ogs_assert(OGS_OK ==
                nas_eps_send_modify_bearer_context_request(bearer,
                    (xact->update_flags &
                        OGS_GTP_MODIFY_QOS_UPDATE) ? 1 : 0,
                    (xact->update_flags &
                        OGS_GTP_MODIFY_TFT_UPDATE) ? 1 : 0));
        }
        break;
    case MME_PAGING_TYPE_DELETE_BEARER:
        bearer = mme_bearer_cycle(mme_ue->paging.data);
        if (!bearer) {
            ogs_error("No Bearer [%d]", mme_ue->paging.type);
            goto cleanup;
        }

        if (failed == true) {
            ogs_assert(OGS_OK ==
                mme_gtp_send_delete_bearer_response(
                    bearer, OGS_GTP2_CAUSE_UNABLE_TO_PAGE_UE));
        } else {
            ogs_assert(OGS_OK ==
                nas_eps_send_deactivate_bearer_context_request(bearer));
        }
        break;
    case MME_PAGING_TYPE_CS_CALL_SERVICE:
        if (failed == true) {
            ogs_assert(OGS_OK ==
                sgsap_send_paging_reject(
                    mme_ue, SGSAP_SGS_CAUSE_UE_UNREACHABLE));
        } else {
            /* Nothing */
        }
        break;
    case MME_PAGING_TYPE_SMS_SERVICE:
        if (failed == true) {
            ogs_assert(OGS_OK ==
                sgsap_send_paging_reject(
                    mme_ue, SGSAP_SGS_CAUSE_UE_UNREACHABLE));
        } else {
            ogs_assert(OGS_OK ==
                sgsap_send_service_request(
                    mme_ue, SGSAP_EMM_CONNECTED_MODE));
        }
        break;
    case MME_PAGING_TYPE_DETACH_TO_UE:
        if (failed == true) {
            /* Nothing */
            ogs_warn("MME-initiated Detach cannot be invoked");
        } else {
            ogs_assert(OGS_OK == nas_eps_send_detach_request(mme_ue));
            if (MME_P_TMSI_IS_AVAILABLE(mme_ue)) {
                ogs_assert(OGS_OK == sgsap_send_detach_indication(mme_ue));
            } else {
                mme_send_delete_session_or_detach(mme_ue);
            }
        }
        break;
    default:
        ogs_fatal("Invalid Paging Type[%d]", mme_ue->paging.type);
        ogs_assert_if_reached();
    }

cleanup:
    CLEAR_SERVICE_INDICATOR(mme_ue);
    MME_CLEAR_PAGING_INFO(mme_ue);
}

void mme_detach_explicit(mme_ue_t *mme_ue, uint8_t reattach_required)
{
    ogs_assert(mme_ue);

    /* Set EPS Detach */
    memset(&mme_ue->nas_eps.detach, 0, sizeof(ogs_nas_detach_type_t));

    if (reattach_required)
        mme_ue->nas_eps.detach.value =
            OGS_NAS_DETACH_TYPE_TO_UE_RE_ATTACH_REQUIRED;
    else
        mme_ue->nas_eps.detach.value =
            OGS_NAS_DETACH_TYPE_TO_UE_RE_ATTACH_NOT_REQUIRED;

    mme_ue->nas_eps.type = MME_EPS_TYPE_DETACH_REQUEST_TO_UE;

    mme_ue->detach_type = MME_DETACH_TYPE_MME_EXPLICIT;
    if (ECM_IDLE(mme_ue)) {
        MME_STORE_PAGING_INFO(mme_ue, MME_PAGING_TYPE_DETACH_TO_UE, NULL);
        ogs_assert(OGS_OK == s1ap_send_paging(mme_ue, S1AP_CNDomain_ps));
    } else {
        ogs_assert(OGS_OK == nas_eps_send_detach_request(mme_ue));
        if (MME_P_TMSI_IS_AVAILABLE(mme_ue)) {
            ogs_assert(OGS_OK == sgsap_send_detach_indication(mme_ue));
        } else {
            mme_send_delete_session_or_detach(mme_ue);
        }
    }

}

void mme_detach_implicit(mme_ue_t *mme_ue)
{
    ogs_assert(mme_ue);

    mme_ue->detach_type = MME_DETACH_TYPE_MME_IMPLICIT;
    if (MME_P_TMSI_IS_AVAILABLE(mme_ue)) {
        ogs_assert(OGS_OK == sgsap_send_detach_indication(mme_ue));
    } else {
        mme_send_delete_session_or_detach(mme_ue);
    }
}
