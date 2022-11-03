/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "../support/ngap-r16.11.0/38413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_DownlinkRANEarlyStatusTransfer_H_
#define	_NGAP_DownlinkRANEarlyStatusTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NGAP_DownlinkRANEarlyStatusTransfer */
typedef struct NGAP_DownlinkRANEarlyStatusTransfer {
	NGAP_ProtocolIE_Container_7996P42_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_DownlinkRANEarlyStatusTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_DownlinkRANEarlyStatusTransfer;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_DownlinkRANEarlyStatusTransfer_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_DownlinkRANEarlyStatusTransfer_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_DownlinkRANEarlyStatusTransfer_H_ */
#include <asn_internal.h>
