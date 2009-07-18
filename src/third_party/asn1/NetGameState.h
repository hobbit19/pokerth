/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 */

#ifndef	_NetGameState_H_
#define	_NetGameState_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NetGameState {
	NetGameState_statePreflop	= 0,
	NetGameState_stateFlop	= 1,
	NetGameState_stateTurn	= 2,
	NetGameState_stateRiver	= 3,
	NetGameState_statePreflopSmallBlind	= 4,
	NetGameState_statePreflopBigBlind	= 5
} e_NetGameState;

/* NetGameState */
typedef long	 NetGameState_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NetGameState;
asn_struct_free_f NetGameState_free;
asn_struct_print_f NetGameState_print;
asn_constr_check_f NetGameState_constraint;
ber_type_decoder_f NetGameState_decode_ber;
der_type_encoder_f NetGameState_encode_der;
xer_type_decoder_f NetGameState_decode_xer;
xer_type_encoder_f NetGameState_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _NetGameState_H_ */
