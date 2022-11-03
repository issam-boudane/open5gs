/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.11.0/38413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_GlobalRANNodeID_H_
#define	_NGAP_GlobalRANNodeID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_GlobalRANNodeID_PR {
	NGAP_GlobalRANNodeID_PR_NOTHING,	/* No components present */
	NGAP_GlobalRANNodeID_PR_globalGNB_ID,
	NGAP_GlobalRANNodeID_PR_globalNgENB_ID,
	NGAP_GlobalRANNodeID_PR_globalN3IWF_ID,
	NGAP_GlobalRANNodeID_PR_choice_Extensions
} NGAP_GlobalRANNodeID_PR;

/* Forward declarations */
struct NGAP_GlobalGNB_ID;
struct NGAP_GlobalNgENB_ID;
struct NGAP_GlobalN3IWF_ID;
struct NGAP_ProtocolIE_SingleContainer;

/* NGAP_GlobalRANNodeID */
typedef struct NGAP_GlobalRANNodeID {
	NGAP_GlobalRANNodeID_PR present;
	union NGAP_GlobalRANNodeID_u {
		struct NGAP_GlobalGNB_ID	*globalGNB_ID;
		struct NGAP_GlobalNgENB_ID	*globalNgENB_ID;
		struct NGAP_GlobalN3IWF_ID	*globalN3IWF_ID;
		struct NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_GlobalRANNodeID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_GlobalRANNodeID;
extern asn_CHOICE_specifics_t asn_SPC_NGAP_GlobalRANNodeID_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_GlobalRANNodeID_1[4];
extern asn_per_constraints_t asn_PER_type_NGAP_GlobalRANNodeID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_GlobalRANNodeID_H_ */
#include <asn_internal.h>
