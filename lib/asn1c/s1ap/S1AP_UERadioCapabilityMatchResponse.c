/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "../support/s1ap-r16.11.0/36413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "S1AP_UERadioCapabilityMatchResponse.h"

asn_TYPE_member_t asn_MBR_S1AP_UERadioCapabilityMatchResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_UERadioCapabilityMatchResponse, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolIE_Container_6561P33,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_UERadioCapabilityMatchResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_UERadioCapabilityMatchResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_UERadioCapabilityMatchResponse_specs_1 = {
	sizeof(struct S1AP_UERadioCapabilityMatchResponse),
	offsetof(struct S1AP_UERadioCapabilityMatchResponse, _asn_ctx),
	asn_MAP_S1AP_UERadioCapabilityMatchResponse_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_UERadioCapabilityMatchResponse = {
	"UERadioCapabilityMatchResponse",
	"UERadioCapabilityMatchResponse",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_UERadioCapabilityMatchResponse_tags_1,
	sizeof(asn_DEF_S1AP_UERadioCapabilityMatchResponse_tags_1)
		/sizeof(asn_DEF_S1AP_UERadioCapabilityMatchResponse_tags_1[0]), /* 1 */
	asn_DEF_S1AP_UERadioCapabilityMatchResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_UERadioCapabilityMatchResponse_tags_1)
		/sizeof(asn_DEF_S1AP_UERadioCapabilityMatchResponse_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_S1AP_UERadioCapabilityMatchResponse_1,
	1,	/* Elements count */
	&asn_SPC_S1AP_UERadioCapabilityMatchResponse_specs_1	/* Additional specs */
};

