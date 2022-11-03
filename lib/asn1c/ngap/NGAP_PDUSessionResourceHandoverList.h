/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.11.0/38413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_PDUSessionResourceHandoverList_H_
#define	_NGAP_PDUSessionResourceHandoverList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_PDUSessionResourceHandoverItem;

/* NGAP_PDUSessionResourceHandoverList */
typedef struct NGAP_PDUSessionResourceHandoverList {
	A_SEQUENCE_OF(struct NGAP_PDUSessionResourceHandoverItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_PDUSessionResourceHandoverList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PDUSessionResourceHandoverList;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PDUSessionResourceHandoverList_H_ */
#include <asn_internal.h>
