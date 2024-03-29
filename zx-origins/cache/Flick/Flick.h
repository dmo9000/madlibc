// Flick font from https://damieng.com/zx-origins
static const uint8_t FONT_FLICK_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x38, 0x38, 0x38, 0x38, 0x00, 0x38, 0x38, 0x00, // !
	0x77, 0x77, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x00, 0x6c, 0xfe, 0x6c, 0x6c, 0xfe, 0x6c, 0x00, // #
	0x18, 0x7c, 0xda, 0x7c, 0xb6, 0x7c, 0x30, 0x00, // $
	0xe4, 0xee, 0xdc, 0x38, 0x76, 0xee, 0x4e, 0x00, // %
	0x78, 0xec, 0xec, 0x7a, 0xee, 0xee, 0x7f, 0x00, // &
	0x1c, 0x1c, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x1e, 0x38, 0x70, 0x70, 0x70, 0x38, 0x1e, 0x00, // (
	0x78, 0x1c, 0x0e, 0x0e, 0x0e, 0x1c, 0x78, 0x00, // )
	0x00, 0x38, 0xfe, 0x7c, 0xfe, 0x38, 0x00, 0x00, // *
	0x00, 0x3c, 0x3c, 0xff, 0x3c, 0x3c, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x1c, 0x38, // ,
	0x00, 0x00, 0x00, 0x7e, 0x7e, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x00, // .
	0x07, 0x0f, 0x1e, 0x3c, 0x78, 0xf0, 0xe0, 0x00, // /
	0x7c, 0xee, 0xee, 0xee, 0xee, 0xee, 0x7c, 0x00, // 0
	0x1c, 0x3c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x00, // 1
	0x7c, 0xee, 0x1e, 0x3c, 0x78, 0xf2, 0xfe, 0x00, // 2
	0xfe, 0xee, 0x1c, 0x3c, 0x0e, 0xee, 0x7c, 0x00, // 3
	0x3c, 0x3c, 0x78, 0x76, 0xf6, 0xfe, 0x0e, 0x00, // 4
	0xfe, 0xee, 0xe0, 0xfc, 0x0e, 0xee, 0x7c, 0x00, // 5
	0x1c, 0x38, 0x7c, 0xee, 0xee, 0xee, 0x7c, 0x00, // 6
	0xfe, 0xee, 0x0e, 0x1c, 0x1c, 0x38, 0x38, 0x00, // 7
	0x7c, 0xee, 0xee, 0x7c, 0xee, 0xee, 0x7c, 0x00, // 8
	0x7c, 0xee, 0xee, 0xee, 0x7c, 0x38, 0x70, 0x00, // 9
	0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00, // :
	0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x70, // ;
	0x00, 0x1c, 0x38, 0x70, 0x38, 0x1c, 0x00, 0x00, // <
	0x00, 0x7e, 0x7e, 0x00, 0x7e, 0x7e, 0x00, 0x00, // =
	0x00, 0x38, 0x1c, 0x0e, 0x1c, 0x38, 0x00, 0x00, // >
	0x7c, 0xee, 0xee, 0x1c, 0x00, 0x38, 0x38, 0x00, // ?
	0xfc, 0x06, 0x7b, 0xfb, 0xdb, 0xdb, 0xfb, 0x6e, // @
	0x38, 0x7c, 0x7c, 0xee, 0xfe, 0xee, 0xee, 0x00, // A
	0xfc, 0xee, 0xee, 0xfc, 0xee, 0xee, 0xfc, 0x00, // B
	0x7c, 0xee, 0xee, 0xe0, 0xee, 0xee, 0x7c, 0x00, // C
	0xfc, 0xee, 0xee, 0xee, 0xee, 0xee, 0xfc, 0x00, // D
	0xfe, 0x72, 0x70, 0x7c, 0x70, 0x72, 0x7e, 0x00, // E
	0xfe, 0x72, 0x70, 0x7c, 0x70, 0x70, 0x70, 0x00, // F
	0x7c, 0xee, 0xe0, 0xee, 0xee, 0xee, 0x7a, 0x00, // G
	0xee, 0xee, 0xee, 0xfe, 0xee, 0xee, 0xee, 0x00, // H
	0x7c, 0x38, 0x38, 0x38, 0x38, 0x38, 0x7c, 0x00, // I
	0x1e, 0x0e, 0x0e, 0x0e, 0xee, 0xee, 0x7c, 0x00, // J
	0xee, 0xee, 0xfc, 0xf8, 0xfc, 0xee, 0xee, 0x00, // K
	0xf0, 0x70, 0x70, 0x70, 0x70, 0x72, 0x7e, 0x00, // L
	0xee, 0xfe, 0xfe, 0xfe, 0xfe, 0xd6, 0xc6, 0x00, // M
	0xee, 0xf6, 0xfe, 0xfe, 0xfe, 0xde, 0xce, 0x00, // N
	0x7c, 0xee, 0xee, 0xee, 0xee, 0xee, 0x7c, 0x00, // O
	0xfc, 0xee, 0xee, 0xee, 0xfc, 0xe0, 0xf0, 0x00, // P
	0x7c, 0xee, 0xee, 0xee, 0xee, 0xec, 0x7e, 0x0e, // Q
	0xfc, 0xee, 0xee, 0xfc, 0xfc, 0xee, 0xee, 0x00, // R
	0x7c, 0xee, 0xe0, 0x7c, 0x0e, 0xee, 0x7c, 0x00, // S
	0xfe, 0xba, 0x38, 0x38, 0x38, 0x38, 0x7c, 0x00, // T
	0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0x7c, 0x00, // U
	0xee, 0xee, 0xee, 0xee, 0x7c, 0x7c, 0x38, 0x00, // V
	0xee, 0xc6, 0xd6, 0xfe, 0xfe, 0xfe, 0x6c, 0x00, // W
	0xee, 0xee, 0x7c, 0x38, 0x7c, 0xee, 0xee, 0x00, // X
	0xee, 0xee, 0xee, 0x7c, 0x38, 0x38, 0x7c, 0x00, // Y
	0xfe, 0x9e, 0x3c, 0x78, 0xf0, 0xe2, 0xfe, 0x00, // Z
	0x7e, 0x70, 0x70, 0x70, 0x70, 0x70, 0x7e, 0x00, // [
	0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0x0f, 0x07, 0x00, // \
	0x7e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x7e, 0x00, // ]
	0x10, 0x38, 0x7c, 0xee, 0xc6, 0x00, 0x00, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x3c, 0x76, 0x70, 0xf8, 0x70, 0x70, 0xfe, 0x00, // £
	0x00, 0x00, 0x7e, 0xee, 0xee, 0xee, 0x76, 0x00, // a
	0xf0, 0xe0, 0xfc, 0xee, 0xee, 0xee, 0xdc, 0x00, // b
	0x00, 0x00, 0x7c, 0xee, 0xe0, 0xee, 0x7c, 0x00, // c
	0x1e, 0x0e, 0x7e, 0xee, 0xee, 0xee, 0x76, 0x00, // d
	0x00, 0x00, 0x7c, 0xee, 0xfc, 0xe2, 0x7c, 0x00, // e
	0x3c, 0x72, 0x70, 0xfc, 0x70, 0x70, 0x70, 0x00, // f
	0x00, 0x00, 0x76, 0xee, 0xee, 0x7e, 0x0e, 0x7c, // g
	0xf0, 0xe0, 0xec, 0xfe, 0xee, 0xee, 0xee, 0x00, // h
	0x38, 0x00, 0x78, 0x38, 0x38, 0x3a, 0x1c, 0x00, // i
	0x1c, 0x00, 0x3c, 0x1c, 0x1c, 0x1c, 0x5c, 0x38, // j
	0xf0, 0xe0, 0xee, 0xfc, 0xf8, 0xfc, 0xee, 0x00, // k
	0x78, 0x38, 0x38, 0x38, 0x38, 0x3a, 0x1c, 0x00, // l
	0x00, 0x00, 0xec, 0xfe, 0xfe, 0xd6, 0xd6, 0x00, // m
	0x00, 0x00, 0xdc, 0xee, 0xee, 0xee, 0xee, 0x00, // n
	0x00, 0x00, 0x7c, 0xee, 0xee, 0xee, 0x7c, 0x00, // o
	0x00, 0x00, 0xdc, 0xee, 0xee, 0xfc, 0xe0, 0xe0, // p
	0x00, 0x00, 0x76, 0xee, 0xee, 0x7e, 0x0e, 0x0e, // q
	0x00, 0x00, 0xdc, 0xee, 0xe0, 0xe0, 0xe0, 0x00, // r
	0x00, 0x00, 0x7c, 0xf2, 0x7c, 0x0e, 0xfc, 0x00, // s
	0x70, 0x70, 0xf8, 0x70, 0x70, 0x72, 0x3c, 0x00, // t
	0x00, 0x00, 0xee, 0xee, 0xee, 0xee, 0x76, 0x00, // u
	0x00, 0x00, 0xee, 0xee, 0x7c, 0x7c, 0x38, 0x00, // v
	0x00, 0x00, 0xee, 0xee, 0xfe, 0xfe, 0xee, 0x00, // w
	0x00, 0x00, 0xee, 0xfe, 0x7c, 0xfe, 0xee, 0x00, // x
	0x00, 0x00, 0xee, 0xee, 0x7e, 0x3c, 0xb8, 0x70, // y
	0x00, 0x00, 0xfe, 0x3c, 0x78, 0xf2, 0xfe, 0x00, // z
	0x1e, 0x38, 0x38, 0xf0, 0x38, 0x38, 0x1e, 0x00, // {
	0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x00, // |
	0xf0, 0x38, 0x38, 0x1e, 0x38, 0x38, 0xf0, 0x00, // }
	0x00, 0x00, 0x76, 0xfe, 0xdc, 0x00, 0x00, 0x00, // ~
	0x3c, 0x42, 0x9d, 0xb9, 0xb9, 0x9d, 0x42, 0x3c, // ©
};