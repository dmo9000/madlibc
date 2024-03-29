// Jam font from https://damieng.com/zx-origins
static const uint8_t FONT_JAM_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x3c, 0x3c, 0x3c, 0x3c, 0x00, 0x3c, 0x3c, 0x00, // !
	0xee, 0xee, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x74, 0xfe, 0xfe, 0xfe, 0x74, 0xfe, 0x74, 0x00, // #
	0x10, 0xfe, 0xfe, 0xf0, 0xfe, 0x02, 0xfe, 0x10, // $
	0xf3, 0xf6, 0xbc, 0xff, 0x3f, 0x6d, 0xcf, 0x00, // %
	0xf8, 0xf8, 0xf8, 0xf2, 0x7e, 0xf2, 0xfe, 0x00, // &
	0x3c, 0x3c, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x3e, 0x7e, 0xfe, 0xf0, 0xf0, 0x70, 0x3e, 0x00, // (
	0xf8, 0xfc, 0xfe, 0x1e, 0x1e, 0x1c, 0xf8, 0x00, // )
	0x00, 0x3c, 0xff, 0x7e, 0xff, 0x3c, 0x00, 0x00, // *
	0x00, 0x3c, 0x3c, 0xff, 0xff, 0x3c, 0x3c, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x78, // ,
	0x00, 0x00, 0x00, 0xfe, 0xfe, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, // .
	0x07, 0x0f, 0x1f, 0x3e, 0x7c, 0xf8, 0xf0, 0x00, // /
	0xfe, 0xfe, 0xfe, 0x9e, 0x9e, 0x9e, 0xfe, 0x00, // 0
	0x7c, 0x7c, 0x7c, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, // 1
	0xfe, 0xfe, 0xfe, 0x02, 0xfe, 0xf0, 0xfe, 0x00, // 2
	0xfe, 0xfe, 0xfe, 0x1e, 0xfe, 0x1e, 0xfe, 0x00, // 3
	0x9e, 0x9e, 0xfe, 0xfe, 0xfe, 0x1e, 0x1e, 0x00, // 4
	0xfe, 0xfe, 0xfe, 0xf0, 0xfe, 0x06, 0xfe, 0x00, // 5
	0xfe, 0xfe, 0xfe, 0xf0, 0xfe, 0xf6, 0xfe, 0x00, // 6
	0xfe, 0xfe, 0xfe, 0x1e, 0xfe, 0x1e, 0x1e, 0x00, // 7
	0xfe, 0xfe, 0xfe, 0xf2, 0x7c, 0xf2, 0xfe, 0x00, // 8
	0xfe, 0xfe, 0xfe, 0xf2, 0xfe, 0x02, 0xfe, 0x00, // 9
	0x00, 0x00, 0x3c, 0x3c, 0x3c, 0x00, 0x3c, 0x00, // :
	0x00, 0x00, 0x3c, 0x3c, 0x3c, 0x00, 0x3c, 0x78, // ;
	0x1e, 0x3c, 0x78, 0xf0, 0x78, 0x3c, 0x1e, 0x00, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, // =
	0xf0, 0x78, 0x3c, 0x1e, 0x3c, 0x78, 0xf0, 0x00, // >
	0xfe, 0x9e, 0x1e, 0x3e, 0x00, 0x3c, 0x3c, 0x00, // ?
	0xfe, 0xfe, 0xfe, 0xfa, 0xfe, 0xf0, 0xfe, 0x00, // @
	0xfe, 0xfe, 0xfe, 0xf2, 0xf2, 0xfe, 0xf2, 0x00, // A
	0xfe, 0xfe, 0xfe, 0xf2, 0xfc, 0xf2, 0xfe, 0x00, // B
	0xfe, 0xfe, 0xfe, 0xf2, 0xf0, 0xf2, 0xfe, 0x00, // C
	0xfe, 0xfe, 0xfe, 0xf2, 0xf2, 0xf2, 0xfc, 0x00, // D
	0xfe, 0xfe, 0xfe, 0xf0, 0xfe, 0xf0, 0xfe, 0x00, // E
	0xfe, 0xfe, 0xfe, 0xf0, 0xfe, 0xf0, 0xf0, 0x00, // F
	0xfe, 0xfe, 0xfe, 0xf0, 0xf6, 0xf2, 0xfe, 0x00, // G
	0xf2, 0xf2, 0xfe, 0xfe, 0xfe, 0xf2, 0xf2, 0x00, // H
	0x7e, 0x7e, 0x7e, 0x3c, 0x3c, 0x3c, 0x7e, 0x00, // I
	0x7e, 0x7e, 0x7e, 0x3c, 0x3c, 0x3c, 0xfc, 0x00, // J
	0xf2, 0xf2, 0xfe, 0xfc, 0xfe, 0xf2, 0xf2, 0x00, // K
	0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xfe, 0x00, // L
	0xff, 0xff, 0xff, 0xf5, 0xf5, 0xf5, 0xf5, 0x00, // M
	0xfe, 0xfe, 0xfe, 0xf2, 0xf2, 0xf2, 0xf2, 0x00, // N
	0xfe, 0xfe, 0xfe, 0xf2, 0xf2, 0xf2, 0xfe, 0x00, // O
	0xfe, 0xfe, 0xfe, 0xf2, 0xfe, 0xf0, 0xf0, 0x00, // P
	0xfe, 0xfe, 0xfe, 0xf2, 0xf2, 0xf4, 0xfe, 0x02, // Q
	0xfe, 0xfe, 0xfe, 0xf2, 0xfc, 0xf2, 0xf2, 0x00, // R
	0xfe, 0xfe, 0xfe, 0xf0, 0xfe, 0x02, 0xfe, 0x00, // S
	0xff, 0xff, 0xff, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, // T
	0xf2, 0xf2, 0xf2, 0xf2, 0xfe, 0xfe, 0xfe, 0x00, // U
	0xf2, 0xf2, 0xf2, 0xf2, 0xfe, 0x7c, 0x38, 0x00, // V
	0xf5, 0xf5, 0xf5, 0xf5, 0xff, 0xff, 0xff, 0x00, // W
	0xf2, 0xf2, 0xfc, 0x7c, 0x7e, 0x9e, 0x9e, 0x00, // X
	0x9e, 0x9e, 0xfe, 0x1e, 0xfe, 0xfe, 0xfe, 0x00, // Y
	0xfe, 0xfe, 0xfe, 0x02, 0xfe, 0xf0, 0xfe, 0x00, // Z
	0x7e, 0x7e, 0x7e, 0x78, 0x78, 0x78, 0x7e, 0x00, // [
	0xe0, 0xf0, 0xf8, 0x7c, 0x3e, 0x1f, 0x0f, 0x00, // \
	0x7e, 0x7e, 0x7e, 0x1e, 0x1e, 0x1e, 0x7e, 0x00, // ]
	0x18, 0x3c, 0x7e, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, // _
	0x7e, 0x7e, 0x7e, 0x78, 0xfe, 0x78, 0xfe, 0x00, // £
	0x00, 0xfe, 0xfe, 0xfe, 0x9e, 0x9e, 0xee, 0x00, // a
	0xf0, 0xfe, 0xfe, 0xfe, 0xf2, 0xf2, 0xfe, 0x00, // b
	0x00, 0xfe, 0xfe, 0xfe, 0xf0, 0xf0, 0xfe, 0x00, // c
	0x1e, 0xfe, 0xfe, 0xfe, 0x9e, 0x9e, 0xfe, 0x00, // d
	0x00, 0xfe, 0xfe, 0xfe, 0xf6, 0xf8, 0xfe, 0x00, // e
	0x00, 0xfe, 0xfe, 0xfe, 0xf0, 0xfe, 0xf0, 0xf0, // f
	0x00, 0xfe, 0xfe, 0xfe, 0x9e, 0xfe, 0x1e, 0xfe, // g
	0xf0, 0xfe, 0xfe, 0xfe, 0xf2, 0xf2, 0xf2, 0x00, // h
	0x3c, 0x3c, 0x00, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, // i
	0x1e, 0x1e, 0x00, 0x1e, 0x1e, 0x9e, 0x9e, 0xfe, // j
	0xf0, 0xf0, 0xf6, 0xf6, 0xfc, 0xf6, 0xf6, 0x00, // k
	0x7e, 0x7e, 0x7e, 0x7e, 0x1e, 0x1e, 0x1e, 0x00, // l
	0x00, 0xff, 0xff, 0xff, 0xf5, 0xf5, 0xf5, 0x00, // m
	0x00, 0xfe, 0xfe, 0xfe, 0xf2, 0xf2, 0xf2, 0x00, // n
	0x00, 0xfe, 0xfe, 0xfe, 0xf2, 0xf2, 0xfe, 0x00, // o
	0x00, 0xfe, 0xfe, 0xfe, 0xf2, 0xf2, 0xfe, 0xf0, // p
	0x00, 0xfe, 0xfe, 0xfe, 0x9e, 0x9e, 0xfe, 0x1e, // q
	0x00, 0xfe, 0xfe, 0xfe, 0xf4, 0xf0, 0xf0, 0x00, // r
	0x00, 0xfe, 0xfe, 0xf8, 0xfe, 0x06, 0xfe, 0x00, // s
	0x78, 0xfc, 0xfc, 0xfc, 0x78, 0x78, 0x7e, 0x00, // t
	0x00, 0xf2, 0xf2, 0xf2, 0xfe, 0xfe, 0xfe, 0x00, // u
	0x00, 0xf2, 0xf2, 0xf2, 0xfe, 0x7c, 0x38, 0x00, // v
	0x00, 0xf5, 0xf5, 0xf5, 0xff, 0xff, 0xff, 0x00, // w
	0x00, 0xf2, 0xfc, 0x78, 0x3c, 0x7e, 0x9e, 0x00, // x
	0x00, 0x9e, 0x9e, 0xfe, 0x1e, 0xfe, 0xfe, 0xfe, // y
	0x00, 0xfe, 0xfe, 0x06, 0xfe, 0xf0, 0xfe, 0x00, // z
	0x3e, 0x3e, 0xfc, 0xf8, 0xfc, 0x3c, 0x3e, 0x00, // {
	0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, // |
	0xf8, 0xf8, 0x7e, 0x3e, 0x7e, 0x78, 0xf8, 0x00, // }
	0xfa, 0xfa, 0xee, 0xee, 0x00, 0x00, 0x00, 0x00, // ~
	0xff, 0xff, 0xc1, 0xdd, 0xd9, 0xdd, 0xc1, 0xff, // ©
};