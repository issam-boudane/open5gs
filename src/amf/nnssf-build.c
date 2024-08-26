/*
 * Copyright (C) 2019,2020 by Sukchan Lee <acetcom@gmail.com>
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

#include "nnssf-build.h"

ogs_sbi_request_t *amf_nnssf_nsselection_build_get(
        amf_sess_t *sess, void *data)
{
    ogs_sbi_message_t message;
    ogs_sbi_request_t *request = NULL;
    amf_nnssf_nsselection_param_t *param = data;

    amf_ue_t *amf_ue = NULL;

    ogs_assert(sess);
    amf_ue = amf_ue_find_by_id(sess->amf_ue_id);
    ogs_assert(amf_ue);

    memset(&message, 0, sizeof(message));
    message.h.method = (char *)OGS_SBI_HTTP_METHOD_GET;
    message.h.service.name = (char *)OGS_SBI_SERVICE_NAME_NNSSF_NSSELECTION;
    message.h.api.version = (char *)OGS_SBI_API_V2;
    message.h.resource.component[0] =
        (char *)OGS_SBI_RESOURCE_NAME_NETWORK_SLICE_INFORMATION;

    message.param.nf_id = NF_INSTANCE_ID(ogs_sbi_self()->nf_instance);
    if (!message.param.nf_id) {
        ogs_error("No nf-id");
        goto end;
    }
    message.param.nf_type = NF_INSTANCE_TYPE(ogs_sbi_self()->nf_instance);
    if (!message.param.nf_type) {
        ogs_error("No nf-type");
        goto end;
    }

    message.param.slice_info_request_for_pdu_session_presence = true;

    message.param.snssai_presence = true;
    memcpy(&message.param.s_nssai, &sess->s_nssai,
            sizeof(message.param.s_nssai));

    if (ogs_sbi_plmn_id_in_vplmn(&amf_ue->home_plmn_id) == true) {
        if (sess->lbo_roaming_allowed == true)
            message.param.roaming_indication =
                OpenAPI_roaming_indication_LOCAL_BREAKOUT;
        else
            message.param.roaming_indication =
                OpenAPI_roaming_indication_HOME_ROUTED_ROAMING;
    } else
        message.param.roaming_indication =
            OpenAPI_roaming_indication_NON_ROAMING;

    if (param) {
        message.param.home_snssai_presence = param->home_snssai_presence;
        if (message.param.home_snssai_presence)
            memcpy(&message.param.home_snssai, &param->home_snssai,
                    sizeof(message.param.home_snssai));
    }

    request = ogs_sbi_build_request(&message);
    ogs_expect(request);

end:

    return request;
}
