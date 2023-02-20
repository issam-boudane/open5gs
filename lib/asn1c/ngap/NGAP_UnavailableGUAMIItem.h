/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.11.0/38413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_UnavailableGUAMIItem_H_
#define	_NGAP_UnavailableGUAMIItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_GUAMI.h"
#include "NGAP_TimerApproachForGUAMIRemoval.h"
#include "NGAP_AMFName.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_UnavailableGUAMIItem */
typedef struct NGAP_UnavailableGUAMIItem {
	NGAP_GUAMI_t	 gUAMI;
	NGAP_TimerApproachForGUAMIRemoval_t	*timerApproachForGUAMIRemoval;	/* OPTIONAL */
	NGAP_AMFName_t	*backupAMFName;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_UnavailableGUAMIItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_UnavailableGUAMIItem;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_UnavailableGUAMIItem_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_UnavailableGUAMIItem_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_UnavailableGUAMIItem_H_ */
#include <asn_internal.h>
