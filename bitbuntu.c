// Created with bdf2c Version 4, (c) 2009, 2010 by Lutz Sammer

#include "font.h"

	/// character bitmap for each encoding
static const unsigned char __font_bitmap__[] = {
//  32 $20 'char32'
//	width 6, bbx 0, bby 0, bbw 0, bbh 0
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
//  33 $21 'char33'
//	width 6, bbx 3, bby 0, bbw 1, bbh 6
	________,
	________,
	________,
	___X____,
	___X____,
	___X____,
	___X____,
	________,
	___X____,
	________,
	________,
//  34 $22 'char34'
//	width 6, bbx 2, bby 5, bbw 3, bbh 2
	________,
	________,
	__X_X___,
	__X_X___,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
//  35 $23 'char35'
//	width 6, bbx 1, bby 1, bbw 5, bbh 5
	________,
	________,
	________,
	__X_X___,
	_XXXXX__,
	__X_X___,
	_XXXXX__,
	__X_X___,
	________,
	________,
	________,
//  36 $24 'char36'
//	width 6, bbx 1, bby -1, bbw 5, bbh 7
	________,
	________,
	________,
	___X____,
	__XXXX__,
	_X______,
	__XXX___,
	_____X__,
	_XXXX___,
	___X____,
	________,
//  37 $25 'char37'
//	width 6, bbx 1, bby 0, bbw 5, bbh 6
	________,
	________,
	________,
	_XX_____,
	_XX_XX__,
	___XX___,
	__XX____,
	_XX_XX__,
	____XX__,
	________,
	________,
//  38 $26 'char38'
//	width 6, bbx 1, bby 0, bbw 5, bbh 7
	________,
	________,
	___XX___,
	__X_____,
	__X_____,
	__XX_X__,
	_X__X___,
	_X__X___,
	__XX_X__,
	________,
	________,
//  39 $27 'char39'
//	width 6, bbx 2, bby 5, bbw 1, bbh 2
	________,
	________,
	__X_____,
	__X_____,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
//  40 $28 'char40'
//	width 6, bbx 2, bby -1, bbw 2, bbh 8
	________,
	________,
	___X____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	___X____,
	________,
//  41 $29 'char41'
//	width 6, bbx 2, bby -1, bbw 2, bbh 8
	________,
	________,
	__X_____,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	__X_____,
	________,
//  42 $2a 'char42'
//	width 6, bbx 1, bby 1, bbw 5, bbh 5
	________,
	________,
	________,
	___X____,
	_X_X_X__,
	__XXX___,
	_X_X_X__,
	___X____,
	________,
	________,
	________,
//  43 $2b 'char43'
//	width 6, bbx 1, bby 0, bbw 5, bbh 5
	________,
	________,
	________,
	________,
	___X____,
	___X____,
	_XXXXX__,
	___X____,
	___X____,
	________,
	________,
//  44 $2c 'char44'
//	width 6, bbx 2, bby -1, bbw 2, bbh 3
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	___X____,
	__XX____,
	__X_____,
	________,
//  45 $2d 'char45'
//	width 6, bbx 1, bby 2, bbw 5, bbh 1
	________,
	________,
	________,
	________,
	________,
	________,
	_XXXXX__,
	________,
	________,
	________,
	________,
//  46 $2e 'char46'
//	width 6, bbx 2, bby 0, bbw 2, bbh 2
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	__XX____,
	__XX____,
	________,
	________,
//  47 $2f 'char47'
//	width 6, bbx 1, bby -1, bbw 4, bbh 8
	________,
	________,
	____X___,
	____X___,
	___X____,
	___X____,
	__X_____,
	__X_____,
	_X______,
	_X______,
	________,
//  48 $30 'char48'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	__XX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
//  49 $31 'char49'
//	width 6, bbx 2, bby 0, bbw 2, bbh 7
	________,
	________,
	___X____,
	__XX____,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	________,
	________,
//  50 $32 'char50'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	__XX____,
	_X__X___,
	____X___,
	___X____,
	__X_____,
	_X______,
	_XXXX___,
	________,
	________,
//  51 $33 'char51'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	_XXX____,
	____X___,
	____X___,
	__XX____,
	____X___,
	____X___,
	_XXX____,
	________,
	________,
//  52 $34 'char52'
//	width 6, bbx 1, bby 0, bbw 5, bbh 7
	________,
	________,
	____X___,
	___XX___,
	__X_X___,
	_X__X___,
	_XXXXX__,
	____X___,
	____X___,
	________,
	________,
//  53 $35 'char53'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	_XXXX___,
	_X______,
	_X______,
	_XXX____,
	____X___,
	____X___,
	_XXX____,
	________,
	________,
//  54 $36 'char54'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	__XX____,
	_X______,
	_X______,
	_XXX____,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
//  55 $37 'char55'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	_XXXX___,
	____X___,
	____X___,
	___X____,
	___X____,
	__X_____,
	__X_____,
	________,
	________,
//  56 $38 'char56'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	__XX____,
	_X__X___,
	_X__X___,
	__XX____,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
//  57 $39 'char57'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	__XX____,
	_X__X___,
	_X__X___,
	__XXX___,
	____X___,
	____X___,
	__XX____,
	________,
	________,
//  58 $3a 'char58'
//	width 6, bbx 2, bby 0, bbw 2, bbh 5
	________,
	________,
	________,
	________,
	__XX____,
	__XX____,
	________,
	__XX____,
	__XX____,
	________,
	________,
//  59 $3b 'char59'
//	width 6, bbx 2, bby -1, bbw 2, bbh 6
	________,
	________,
	________,
	________,
	__XX____,
	__XX____,
	________,
	___X____,
	__XX____,
	__X_____,
	________,
//  60 $3c 'char60'
//	width 6, bbx 1, bby 0, bbw 3, bbh 5
	________,
	________,
	________,
	________,
	___X____,
	__XX____,
	_XX_____,
	__XX____,
	___X____,
	________,
	________,
//  61 $3d 'char61'
//	width 6, bbx 1, bby 1, bbw 4, bbh 3
	________,
	________,
	________,
	________,
	________,
	_XXXX___,
	________,
	_XXXX___,
	________,
	________,
	________,
//  62 $3e 'char62'
//	width 6, bbx 1, bby 0, bbw 3, bbh 5
	________,
	________,
	________,
	________,
	_X______,
	_XX_____,
	__XX____,
	_XX_____,
	_X______,
	________,
	________,
//  63 $3f 'char63'
//	width 6, bbx 1, bby -1, bbw 4, bbh 7
	________,
	________,
	________,
	__XX____,
	_X__X___,
	____X___,
	___X____,
	__X_____,
	________,
	__X_____,
	________,
//  64 $40 'char64'
//	width 6, bbx 1, bby -1, bbw 4, bbh 8
	________,
	________,
	__XX____,
	_X__X___,
	_X_XX___,
	_XX_X___,
	_XX_X___,
	_X_XX___,
	_X______,
	__XX____,
	________,
//  65 $41 'char65'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	__XXX___,
	_X__X___,
	_X__X___,
	_X__X___,
	_XXXX___,
	_X__X___,
	________,
	________,
//  66 $42 'char66'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	_XXX____,
	_X__X___,
	_XXX____,
	_X__X___,
	_X__X___,
	_XXX____,
	________,
	________,
//  67 $43 'char67'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	__XXX___,
	_X______,
	_X______,
	_X______,
	_X______,
	__XXX___,
	________,
	________,
//  68 $44 'char68'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	_XXX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	_XXX____,
	________,
	________,
//  69 $45 'char69'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	_XXXX___,
	_X______,
	_XXX____,
	_X______,
	_X______,
	_XXXX___,
	________,
	________,
//  70 $46 'char70'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	_XXXX___,
	_X______,
	_XXX____,
	_X______,
	_X______,
	_X______,
	________,
	________,
//  71 $47 'char71'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	__XXX___,
	_X______,
	_X______,
	_X__X___,
	_X__X___,
	__XXX___,
	________,
	________,
//  72 $48 'char72'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	_X__X___,
	_X__X___,
	_X__X___,
	_XXXX___,
	_X__X___,
	_X__X___,
	________,
	________,
//  73 $49 'char73'
//	width 6, bbx 3, bby 0, bbw 1, bbh 6
	________,
	________,
	________,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	________,
	________,
//  74 $4a 'char74'
//	width 6, bbx 2, bby 0, bbw 3, bbh 6
	________,
	________,
	________,
	____X___,
	____X___,
	____X___,
	____X___,
	____X___,
	__XX____,
	________,
	________,
//  75 $4b 'char75'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	_X__X___,
	_X_X____,
	_XX_____,
	_XX_____,
	_X_X____,
	_X__X___,
	________,
	________,
//  76 $4c 'char76'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	_X______,
	_X______,
	_X______,
	_X______,
	_X______,
	_XXXX___,
	________,
	________,
//  77 $4d 'char77'
//	width 6, bbx 1, bby 0, bbw 5, bbh 6
	________,
	________,
	________,
	_XX_XX__,
	_X_X_X__,
	_X_X_X__,
	_X___X__,
	_X___X__,
	_X___X__,
	________,
	________,
//  78 $4e 'char78'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	_X__X___,
	_X__X___,
	_XX_X___,
	_X_XX___,
	_X__X___,
	_X__X___,
	________,
	________,
//  79 $4f 'char79'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	__XX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
//  80 $50 'char80'
//	width 6, bbx 2, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	__XXX___,
	__X__X__,
	__X__X__,
	__XXX___,
	__X_____,
	__X_____,
	________,
	________,
//  81 $51 'char81'
//	width 6, bbx 1, bby -1, bbw 4, bbh 7
	________,
	________,
	________,
	__XX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	___XX___,
	________,
//  82 $52 'char82'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	_XXX____,
	_X__X___,
	_X__X___,
	_XXX____,
	_X_X____,
	_X__X___,
	________,
	________,
//  83 $53 'char83'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	__XXX___,
	_X______,
	__XX____,
	____X___,
	____X___,
	_XXX____,
	________,
	________,
//  84 $54 'char84'
//	width 6, bbx 1, bby 0, bbw 5, bbh 6
	________,
	________,
	________,
	_XXXXX__,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	________,
	________,
//  85 $55 'char85'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XXX___,
	________,
	________,
//  86 $56 'char86'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	__XX____,
	________,
	________,
//  87 $57 'char87'
//	width 6, bbx 1, bby 0, bbw 5, bbh 6
	________,
	________,
	________,
	_X___X__,
	_X___X__,
	_X___X__,
	_X_X_X__,
	_X_X_X__,
	__XXXX__,
	________,
	________,
//  88 $58 'char88'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	_X__X___,
	_X__X___,
	__XX____,
	__XX____,
	_X__X___,
	_X__X___,
	________,
	________,
//  89 $59 'char89'
//	width 6, bbx 1, bby 0, bbw 5, bbh 6
	________,
	________,
	________,
	_X___X__,
	_X___X__,
	__X_X___,
	___X____,
	___X____,
	___X____,
	________,
	________,
//  90 $5a 'char90'
//	width 6, bbx 1, bby 0, bbw 4, bbh 6
	________,
	________,
	________,
	_XXXX___,
	____X___,
	___X____,
	__X_____,
	_X______,
	_XXXX___,
	________,
	________,
//  91 $5b 'char91'
//	width 6, bbx 2, bby -1, bbw 2, bbh 8
	________,
	________,
	__XX____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__XX____,
	________,
//  92 $5c 'char92'
//	width 6, bbx 1, bby -1, bbw 4, bbh 8
	________,
	________,
	_X______,
	_X______,
	__X_____,
	__X_____,
	___X____,
	___X____,
	____X___,
	____X___,
	________,
//  93 $5d 'char93'
//	width 6, bbx 2, bby -1, bbw 2, bbh 8
	________,
	________,
	__XX____,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	__XX____,
	________,
//  94 $5e 'char94'
//	width 6, bbx 1, bby 3, bbw 5, bbh 3
	________,
	________,
	________,
	___X____,
	__X_X___,
	_X___X__,
	________,
	________,
	________,
	________,
	________,
//  95 $5f 'char95'
//	width 6, bbx 1, bby -1, bbw 5, bbh 1
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	_XXXXX__,
	________,
//  96 $60 'char96'
//	width 6, bbx 2, bby 5, bbw 2, bbh 2
	________,
	________,
	__X_____,
	___X____,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
//  97 $61 'char97'
//	width 6, bbx 1, bby 0, bbw 4, bbh 5
	________,
	________,
	________,
	________,
	__XX____,
	____X___,
	__XXX___,
	_X__X___,
	__XXX___,
	________,
	________,
//  98 $62 'char98'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	_X______,
	_X______,
	_XXX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_XXX____,
	________,
	________,
//  99 $63 'char99'
//	width 6, bbx 1, bby 0, bbw 4, bbh 5
	________,
	________,
	________,
	________,
	__XXX___,
	_X______,
	_X______,
	_X______,
	__XXX___,
	________,
	________,
// 100 $64 'char100'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	____X___,
	____X___,
	__XXX___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XXX___,
	________,
	________,
// 101 $65 'char101'
//	width 6, bbx 1, bby 0, bbw 4, bbh 5
	________,
	________,
	________,
	________,
	__XX____,
	_X__X___,
	_XXXX___,
	_X______,
	__XXX___,
	________,
	________,
// 102 $66 'char102'
//	width 6, bbx 2, bby 0, bbw 3, bbh 7
	________,
	________,
	___XX___,
	__X_____,
	__XXX___,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
// 103 $67 'char103'
//	width 6, bbx 1, bby -1, bbw 4, bbh 6
	________,
	________,
	________,
	________,
	__XXX___,
	_X__X___,
	_X__X___,
	__XXX___,
	____X___,
	__XX____,
	________,
// 104 $68 'char104'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	_X______,
	_X______,
	_XXX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	________,
	________,
// 105 $69 'char105'
//	width 6, bbx 3, bby 0, bbw 1, bbh 7
	________,
	________,
	___X____,
	________,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	________,
	________,
// 106 $6a 'char106'
//	width 6, bbx 2, bby -1, bbw 2, bbh 8
	________,
	________,
	___X____,
	________,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	__X_____,
	________,
// 107 $6b 'char107'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	_X______,
	_X______,
	_X__X___,
	_X_X____,
	_XX_____,
	_X_X____,
	_X__X___,
	________,
	________,
// 108 $6c 'char108'
//	width 6, bbx 2, bby 0, bbw 3, bbh 7
	________,
	________,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	___XX___,
	________,
	________,
// 109 $6d 'char109'
//	width 6, bbx 1, bby 0, bbw 5, bbh 5
	________,
	________,
	________,
	________,
	_XXXX___,
	_X_X_X__,
	_X_X_X__,
	_X_X_X__,
	_X___X__,
	________,
	________,
// 110 $6e 'char110'
//	width 6, bbx 1, bby 0, bbw 4, bbh 5
	________,
	________,
	________,
	________,
	_XXX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	________,
	________,
// 111 $6f 'char111'
//	width 6, bbx 1, bby 0, bbw 4, bbh 5
	________,
	________,
	________,
	________,
	__XX____,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
// 112 $70 'char112'
//	width 6, bbx 1, bby -1, bbw 4, bbh 6
	________,
	________,
	________,
	________,
	_XXX____,
	_X__X___,
	_X__X___,
	_XXX____,
	_X______,
	_X______,
	________,
// 113 $71 'char113'
//	width 6, bbx 1, bby -1, bbw 4, bbh 6
	________,
	________,
	________,
	________,
	__XXX___,
	_X__X___,
	_X__X___,
	__XXX___,
	____X___,
	____X___,
	________,
// 114 $72 'char114'
//	width 6, bbx 2, bby 0, bbw 3, bbh 5
	________,
	________,
	________,
	________,
	__XXX___,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
// 115 $73 'char115'
//	width 6, bbx 1, bby 0, bbw 4, bbh 5
	________,
	________,
	________,
	________,
	__XXX___,
	_X______,
	__XX____,
	____X___,
	_XXX____,
	________,
	________,
// 116 $74 'char116'
//	width 6, bbx 2, bby 0, bbw 3, bbh 7
	________,
	________,
	__X_____,
	__X_____,
	__XXX___,
	__X_____,
	__X_____,
	__X_____,
	___XX___,
	________,
	________,
// 117 $75 'char117'
//	width 6, bbx 1, bby 0, bbw 4, bbh 5
	________,
	________,
	________,
	________,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XXX___,
	________,
	________,
// 118 $76 'char118'
//	width 6, bbx 1, bby 0, bbw 4, bbh 5
	________,
	________,
	________,
	________,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	__XX____,
	________,
	________,
// 119 $77 'char119'
//	width 6, bbx 1, bby 0, bbw 5, bbh 5
	________,
	________,
	________,
	________,
	_X___X__,
	_X_X_X__,
	_X_X_X__,
	_X_X_X__,
	__XXXX__,
	________,
	________,
// 120 $78 'char120'
//	width 6, bbx 1, bby 0, bbw 4, bbh 5
	________,
	________,
	________,
	________,
	_X__X___,
	_X__X___,
	__XX____,
	_X__X___,
	_X__X___,
	________,
	________,
// 121 $79 'char121'
//	width 6, bbx 1, bby -1, bbw 4, bbh 6
	________,
	________,
	________,
	________,
	_X__X___,
	_X__X___,
	_X__X___,
	__XXX___,
	____X___,
	__XX____,
	________,
// 122 $7a 'char122'
//	width 6, bbx 1, bby 0, bbw 4, bbh 5
	________,
	________,
	________,
	________,
	_XXXX___,
	____X___,
	__XX____,
	_X______,
	_XXXX___,
	________,
	________,
// 123 $7b 'char123'
//	width 6, bbx 2, bby -1, bbw 3, bbh 8
	________,
	________,
	____X___,
	___X____,
	___X____,
	__XX____,
	___X____,
	___X____,
	___X____,
	____X___,
	________,
// 124 $7c 'char124'
//	width 6, bbx 3, bby -1, bbw 1, bbh 7
	________,
	________,
	________,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	________,
// 125 $7d 'char125'
//	width 6, bbx 1, bby -1, bbw 3, bbh 8
	________,
	________,
	_X______,
	__X_____,
	__X_____,
	__XX____,
	__X_____,
	__X_____,
	__X_____,
	_X______,
	________,
// 126 $7e 'char126'
//	width 6, bbx 1, bby 2, bbw 5, bbh 2
	________,
	________,
	________,
	________,
	________,
	__XX_X__,
	_X_XX___,
	________,
	________,
	________,
	________,
// 128 $80 'char128'
//	width 6, bbx 0, bby 0, bbw 0, bbh 0
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
// 161 $a1 'char33'
//	width 6, bbx 4, bby -1, bbw 1, bbh 7
	________,
	________,
	________,
	____X___,
	________,
	____X___,
	____X___,
	____X___,
	____X___,
	____X___,
	________,
// 162 $a2 'char99'
//	width 6, bbx 1, bby -1, bbw 5, bbh 7
	________,
	________,
	________,
	____X___,
	__XXX___,
	_X_X_X__,
	_X_X____,
	_XX__X__,
	__XXX___,
	__X_____,
	________,
// 163 $a3 'char163'
//	width 6, bbx 1, bby 0, bbw 5, bbh 6
	________,
	________,
	________,
	___XXX__,
	__X_____,
	__X_____,
	_XXXX___,
	__X_____,
	_XXXXX__,
	________,
	________,
// 164 $a4 'char164'
//	width 6, bbx 0, bby 0, bbw 6, bbh 6
	________,
	________,
	________,
	X____X__,
	_XXXX___,
	_X__X___,
	_X__X___,
	_XXXX___,
	X____X__,
	________,
	________,
// 165 $a5 'char165'
//	width 6, bbx 1, bby -1, bbw 5, bbh 7
	________,
	________,
	________,
	_X___X__,
	__X_X___,
	___X____,
	__XXX___,
	___X____,
	__XXX___,
	___X____,
	________,
// 166 $a6 'char166'
//	width 6, bbx 3, bby -1, bbw 1, bbh 7
	________,
	________,
	________,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	________,
// 167 $a7 'char167'
//	width 6, bbx 1, bby -1, bbw 4, bbh 6
	________,
	________,
	________,
	________,
	__XXX___,
	__X_____,
	_X_X____,
	__X_X___,
	___X____,
	_XXX____,
	________,
// 168 $a8 'char168'
//	width 6, bbx 2, bby 5, bbw 4, bbh 1
	________,
	________,
	________,
	__X__X__,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
// 169 $a9 'char169'
//	width 6, bbx 0, bby 0, bbw 6, bbh 7
	________,
	________,
	__XX____,
	_X__X___,
	X_XX_X__,
	XX___X__,
	X_XX_X__,
	_X__X___,
	__XX____,
	________,
	________,
// 170 $aa 'char170'
//	width 6, bbx 1, bby 1, bbw 3, bbh 5
	________,
	________,
	________,
	__X_____,
	___X____,
	__XX____,
	_X_X____,
	__XX____,
	________,
	________,
	________,
// 171 $ab 'char187'
//	width 6, bbx 1, bby 1, bbw 5, bbh 3
	________,
	________,
	________,
	________,
	________,
	__X__X__,
	_X__X___,
	__X__X__,
	________,
	________,
	________,
// 172 $ac 'char172'
//	width 6, bbx 1, bby 0, bbw 5, bbh 3
	________,
	________,
	________,
	________,
	________,
	________,
	_XXXXX__,
	_____X__,
	_____X__,
	________,
	________,
// 174 $ae 'char169'
//	width 6, bbx 0, bby 0, bbw 6, bbh 7
	________,
	________,
	__XX____,
	_X__X___,
	X_XXXX__,
	X_XX_X__,
	X_X_XX__,
	_X__X___,
	__XX____,
	________,
	________,
// 175 $af 'char175'
//	width 6, bbx 2, bby 5, bbw 3, bbh 1
	________,
	________,
	________,
	__XXX___,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
// 176 $b0 'char176'
//	width 6, bbx 1, bby 3, bbw 3, bbh 3
	________,
	________,
	________,
	__X_____,
	_X_X____,
	__X_____,
	________,
	________,
	________,
	________,
	________,
// 177 $b1 'char177'
//	width 6, bbx 2, bby 1, bbw 3, bbh 5
	________,
	________,
	________,
	___X____,
	__XXX___,
	___X____,
	________,
	__XXX___,
	________,
	________,
	________,
// 178 $b2 'char178'
//	width 6, bbx 1, bby 2, bbw 4, bbh 5
	________,
	________,
	__XX____,
	_X__X___,
	___X____,
	__X_____,
	_XXXX___,
	________,
	________,
	________,
	________,
// 179 $b3 'char179'
//	width 6, bbx 1, bby 2, bbw 3, bbh 5
	________,
	________,
	_XX_____,
	___X____,
	_XX_____,
	___X____,
	_XX_____,
	________,
	________,
	________,
	________,
// 180 $b4 'char180'
//	width 6, bbx 2, bby 6, bbw 2, bbh 2
	________,
	___X____,
	__X_____,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
// 181 $b5 'char181'
//	width 6, bbx 1, bby -2, bbw 4, bbh 7
	________,
	________,
	________,
	________,
	_X__X___,
	_X__X___,
	_X__X___,
	_X_XX___,
	_XX_X___,
	_X______,
	_X______,
// 182 $b6 'char182'
//	width 6, bbx 0, bby -1, bbw 5, bbh 7
	________,
	________,
	________,
	_XXXX___,
	XXX_X___,
	XXX_X___,
	_XX_X___,
	__X_X___,
	__X_X___,
	__X_X___,
	________,
// 183 $b7 'char183'
//	width 6, bbx 3, bby 1, bbw 2, bbh 2
	________,
	________,
	________,
	________,
	________,
	________,
	___XX___,
	___XX___,
	________,
	________,
	________,
// 184 $b8 'char184'
//	width 6, bbx 2, bby 0, bbw 3, bbh 3
	________,
	________,
	________,
	________,
	________,
	________,
	___X____,
	____X___,
	__XXX___,
	________,
	________,
// 185 $b9 'char185'
//	width 6, bbx 1, bby 1, bbw 2, bbh 5
	________,
	________,
	________,
	__X_____,
	_XX_____,
	__X_____,
	__X_____,
	__X_____,
	________,
	________,
	________,
// 186 $ba 'char186'
//	width 6, bbx 1, bby 2, bbw 4, bbh 4
	________,
	________,
	________,
	__XX____,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
	________,
	________,
// 187 $bb 'char187'
//	width 6, bbx 1, bby 1, bbw 5, bbh 3
	________,
	________,
	________,
	________,
	________,
	_X__X___,
	__X__X__,
	_X__X___,
	________,
	________,
	________,
// 188 $bc 'char179'
//	width 6, bbx 0, bby -1, bbw 6, bbh 8
	________,
	________,
	_X______,
	XX______,
	_X______,
	_X__X___,
	___XX___,
	__X_X___,
	__XXXX__,
	____X___,
	________,
// 189 $bd 'char189'
//	width 6, bbx 0, bby 0, bbw 6, bbh 7
	________,
	________,
	_X______,
	XX______,
	_X______,
	_X_XX___,
	_____X__,
	____X___,
	___XXX__,
	________,
	________,
// 190 $be 'char179'
//	width 6, bbx 0, bby -1, bbw 6, bbh 8
	________,
	________,
	XX______,
	__X_____,
	_X______,
	__X_X___,
	XX_XX___,
	__X_X___,
	__XXXX__,
	____X___,
	________,
// 191 $bf 'char63'
//	width 6, bbx 1, bby -1, bbw 4, bbh 7
	________,
	________,
	________,
	___X____,
	________,
	___X____,
	__X_____,
	_X______,
	_X__X___,
	__XX____,
	________,
// 192 $c0 'char196'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__X_____,
	___X____,
	__XXX___,
	_X__X___,
	_X__X___,
	_X__X___,
	_XXXX___,
	_X__X___,
	________,
	________,
// 193 $c1 'char196'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	____X___,
	___X____,
	__XXX___,
	_X__X___,
	_X__X___,
	_X__X___,
	_XXXX___,
	_X__X___,
	________,
	________,
// 194 $c2 'char196'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__XX____,
	_X__X___,
	__XX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_XXXX___,
	_X__X___,
	________,
	________,
// 195 $c3 'char196'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__X_X___,
	_X_X____,
	__XXX___,
	_X__X___,
	_X__X___,
	_X__X___,
	_XXXX___,
	_X__X___,
	________,
	________,
// 196 $c4 'char196'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	_X__X___,
	________,
	__XXX___,
	_X__X___,
	_X__X___,
	_X__X___,
	_XXXX___,
	_X__X___,
	________,
	________,
// 197 $c5 'char197'
//	width 6, bbx 1, bby 0, bbw 4, bbh 9
	___X____,
	__X_X___,
	___X____,
	__XXX___,
	_X__X___,
	_X__X___,
	_X__X___,
	_XXXX___,
	_X__X___,
	________,
	________,
// 198 $c6 'char65'
//	width 6, bbx 0, bby 0, bbw 6, bbh 6
	________,
	________,
	________,
	_XXXXX__,
	X__X____,
	X__XX___,
	X__X____,
	XXXX____,
	X__XXX__,
	________,
	________,
// 199 $c7 'char67'
//	width 6, bbx 1, bby -2, bbw 4, bbh 8
	________,
	________,
	________,
	__XXX___,
	_X______,
	_X______,
	_X______,
	_X______,
	__XXX___,
	___X____,
	__X_____,
// 200 $c8 'char69'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__X_____,
	___X____,
	_XXXX___,
	_X______,
	_XXX____,
	_X______,
	_X______,
	_XXXX___,
	________,
	________,
// 201 $c9 'char69'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	___X____,
	__X_____,
	_XXXX___,
	_X______,
	_XXX____,
	_X______,
	_X______,
	_XXXX___,
	________,
	________,
// 202 $ca 'char69'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__XX____,
	_X__X___,
	__XXX___,
	_X______,
	_X______,
	_XXX____,
	_X______,
	_XXXX___,
	________,
	________,
// 203 $cb 'char69'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	_X__X___,
	________,
	_XXXX___,
	_X______,
	_XXX____,
	_X______,
	_X______,
	_XXXX___,
	________,
	________,
// 204 $cc 'char73'
//	width 6, bbx 2, bby 0, bbw 3, bbh 8
	________,
	__X_____,
	___X____,
	__XXX___,
	___X____,
	___X____,
	___X____,
	___X____,
	__XXX___,
	________,
	________,
// 205 $cd 'char73'
//	width 6, bbx 2, bby 0, bbw 3, bbh 8
	________,
	____X___,
	___X____,
	__XXX___,
	___X____,
	___X____,
	___X____,
	___X____,
	__XXX___,
	________,
	________,
// 206 $ce 'char73'
//	width 6, bbx 2, bby 0, bbw 3, bbh 8
	________,
	___X____,
	__X_X___,
	________,
	__XXX___,
	___X____,
	___X____,
	___X____,
	__XXX___,
	________,
	________,
// 207 $cf 'char73'
//	width 6, bbx 2, bby 0, bbw 3, bbh 8
	________,
	__X_X___,
	________,
	__XXX___,
	___X____,
	___X____,
	___X____,
	___X____,
	__XXX___,
	________,
	________,
// 208 $d0 'char68'
//	width 6, bbx 1, bby 0, bbw 5, bbh 6
	________,
	________,
	________,
	__XXX___,
	__X__X__,
	_XXX_X__,
	__X__X__,
	__X__X__,
	__XXX___,
	________,
	________,
// 209 $d1 'char110'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__X_X___,
	_X_X____,
	_X__X___,
	_X__X___,
	_XX_X___,
	_X_XX___,
	_X__X___,
	_X__X___,
	________,
	________,
// 210 $d2 'char214'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__X_____,
	___X____,
	__XX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
// 211 $d3 'char214'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	___X____,
	__X_____,
	__XX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
// 212 $d4 'char214'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__XX____,
	_X__X___,
	__XX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
// 213 $d5 'char214'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__X_X___,
	_X_X____,
	__XX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
// 214 $d6 'char214'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	_X__X___,
	________,
	__XX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
// 215 $d7 'char215'
//	width 6, bbx 2, bby 2, bbw 3, bbh 3
	________,
	________,
	________,
	________,
	__X_X___,
	___X____,
	__X_X___,
	________,
	________,
	________,
	________,
// 216 $d8 'char248'
//	width 6, bbx 1, bby -1, bbw 4, bbh 8
	________,
	________,
	____X___,
	__XXX___,
	_X_XX___,
	_X_XX___,
	_XX_X___,
	_XX_X___,
	_XXX____,
	_X______,
	________,
// 217 $d9 'char85'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__X_____,
	___X____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XXX___,
	________,
	________,
// 218 $da 'char85'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	___X____,
	__X_____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XXX___,
	________,
	________,
// 219 $db 'char85'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__XX____,
	_X__X___,
	________,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XXX___,
	________,
	________,
// 220 $dc 'char85'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	_X__X___,
	________,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XXX___,
	________,
	________,
// 221 $dd 'char89'
//	width 6, bbx 1, bby 0, bbw 5, bbh 8
	________,
	____X___,
	___X____,
	_X___X__,
	_X___X__,
	__X_X___,
	___X____,
	___X____,
	___X____,
	________,
	________,
// 222 $de 'char112'
//	width 6, bbx 1, bby -1, bbw 4, bbh 8
	________,
	________,
	_X______,
	_X______,
	_XXX____,
	_X__X___,
	_X__X___,
	_XXX____,
	_X______,
	_X______,
	________,
// 223 $df 'char223'
//	width 6, bbx 1, bby -1, bbw 4, bbh 8
	________,
	________,
	__XX____,
	_X_X____,
	_X_X____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X_X____,
	_X______,
	________,
// 224 $e0 'char228'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	__X_____,
	___X____,
	__XX____,
	____X___,
	__XXX___,
	_X__X___,
	__XXX___,
	________,
	________,
// 225 $e1 'char228'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	____X___,
	___X____,
	__XX____,
	____X___,
	__XXX___,
	_X__X___,
	__XXX___,
	________,
	________,
// 226 $e2 'char228'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	___X____,
	__X_X___,
	________,
	__XX____,
	____X___,
	__XXX___,
	_X__X___,
	__XXX___,
	________,
	________,
// 227 $e3 'char228'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__X_X___,
	_X_X____,
	________,
	__XX____,
	____X___,
	__XXX___,
	_X__X___,
	__XXX___,
	________,
	________,
// 228 $e4 'char228'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	__X_X___,
	________,
	__XX____,
	____X___,
	__XXX___,
	_X__X___,
	__XXX___,
	________,
	________,
// 229 $e5 'char229'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	___X____,
	__X_X___,
	___X____,
	__XX____,
	____X___,
	__XXX___,
	_X__X___,
	__XXX___,
	________,
	________,
// 230 $e6 'char97'
//	width 6, bbx 0, bby 0, bbw 6, bbh 5
	________,
	________,
	________,
	________,
	__X_X___,
	___X_X__,
	_XXXXX__,
	X__X____,
	_XX_XX__,
	________,
	________,
// 231 $e7 'char99'
//	width 6, bbx 1, bby -2, bbw 4, bbh 7
	________,
	________,
	________,
	________,
	__XXX___,
	_X______,
	_X______,
	_X______,
	__XXX___,
	___X____,
	__X_____,
// 232 $e8 'char101'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	__X_____,
	___X____,
	__XX____,
	_X__X___,
	_XXXX___,
	_X______,
	__XXX___,
	________,
	________,
// 233 $e9 'char101'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	___X____,
	__X_____,
	__XX____,
	_X__X___,
	_XXXX___,
	_X______,
	__XXX___,
	________,
	________,
// 234 $ea 'char101'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__XX____,
	_X__X___,
	________,
	__XX____,
	_X__X___,
	_XXXX___,
	_X______,
	__XXX___,
	________,
	________,
// 235 $eb 'char101'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	_X__X___,
	________,
	__XX____,
	_X__X___,
	_XXXX___,
	_X______,
	__XXX___,
	________,
	________,
// 236 $ec 'char105'
//	width 6, bbx 2, bby 0, bbw 2, bbh 8
	________,
	__X_____,
	___X____,
	________,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	________,
	________,
// 237 $ed 'char105'
//	width 6, bbx 3, bby 0, bbw 2, bbh 8
	________,
	____X___,
	___X____,
	________,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	________,
	________,
// 238 $ee 'char105'
//	width 6, bbx 2, bby 0, bbw 3, bbh 8
	________,
	___X____,
	__X_X___,
	________,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	________,
	________,
// 239 $ef 'char105'
//	width 6, bbx 2, bby 0, bbw 3, bbh 7
	________,
	________,
	__X_X___,
	________,
	___X____,
	___X____,
	___X____,
	___X____,
	___X____,
	________,
	________,
// 240 $f0 'char240'
//	width 6, bbx 1, bby 0, bbw 5, bbh 7
	________,
	________,
	___X____,
	____XX__,
	___XX___,
	____X___,
	__XXX___,
	_X__X___,
	__XX____,
	________,
	________,
// 241 $f1 'char110'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__X_X___,
	_X_X____,
	________,
	_XXX____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	________,
	________,
// 242 $f2 'char246'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	__X_____,
	___X____,
	__XX____,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
// 243 $f3 'char214'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	___X____,
	__X_____,
	__XX____,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
// 244 $f4 'char214'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__XX____,
	_X__X___,
	________,
	__XX____,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
// 245 $f5 'char214'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__X_X___,
	_X_X____,
	________,
	__XX____,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
// 246 $f6 'char246'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	_X__X___,
	________,
	__XX____,
	_X__X___,
	_X__X___,
	_X__X___,
	__XX____,
	________,
	________,
// 247 $f7 'char247'
//	width 6, bbx 1, bby 1, bbw 5, bbh 5
	________,
	________,
	________,
	___X____,
	________,
	_XXXXX__,
	________,
	___X____,
	________,
	________,
	________,
// 248 $f8 'char248'
//	width 6, bbx 1, bby -1, bbw 4, bbh 7
	________,
	________,
	________,
	____X___,
	__XXX___,
	_X_XX___,
	_X__X___,
	_XX_X___,
	_XXX____,
	_X______,
	________,
// 249 $f9 'char117'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	__X_____,
	___X____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XXX___,
	________,
	________,
// 250 $fa 'char117'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	___X____,
	__X_____,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XXX___,
	________,
	________,
// 251 $fb 'char117'
//	width 6, bbx 1, bby 0, bbw 4, bbh 8
	________,
	__XX____,
	_X__X___,
	________,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XXX___,
	________,
	________,
// 252 $fc 'char117'
//	width 6, bbx 1, bby 0, bbw 4, bbh 7
	________,
	________,
	_X__X___,
	________,
	_X__X___,
	_X__X___,
	_X__X___,
	_X__X___,
	__XXX___,
	________,
	________,
// 253 $fd 'char121'
//	width 6, bbx 1, bby -1, bbw 4, bbh 8
	________,
	________,
	___X____,
	__X_____,
	_X__X___,
	_X__X___,
	_X__X___,
	__XXX___,
	____X___,
	__XX____,
	________,
// 254 $fe 'char112'
//	width 6, bbx 1, bby -1, bbw 4, bbh 7
	________,
	________,
	________,
	_X______,
	_X______,
	_XXX____,
	_X__X___,
	_XXX____,
	_X______,
	_X______,
	________,
// 255 $ff 'char121'
//	width 6, bbx 1, bby -1, bbw 4, bbh 8
	________,
	________,
	_X__X___,
	________,
	_X__X___,
	_X__X___,
	_X__X___,
	__XXX___,
	____X___,
	__XX____,
	________,
};

	/// character width for each encoding
static const unsigned char __font_widths__[] = {
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
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
	128,
	161,
	162,
	163,
	164,
	165,
	166,
	167,
	168,
	169,
	170,
	171,
	172,
	174,
	175,
	176,
	177,
	178,
	179,
	180,
	181,
	182,
	183,
	184,
	185,
	186,
	187,
	188,
	189,
	190,
	191,
	192,
	193,
	194,
	195,
	196,
	197,
	198,
	199,
	200,
	201,
	202,
	203,
	204,
	205,
	206,
	207,
	208,
	209,
	210,
	211,
	212,
	213,
	214,
	215,
	216,
	217,
	218,
	219,
	220,
	221,
	222,
	223,
	224,
	225,
	226,
	227,
	228,
	229,
	230,
	231,
	232,
	233,
	234,
	235,
	236,
	237,
	238,
	239,
	240,
	241,
	242,
	243,
	244,
	245,
	246,
	247,
	248,
	249,
	250,
	251,
	252,
	253,
	254,
	255,
};

	/// bitmap font structure
const struct bitmap_font font = {
	.Width = 7, .Height = 11,
	.Chars = 190,
	.Widths = __font_widths__,
	.Index = __font_index__,
	.Bitmap = __font_bitmap__,
};

