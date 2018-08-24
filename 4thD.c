// Created with bdf2c Version 4, (c) 2009, 2010 by Lutz Sammer

#include "font.h"

	/// character bitmap for each encoding
static const unsigned char __font_bitmap__[] = {
//  32 $20 'char32'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	________,
	________,
	________,
//  33 $21 'char33'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_X______,
	_X______,
	________,
	_X______,
//  34 $22 'char34'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	X_X_____,
	X_X_____,
	________,
	________,
//  35 $23 'char35'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_XX_____,
	XXXX____,
	XXXX____,
	_XX_____,
//  36 $24 'char36'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_X______,
	XXX_____,
	XXX_____,
	_X______,
//  37 $25 'char37'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	X__X____,
	__X_____,
	_X______,
	X__X____,
//  38 $26 'char38'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XX______,
	X_XX____,
	XXX_____,
	XX_X____,
//  39 $27 'char39'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	__X_____,
	_X______,
	________,
	________,
//  40 $28 'char40'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	__X_____,
	_X______,
	_X______,
	__X_____,
//  41 $29 'char41'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_X______,
	__X_____,
	__X_____,
	_X______,
//  42 $2a 'char42'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_X______,
	XXX_____,
	_X______,
	X_X_____,
//  43 $2b 'char43'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	_X______,
	XXX_____,
	_X______,
//  44 $2c 'char44'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	________,
	_XX_____,
	__X_____,
//  45 $2d 'char45'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	________,
	XXX_____,
	________,
//  46 $2e 'char46'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	________,
	________,
	_X______,
//  47 $2f 'char47'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	__X_____,
	__X_____,
	_X______,
	_X______,
//  48 $30 'char48'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	X_X_____,
	X_X_____,
	XXX_____,
//  49 $31 'char49'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XX______,
	_X______,
	_X______,
	XXX_____,
//  50 $32 'char50'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	__X_____,
	XX______,
	XXX_____,
//  51 $33 'char51'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	_XX_____,
	__X_____,
	XXX_____,
//  52 $34 'char52'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	X_X_____,
	X_X_____,
	XXX_____,
	__X_____,
//  53 $35 'char53'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	XX______,
	__X_____,
	XXX_____,
//  54 $36 'char54'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XX______,
	X_______,
	XXX_____,
	XXX_____,
//  55 $37 'char55'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	__X_____,
	_X______,
	_X______,
//  56 $38 'char56'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_XX_____,
	XXX_____,
	X_X_____,
	XXX_____,
//  57 $39 'char57'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	XXX_____,
	__X_____,
	_XX_____,
//  58 $3a 'char58'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	_X______,
	________,
	_X______,
//  59 $3b 'char59'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_X______,
	________,
	_XX_____,
	__X_____,
//  60 $3c 'char60'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	__X_____,
	_X______,
	__X_____,
//  61 $3d 'char61'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	XXX_____,
	________,
	XXX_____,
//  62 $3e 'char62'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	_X______,
	__X_____,
	_X______,
//  63 $3f 'char63'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	_XX_____,
	________,
	_X______,
//  64 $40 'char64'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXXX____,
	X__X____,
	_X_X____,
	XXXX____,
//  65 $41 'char65'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_XX_____,
	X_X_____,
	XXX_____,
	X_X_____,
//  66 $42 'char66'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XX______,
	XXX_____,
	X_X_____,
	XXX_____,
//  67 $43 'char67'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_XX_____,
	X_______,
	X_______,
	XXX_____,
//  68 $44 'char68'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XX______,
	X_X_____,
	X_X_____,
	XX______,
//  69 $45 'char69'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	XX______,
	X_______,
	XXX_____,
//  70 $46 'char70'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	XX______,
	X_______,
	X_______,
//  71 $47 'char71'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_XX_____,
	X_______,
	X_X_____,
	XXX_____,
//  72 $48 'char72'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	X_X_____,
	X_X_____,
	XXX_____,
	X_X_____,
//  73 $49 'char73'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	_X______,
	_X______,
	XXX_____,
//  74 $4a 'char74'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_XX_____,
	__X_____,
	X_X_____,
	XXX_____,
//  75 $4b 'char75'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	X_X_____,
	XX______,
	XX______,
	X_X_____,
//  76 $4c 'char76'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	X_______,
	X_______,
	X_______,
	XXX_____,
//  77 $4d 'char77'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	XXX_____,
	XXX_____,
	X_X_____,
//  78 $4e 'char78'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	X_X_____,
	X_X_____,
	X_X_____,
//  79 $4f 'char79'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	X_X_____,
	X_X_____,
	XXX_____,
//  80 $50 'char80'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	X_X_____,
	XXX_____,
	X_______,
//  81 $51 'char81'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	X_X_____,
	XXX_____,
	XXXX____,
//  82 $52 'char82'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	X_X_____,
	XX______,
	X_X_____,
//  83 $53 'char83'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	X_______,
	_XX_____,
	XXX_____,
//  84 $54 'char84'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	_X______,
	_X______,
	_X______,
//  85 $55 'char85'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	X_X_____,
	X_X_____,
	X_X_____,
	XXX_____,
//  86 $56 'char86'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	X_X_____,
	X_X_____,
	XX______,
	X_______,
//  87 $57 'char87'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	X_X_____,
	XXX_____,
	XXX_____,
	XXX_____,
//  88 $58 'char88'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	X_X_____,
	_X______,
	X_X_____,
	X_X_____,
//  89 $59 'char89'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	X_X_____,
	XXX_____,
	_X______,
	_X______,
//  90 $5a 'char90'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XXX_____,
	__X_____,
	_X______,
	XXX_____,
//  91 $5b 'char91'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_XX_____,
	_X______,
	_X______,
	_XX_____,
//  92 $5c 'char92'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_X______,
	_X______,
	__X_____,
	__X_____,
//  93 $5d 'char93'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_XX_____,
	__X_____,
	__X_____,
	_XX_____,
//  94 $5e 'char94'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_X______,
	X_X_____,
	________,
	________,
//  95 $5f 'char95'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	________,
	________,
	XXXX____,
//  96 $60 'char96'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	X_______,
	_X______,
	________,
	________,
//  97 $61 'char97'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	_XX_____,
	XXX_____,
	XXX_____,
//  98 $62 'char98'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	X_______,
	XXX_____,
	X_X_____,
	XXX_____,
//  99 $63 'char99'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	_XX_____,
	X_______,
	XXX_____,
// 100 $64 'char100'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	__X_____,
	XXX_____,
	X_X_____,
	XXX_____,
// 101 $65 'char101'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	XXX_____,
	XXX_____,
	XX______,
// 102 $66 'char102'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_XX_____,
	_X______,
	XXX_____,
	_X______,
// 103 $67 'char103'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_XX_____,
	XXX_____,
	__X_____,
	XX______,
// 104 $68 'char104'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	X_______,
	XXX_____,
	X_X_____,
	X_X_____,
// 105 $69 'char105'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_X______,
	________,
	_X______,
	_X______,
// 106 $6a 'char106'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_X______,
	________,
	_X______,
	XX______,
// 107 $6b 'char107'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	X_______,
	X_X_____,
	XX______,
	X_X_____,
// 108 $6c 'char108'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XX______,
	_X______,
	_X______,
	_XX_____,
// 109 $6d 'char109'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	XXX_____,
	XXX_____,
	X_X_____,
// 110 $6e 'char110'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	XXX_____,
	X_X_____,
	X_X_____,
// 111 $6f 'char111'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	XXX_____,
	X_X_____,
	XXX_____,
// 112 $70 'char112'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_X______,
	X_X_____,
	XX______,
	X_______,
// 113 $71 'char113'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_X______,
	X_X_____,
	_XX_____,
	__X_____,
// 114 $72 'char114'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	XXX_____,
	X_______,
	X_______,
// 115 $73 'char115'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	_XX_____,
	_X______,
	XX______,
// 116 $74 'char116'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_X______,
	_XX_____,
	_X______,
	_XX_____,
// 117 $75 'char117'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	X_X_____,
	X_X_____,
	XXX_____,
// 118 $76 'char118'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	X_X_____,
	XXX_____,
	_X______,
// 119 $77 'char119'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	X_X_____,
	XXX_____,
	XXX_____,
// 120 $78 'char120'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	X_X_____,
	_X______,
	X_X_____,
// 121 $79 'char121'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	X_X_____,
	_XX_____,
	XX______,
// 122 $7a 'char122'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	________,
	XX______,
	_X______,
	_XX_____,
// 123 $7b 'char123'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_XX_____,
	XX______,
	_X______,
	_XX_____,
// 124 $7c 'char124'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	_X______,
	_X______,
	_X______,
	_X______,
// 125 $7d 'char125'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	XX______,
	_XX_____,
	_X______,
	XX______,
// 126 $7e 'char126'
//	width 4, bbx 0, bby 0, bbw 4, bbh 4
	__X_____,
	XXX_____,
	X_______,
	________,
};

	/// character width for each encoding
static const unsigned char __font_widths__[] = {
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
};

	/// character encoding for each index entry
static const unsigned short __font_index__[] = {
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
	58,
	59,
	60,
	61,
	62,
	63,
	64,
	65,
	66,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78,
	79,
	80,
	81,
	82,
	83,
	84,
	85,
	86,
	87,
	88,
	89,
	90,
	91,
	92,
	93,
	94,
	95,
	96,
	97,
	98,
	99,
	100,
	101,
	102,
	103,
	104,
	105,
	106,
	107,
	108,
	109,
	110,
	111,
	112,
	113,
	114,
	115,
	116,
	117,
	118,
	119,
	120,
	121,
	122,
	123,
	124,
	125,
	126,
};

	/// bitmap font structure
const struct bitmap_font font = {
	.Width = 4, .Height = 4,
	.Chars = 95,
	.Widths = __font_widths__,
	.Index = __font_index__,
	.Bitmap = __font_bitmap__,
};

