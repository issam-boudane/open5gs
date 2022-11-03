/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.11.0/38413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_PDUSessionResourceSetupItemSUReq_H_
#define	_NGAP_PDUSessionResourceSetupItemSUReq_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_PDUSessionID.h"
#include "NGAP_NAS-PDU.h"
#include "NGAP_S-NSSAI.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_PDUSessionResourceSetupItemSUReq */
typedef struct NGAP_PDUSessionResourceSetupItemSUReq {
	NGAP_PDUSessionID_t	 pDUSessionID;
	NGAP_NAS_PDU_t	*pDUSessionNAS_PDU;	/* OPTIONAL */
	NGAP_S_NSSAI_t	 s_NSSAI;
	OCTET_STRING_t	 pDUSessionResourceSetupRequestTransfer;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_PDUSessionResourceSetupItemSUReq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PDUSessionResourceSetupItemSUReq;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_PDUSessionResourceSetupItemSUReq_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_PDUSessionResourceSetupItemSUReq_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PDUSessionResourceSetupItemSUReq_H_ */
#include <asn_internal.h>
