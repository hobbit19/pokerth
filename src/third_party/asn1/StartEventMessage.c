/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fnative-types`
 */

#include <asn_internal.h>

#include "StartEventMessage.h"

static asn_TYPE_member_t asn_MBR_StartEventMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct StartEventMessage, gameId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartEventMessage, fillWithComputerPlayers),
		(ASN_TAG_CLASS_UNIVERSAL | (1 << 2)),
		0,
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"fillWithComputerPlayers"
		},
};
static ber_tlv_tag_t asn_DEF_StartEventMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (18 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_StartEventMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (1 << 2)), 1, 0, 0 }, /* fillWithComputerPlayers at 399 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 } /* gameId at 398 */
};
static asn_SEQUENCE_specifics_t asn_SPC_StartEventMessage_specs_1 = {
	sizeof(struct StartEventMessage),
	offsetof(struct StartEventMessage, _asn_ctx),
	asn_MAP_StartEventMessage_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_StartEventMessage = {
	"StartEventMessage",
	"StartEventMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_StartEventMessage_tags_1,
	sizeof(asn_DEF_StartEventMessage_tags_1)
		/sizeof(asn_DEF_StartEventMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_StartEventMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_StartEventMessage_tags_1)
		/sizeof(asn_DEF_StartEventMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_StartEventMessage_1,
	2,	/* Elements count */
	&asn_SPC_StartEventMessage_specs_1	/* Additional specs */
};

