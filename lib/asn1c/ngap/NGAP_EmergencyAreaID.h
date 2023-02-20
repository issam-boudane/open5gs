/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.11.0/38413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_EmergencyAreaID_H_
#define	_NGAP_EmergencyAreaID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NGAP_EmergencyAreaID */
typedef OCTET_STRING_t	 NGAP_EmergencyAreaID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_EmergencyAreaID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_EmergencyAreaID;
asn_struct_free_f NGAP_EmergencyAreaID_free;
asn_struct_print_f NGAP_EmergencyAreaID_print;
asn_constr_check_f NGAP_EmergencyAreaID_constraint;
jer_type_encoder_f NGAP_EmergencyAreaID_encode_jer;
per_type_decoder_f NGAP_EmergencyAreaID_decode_aper;
per_type_encoder_f NGAP_EmergencyAreaID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_EmergencyAreaID_H_ */
#include <asn_internal.h>
