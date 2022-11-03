/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.11.0/38413-g110.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "NGAP_AMF-TNLAssociationToUpdateItem.h"

#include "NGAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_NGAP_AMF_TNLAssociationToUpdateItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_AMF_TNLAssociationToUpdateItem, aMF_TNLAssociationAddress),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NGAP_CPTransportLayerInformation,
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
		"aMF-TNLAssociationAddress"
		},
	{ ATF_POINTER, 3, offsetof(struct NGAP_AMF_TNLAssociationToUpdateItem, tNLAssociationUsage),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_TNLAssociationUsage,
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
		"tNLAssociationUsage"
		},
	{ ATF_POINTER, 2, offsetof(struct NGAP_AMF_TNLAssociationToUpdateItem, tNLAddressWeightFactor),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_TNLAddressWeightFactor,
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
		"tNLAddressWeightFactor"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_AMF_TNLAssociationToUpdateItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_8037P8,
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
		"iE-Extensions"
		},
};
static const int asn_MAP_NGAP_AMF_TNLAssociationToUpdateItem_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NGAP_AMF_TNLAssociationToUpdateItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_AMF_TNLAssociationToUpdateItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aMF-TNLAssociationAddress */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tNLAssociationUsage */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tNLAddressWeightFactor */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_AMF_TNLAssociationToUpdateItem_specs_1 = {
	sizeof(struct NGAP_AMF_TNLAssociationToUpdateItem),
	offsetof(struct NGAP_AMF_TNLAssociationToUpdateItem, _asn_ctx),
	asn_MAP_NGAP_AMF_TNLAssociationToUpdateItem_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NGAP_AMF_TNLAssociationToUpdateItem_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_AMF_TNLAssociationToUpdateItem = {
	"AMF-TNLAssociationToUpdateItem",
	"AMF-TNLAssociationToUpdateItem",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_AMF_TNLAssociationToUpdateItem_tags_1,
	sizeof(asn_DEF_NGAP_AMF_TNLAssociationToUpdateItem_tags_1)
		/sizeof(asn_DEF_NGAP_AMF_TNLAssociationToUpdateItem_tags_1[0]), /* 1 */
	asn_DEF_NGAP_AMF_TNLAssociationToUpdateItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_AMF_TNLAssociationToUpdateItem_tags_1)
		/sizeof(asn_DEF_NGAP_AMF_TNLAssociationToUpdateItem_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NGAP_AMF_TNLAssociationToUpdateItem_1,
	4,	/* Elements count */
	&asn_SPC_NGAP_AMF_TNLAssociationToUpdateItem_specs_1	/* Additional specs */
};

