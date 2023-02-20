/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.11.0/36413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_S1AP_M6delay_threshold_H_
#define	_S1AP_M6delay_threshold_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_M6delay_threshold {
	S1AP_M6delay_threshold_ms30	= 0,
	S1AP_M6delay_threshold_ms40	= 1,
	S1AP_M6delay_threshold_ms50	= 2,
	S1AP_M6delay_threshold_ms60	= 3,
	S1AP_M6delay_threshold_ms70	= 4,
	S1AP_M6delay_threshold_ms80	= 5,
	S1AP_M6delay_threshold_ms90	= 6,
	S1AP_M6delay_threshold_ms100	= 7,
	S1AP_M6delay_threshold_ms150	= 8,
	S1AP_M6delay_threshold_ms300	= 9,
	S1AP_M6delay_threshold_ms500	= 10,
	S1AP_M6delay_threshold_ms750	= 11
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_M6delay_threshold;

/* S1AP_M6delay-threshold */
typedef long	 S1AP_M6delay_threshold_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_M6delay_threshold_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_M6delay_threshold;
extern const asn_INTEGER_specifics_t asn_SPC_M6delay_threshold_specs_1;
asn_struct_free_f M6delay_threshold_free;
asn_struct_print_f M6delay_threshold_print;
asn_constr_check_f M6delay_threshold_constraint;
jer_type_encoder_f M6delay_threshold_encode_jer;
per_type_decoder_f M6delay_threshold_decode_aper;
per_type_encoder_f M6delay_threshold_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_M6delay_threshold_H_ */
#include <asn_internal.h>
