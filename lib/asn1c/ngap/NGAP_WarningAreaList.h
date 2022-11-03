/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.11.0/38413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_WarningAreaList_H_
#define	_NGAP_WarningAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_WarningAreaList_PR {
	NGAP_WarningAreaList_PR_NOTHING,	/* No components present */
	NGAP_WarningAreaList_PR_eUTRA_CGIListForWarning,
	NGAP_WarningAreaList_PR_nR_CGIListForWarning,
	NGAP_WarningAreaList_PR_tAIListForWarning,
	NGAP_WarningAreaList_PR_emergencyAreaIDList,
	NGAP_WarningAreaList_PR_choice_Extensions
} NGAP_WarningAreaList_PR;

/* Forward declarations */
struct NGAP_EUTRA_CGIListForWarning;
struct NGAP_NR_CGIListForWarning;
struct NGAP_TAIListForWarning;
struct NGAP_EmergencyAreaIDList;
struct NGAP_ProtocolIE_SingleContainer;

/* NGAP_WarningAreaList */
typedef struct NGAP_WarningAreaList {
	NGAP_WarningAreaList_PR present;
	union NGAP_WarningAreaList_u {
		struct NGAP_EUTRA_CGIListForWarning	*eUTRA_CGIListForWarning;
		struct NGAP_NR_CGIListForWarning	*nR_CGIListForWarning;
		struct NGAP_TAIListForWarning	*tAIListForWarning;
		struct NGAP_EmergencyAreaIDList	*emergencyAreaIDList;
		struct NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_WarningAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_WarningAreaList;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_WarningAreaList_H_ */
#include <asn_internal.h>
