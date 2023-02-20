/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.11.0/38413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_BluetoothMeasConfig_H_
#define	_NGAP_BluetoothMeasConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_BluetoothMeasConfig {
	NGAP_BluetoothMeasConfig_setup	= 0
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_BluetoothMeasConfig;

/* NGAP_BluetoothMeasConfig */
typedef long	 NGAP_BluetoothMeasConfig_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_BluetoothMeasConfig_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_BluetoothMeasConfig;
extern const asn_INTEGER_specifics_t asn_SPC_BluetoothMeasConfig_specs_1;
asn_struct_free_f BluetoothMeasConfig_free;
asn_struct_print_f BluetoothMeasConfig_print;
asn_constr_check_f BluetoothMeasConfig_constraint;
jer_type_encoder_f BluetoothMeasConfig_encode_jer;
per_type_decoder_f BluetoothMeasConfig_decode_aper;
per_type_encoder_f BluetoothMeasConfig_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_BluetoothMeasConfig_H_ */
#include <asn_internal.h>
