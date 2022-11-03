/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.11.0/36413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_S1AP_RecommendedENBItem_H_
#define	_S1AP_RecommendedENBItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_MMEPagingTarget.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ProtocolExtensionContainer;

/* S1AP_RecommendedENBItem */
typedef struct S1AP_RecommendedENBItem {
	S1AP_MMEPagingTarget_t	 mMEPagingTarget;
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_RecommendedENBItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_RecommendedENBItem;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_RecommendedENBItem_H_ */
#include <asn_internal.h>
