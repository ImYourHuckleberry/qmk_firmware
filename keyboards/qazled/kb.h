#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, \
	K200,       K202, K203, K204, K205, K206, K207, K208, K209, \
	K300, K301,                   K305,             K308, K309  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109 }, \
	{ K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209 }, \
	{ K300,  K301,  KC_NO, KC_NO, KC_NO, K305,  KC_NO, KC_NO, K308,  K309 }  \
}

#endif