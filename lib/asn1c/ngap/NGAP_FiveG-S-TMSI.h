/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.11.0/38413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_FiveG_S_TMSI_H_
#define	_NGAP_FiveG_S_TMSI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_AMFSetID.h"
#include "NGAP_AMFPointer.h"
#include "NGAP_FiveG-TMSI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_FiveG-S-TMSI */
typedef struct NGAP_FiveG_S_TMSI {
	NGAP_AMFSetID_t	 aMFSetID;
	NGAP_AMFPointer_t	 aMFPointer;
	NGAP_FiveG_TMSI_t	 fiveG_TMSI;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_FiveG_S_TMSI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_FiveG_S_TMSI;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_FiveG_S_TMSI_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_FiveG_S_TMSI_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_FiveG_S_TMSI_H_ */
#include <asn_internal.h>
