/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.11.0/36413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_S1AP_GNB_Identity_H_
#define	_S1AP_GNB_Identity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_GNB-ID.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_GNB_Identity_PR {
	S1AP_GNB_Identity_PR_NOTHING,	/* No components present */
	S1AP_GNB_Identity_PR_gNB_ID
	/* Extensions may appear below */
	
} S1AP_GNB_Identity_PR;

/* S1AP_GNB-Identity */
typedef struct S1AP_GNB_Identity {
	S1AP_GNB_Identity_PR present;
	union S1AP_GNB_Identity_u {
		S1AP_GNB_ID_t	 gNB_ID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_GNB_Identity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_GNB_Identity;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_GNB_Identity_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_GNB_Identity_1[1];
extern asn_per_constraints_t asn_PER_type_S1AP_GNB_Identity_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_GNB_Identity_H_ */
#include <asn_internal.h>
