/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.11.0/36413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_S1AP_RecommendedCellsForPaging_H_
#define	_S1AP_RecommendedCellsForPaging_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_RecommendedCellList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ProtocolExtensionContainer;

/* S1AP_RecommendedCellsForPaging */
typedef struct S1AP_RecommendedCellsForPaging {
	S1AP_RecommendedCellList_t	 recommendedCellList;
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_RecommendedCellsForPaging_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_RecommendedCellsForPaging;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_RecommendedCellsForPaging_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_RecommendedCellsForPaging_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_RecommendedCellsForPaging_H_ */
#include <asn_internal.h>
