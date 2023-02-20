/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.11.0/38413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_GBR_QosInformation_H_
#define	_NGAP_GBR_QosInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_BitRate.h"
#include "NGAP_NotificationControl.h"
#include "NGAP_PacketLossRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_GBR-QosInformation */
typedef struct NGAP_GBR_QosInformation {
	NGAP_BitRate_t	 maximumFlowBitRateDL;
	NGAP_BitRate_t	 maximumFlowBitRateUL;
	NGAP_BitRate_t	 guaranteedFlowBitRateDL;
	NGAP_BitRate_t	 guaranteedFlowBitRateUL;
	NGAP_NotificationControl_t	*notificationControl;	/* OPTIONAL */
	NGAP_PacketLossRate_t	*maximumPacketLossRateDL;	/* OPTIONAL */
	NGAP_PacketLossRate_t	*maximumPacketLossRateUL;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_GBR_QosInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_GBR_QosInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_GBR_QosInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_GBR_QosInformation_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_GBR_QosInformation_H_ */
#include <asn_internal.h>
