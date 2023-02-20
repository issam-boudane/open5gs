/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.11.0/38413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_PagingOrigin_H_
#define	_NGAP_PagingOrigin_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_PagingOrigin {
	NGAP_PagingOrigin_non_3gpp	= 0
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_PagingOrigin;

/* NGAP_PagingOrigin */
typedef long	 NGAP_PagingOrigin_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PagingOrigin;
asn_struct_free_f NGAP_PagingOrigin_free;
asn_struct_print_f NGAP_PagingOrigin_print;
asn_constr_check_f NGAP_PagingOrigin_constraint;
jer_type_encoder_f NGAP_PagingOrigin_encode_jer;
per_type_decoder_f NGAP_PagingOrigin_decode_aper;
per_type_encoder_f NGAP_PagingOrigin_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PagingOrigin_H_ */
#include <asn_internal.h>
