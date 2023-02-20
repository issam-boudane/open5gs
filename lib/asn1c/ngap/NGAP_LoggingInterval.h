/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.11.0/38413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_LoggingInterval_H_
#define	_NGAP_LoggingInterval_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_LoggingInterval {
	NGAP_LoggingInterval_ms320	= 0,
	NGAP_LoggingInterval_ms640	= 1,
	NGAP_LoggingInterval_ms1280	= 2,
	NGAP_LoggingInterval_ms2560	= 3,
	NGAP_LoggingInterval_ms5120	= 4,
	NGAP_LoggingInterval_ms10240	= 5,
	NGAP_LoggingInterval_ms20480	= 6,
	NGAP_LoggingInterval_ms30720	= 7,
	NGAP_LoggingInterval_ms40960	= 8,
	NGAP_LoggingInterval_ms61440	= 9,
	NGAP_LoggingInterval_infinity	= 10
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_LoggingInterval;

/* NGAP_LoggingInterval */
typedef long	 NGAP_LoggingInterval_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_LoggingInterval_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_LoggingInterval;
extern const asn_INTEGER_specifics_t asn_SPC_LoggingInterval_specs_1;
asn_struct_free_f LoggingInterval_free;
asn_struct_print_f LoggingInterval_print;
asn_constr_check_f LoggingInterval_constraint;
jer_type_encoder_f LoggingInterval_encode_jer;
per_type_decoder_f LoggingInterval_decode_aper;
per_type_encoder_f LoggingInterval_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_LoggingInterval_H_ */
#include <asn_internal.h>
