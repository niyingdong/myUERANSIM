/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "ASN_RRC_BCCH-DL-SCH-MessageType.h"

#include "ASN_RRC_SystemInformation.h"
#include "ASN_RRC_SIB1.h"
static asn_per_constraints_t asn_PER_type_ASN_RRC_c1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_ASN_RRC_BCCH_DL_SCH_MessageType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ASN_RRC_c1_2[] = {
	{ ATF_POINTER, 0, offsetof(struct ASN_RRC_BCCH_DL_SCH_MessageType__c1, choice.systemInformation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_SystemInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemInformation"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_RRC_BCCH_DL_SCH_MessageType__c1, choice.systemInformationBlockType1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_SIB1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemInformationBlockType1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_c1_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* systemInformation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* systemInformationBlockType1 */
};
static asn_CHOICE_specifics_t asn_SPC_ASN_RRC_c1_specs_2 = {
	sizeof(struct ASN_RRC_BCCH_DL_SCH_MessageType__c1),
	offsetof(struct ASN_RRC_BCCH_DL_SCH_MessageType__c1, _asn_ctx),
	offsetof(struct ASN_RRC_BCCH_DL_SCH_MessageType__c1, present),
	sizeof(((struct ASN_RRC_BCCH_DL_SCH_MessageType__c1 *)0)->present),
	asn_MAP_ASN_RRC_c1_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_c1_2 = {
	"c1",
	"c1",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_ASN_RRC_c1_constr_2, CHOICE_constraint },
	asn_MBR_ASN_RRC_c1_2,
	2,	/* Elements count */
	&asn_SPC_ASN_RRC_c1_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ASN_RRC_messageClassExtension_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_messageClassExtension_specs_5 = {
	sizeof(struct ASN_RRC_BCCH_DL_SCH_MessageType__messageClassExtension),
	offsetof(struct ASN_RRC_BCCH_DL_SCH_MessageType__messageClassExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_messageClassExtension_5 = {
	"messageClassExtension",
	"messageClassExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_messageClassExtension_tags_5,
	sizeof(asn_DEF_ASN_RRC_messageClassExtension_tags_5)
		/sizeof(asn_DEF_ASN_RRC_messageClassExtension_tags_5[0]) - 1, /* 1 */
	asn_DEF_ASN_RRC_messageClassExtension_tags_5,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_messageClassExtension_tags_5)
		/sizeof(asn_DEF_ASN_RRC_messageClassExtension_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_ASN_RRC_messageClassExtension_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_RRC_BCCH_DL_SCH_MessageType_1[] = {
	{ ATF_POINTER, 0, offsetof(struct ASN_RRC_BCCH_DL_SCH_MessageType, choice.c1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_RRC_c1_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c1"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_RRC_BCCH_DL_SCH_MessageType, choice.messageClassExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ASN_RRC_messageClassExtension_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageClassExtension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_BCCH_DL_SCH_MessageType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtension */
};
asn_CHOICE_specifics_t asn_SPC_ASN_RRC_BCCH_DL_SCH_MessageType_specs_1 = {
	sizeof(struct ASN_RRC_BCCH_DL_SCH_MessageType),
	offsetof(struct ASN_RRC_BCCH_DL_SCH_MessageType, _asn_ctx),
	offsetof(struct ASN_RRC_BCCH_DL_SCH_MessageType, present),
	sizeof(((struct ASN_RRC_BCCH_DL_SCH_MessageType *)0)->present),
	asn_MAP_ASN_RRC_BCCH_DL_SCH_MessageType_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_BCCH_DL_SCH_MessageType = {
	"BCCH-DL-SCH-MessageType",
	"BCCH-DL-SCH-MessageType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_ASN_RRC_BCCH_DL_SCH_MessageType_constr_1, CHOICE_constraint },
	asn_MBR_ASN_RRC_BCCH_DL_SCH_MessageType_1,
	2,	/* Elements count */
	&asn_SPC_ASN_RRC_BCCH_DL_SCH_MessageType_specs_1	/* Additional specs */
};
