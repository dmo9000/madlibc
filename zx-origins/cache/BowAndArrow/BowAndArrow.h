// BowAndArrow font from https://damieng.com/zx-origins
static const uint8_t FONT_BOWANDARROW_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x38, 0x38, 0x38, 0x38, 0x38, 0x00, 0x38, 0x00, // !
	0x77, 0xee, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x6c, 0x6c, 0xfe, 0x6c, 0xfe, 0x6c, 0x6c, 0x00, // #
	0x3e, 0x7e, 0xd8, 0xfe, 0x36, 0xfc, 0xf8, 0x00, // $
	0xe6, 0xee, 0x5c, 0x38, 0x74, 0xee, 0xce, 0x00, // %
	0xf0, 0xf6, 0xee, 0xfc, 0xee, 0x7e, 0x3e, 0x00, // &
	0x1c, 0x38, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x0e, 0x1e, 0x38, 0x70, 0x70, 0x70, 0x3e, 0x1e, // (
	0x78, 0x7c, 0x0e, 0x0e, 0x0e, 0x1c, 0x78, 0x70, // )
	0x00, 0x38, 0xfe, 0x7c, 0xfe, 0x38, 0x00, 0x00, // *
	0x00, 0x38, 0x38, 0xfe, 0x38, 0x38, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x38, 0x30, // ,
	0x00, 0x00, 0x00, 0xfe, 0xfe, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x00, // .
	0x03, 0x07, 0x0e, 0x1c, 0x38, 0x70, 0xe0, 0xc0, // /
	0xfe, 0xfe, 0xee, 0xee, 0xec, 0xf8, 0xf0, 0x00, // 0
	0x78, 0x78, 0x38, 0x38, 0x38, 0x7c, 0x7c, 0x00, // 1
	0xf0, 0xf8, 0x1c, 0xfe, 0xe0, 0xfe, 0xfe, 0x00, // 2
	0xf0, 0xf8, 0x0c, 0x7e, 0x0e, 0xfe, 0xfe, 0x00, // 3
	0xee, 0xee, 0xee, 0xfe, 0x0e, 0x0e, 0x0e, 0x00, // 4
	0xfe, 0xfe, 0xe0, 0xfe, 0x1c, 0xf8, 0xf0, 0x00, // 5
	0x1e, 0x3e, 0x60, 0xfe, 0xee, 0xfe, 0xfe, 0x00, // 6
	0xf0, 0xf8, 0x1c, 0x0e, 0x0e, 0x0e, 0x0e, 0x00, // 7
	0xf0, 0xf8, 0xec, 0xfe, 0x6e, 0x3e, 0x1e, 0x00, // 8
	0xfe, 0xfe, 0xee, 0xfe, 0x0c, 0xf8, 0xf0, 0x00, // 9
	0x00, 0x38, 0x38, 0x00, 0x00, 0x38, 0x38, 0x00, // :
	0x00, 0x1c, 0x1c, 0x00, 0x00, 0x1c, 0x38, 0x30, // ;
	0x0e, 0x1c, 0x38, 0x70, 0x38, 0x1c, 0x0e, 0x00, // <
	0x00, 0xfe, 0xfe, 0x00, 0xfe, 0xfe, 0x00, 0x00, // =
	0x70, 0x38, 0x1c, 0x0e, 0x1c, 0x38, 0x70, 0x00, // >
	0xfe, 0xfe, 0xee, 0x1c, 0x38, 0x00, 0x38, 0x00, // ?
	0xf0, 0xf8, 0xcc, 0xde, 0xdf, 0xdb, 0xdf, 0xcf, // @
	0x1e, 0x3e, 0x6e, 0xfe, 0xee, 0xee, 0xee, 0x00, // A
	0xf0, 0xf8, 0xec, 0xfc, 0xee, 0xfe, 0xfe, 0x00, // B
	0x1e, 0x3e, 0x6e, 0xe0, 0xee, 0xfe, 0xfe, 0x00, // C
	0xf0, 0xf8, 0xec, 0xee, 0xee, 0xfe, 0xfe, 0x00, // D
	0x1e, 0x3e, 0x60, 0xfc, 0xe0, 0xfe, 0xfe, 0x00, // E
	0x1e, 0x3e, 0x60, 0xfc, 0xe0, 0xe0, 0xe0, 0x00, // F
	0x1e, 0x3e, 0x60, 0xee, 0xee, 0xfe, 0xfe, 0x00, // G
	0xee, 0xee, 0xee, 0xfe, 0xee, 0xee, 0xee, 0x00, // H
	0xfe, 0xfe, 0x38, 0x38, 0x38, 0xfe, 0xfe, 0x00, // I
	0x0e, 0x0e, 0x0e, 0x0e, 0xec, 0xf8, 0xf0, 0x00, // J
	0xee, 0xee, 0xfc, 0xf8, 0xfc, 0xee, 0xee, 0x00, // K
	0x18, 0x30, 0x60, 0xe0, 0xe6, 0xfe, 0xfe, 0x00, // L
	0xc6, 0xee, 0xfe, 0xfe, 0xfe, 0xee, 0xee, 0x00, // M
	0xce, 0xee, 0xfe, 0xfe, 0xfe, 0xee, 0xe6, 0x00, // N
	0x1e, 0x3e, 0x6e, 0xee, 0xee, 0xfe, 0xfe, 0x00, // O
	0xf0, 0xf8, 0xec, 0xfe, 0xfe, 0xe0, 0xe0, 0x00, // P
	0xfe, 0xfe, 0xee, 0xee, 0xec, 0xfe, 0xee, 0x0e, // Q
	0xf0, 0xf8, 0xec, 0xee, 0xfe, 0xfc, 0xee, 0x00, // R
	0x1e, 0x3e, 0x70, 0xfe, 0x0e, 0xfe, 0xfe, 0x00, // S
	0xfe, 0xfe, 0x38, 0x38, 0x38, 0x38, 0x38, 0x00, // T
	0xee, 0xee, 0xee, 0xee, 0x6e, 0x3e, 0x1e, 0x00, // U
	0xee, 0xee, 0xee, 0xee, 0xec, 0xf8, 0xf0, 0x00, // V
	0xee, 0xee, 0xee, 0xfe, 0xfe, 0xfc, 0xd8, 0x00, // W
	0xee, 0xee, 0x38, 0x7c, 0xee, 0xee, 0xee, 0x00, // X
	0xee, 0xee, 0xee, 0xfe, 0x0c, 0xf8, 0xf0, 0x00, // Y
	0xf0, 0xf8, 0x1c, 0xfe, 0xe0, 0xfe, 0xfe, 0x00, // Z
	0x0e, 0x1e, 0x30, 0x70, 0x70, 0x70, 0x7e, 0x7e, // [
	0xc0, 0xe0, 0x70, 0x38, 0x1c, 0x0e, 0x07, 0x03, // \
	0x7e, 0x7e, 0x0e, 0x0e, 0x0e, 0x0c, 0x78, 0x70, // ]
	0x10, 0x38, 0x7c, 0xfe, 0x38, 0x38, 0x38, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, // _
	0x1e, 0x3e, 0x60, 0xfc, 0xe0, 0xfe, 0xfe, 0x00, // £
	0x00, 0x00, 0xfe, 0xee, 0xee, 0xf6, 0xe6, 0x00, // a
	0xe0, 0xe0, 0xe6, 0xee, 0xfe, 0xee, 0xfe, 0x00, // b
	0x00, 0x00, 0x3e, 0x6e, 0xe0, 0xee, 0xfe, 0x00, // c
	0x0e, 0x0e, 0xfe, 0xee, 0xfe, 0xee, 0xce, 0x00, // d
	0x00, 0x00, 0xfe, 0xee, 0xfc, 0xf8, 0xfe, 0x00, // e
	0x0e, 0x18, 0x38, 0x7c, 0x38, 0x38, 0x38, 0x00, // f
	0x00, 0x00, 0xfe, 0xde, 0xee, 0xce, 0x0e, 0x7e, // g
	0xe0, 0xe0, 0xe6, 0xee, 0xfe, 0xee, 0xee, 0x00, // h
	0x38, 0x00, 0x38, 0x38, 0x38, 0x38, 0x38, 0x00, // i
	0x0e, 0x00, 0x0e, 0x0e, 0x0e, 0x0e, 0xec, 0xf8, // j
	0xe0, 0xe0, 0xee, 0xfc, 0xf8, 0xfc, 0xee, 0x00, // k
	0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x00, // l
	0x00, 0x00, 0xe6, 0xff, 0xff, 0xff, 0xdb, 0x00, // m
	0x00, 0x00, 0xf8, 0xfc, 0xee, 0xee, 0xee, 0x00, // n
	0x00, 0x00, 0xf0, 0xf8, 0xec, 0xfe, 0xfe, 0x00, // o
	0x00, 0x00, 0xf8, 0xfc, 0xee, 0xfe, 0xe0, 0xe0, // p
	0x00, 0x00, 0x3e, 0x7e, 0xee, 0xfe, 0x0e, 0x0e, // q
	0x00, 0x00, 0x3e, 0x6e, 0xe0, 0xe0, 0xe0, 0x00, // r
	0x00, 0x00, 0x3e, 0x70, 0xfe, 0x0e, 0xfe, 0x00, // s
	0xe0, 0xe0, 0xfc, 0xe0, 0xe0, 0x6e, 0x3e, 0x00, // t
	0x00, 0x00, 0xee, 0xee, 0xee, 0x6e, 0x3e, 0x00, // u
	0x00, 0x00, 0xee, 0xee, 0xee, 0xec, 0xf8, 0x00, // v
	0x00, 0x00, 0xdb, 0xff, 0xff, 0xf7, 0xe6, 0x00, // w
	0x00, 0x00, 0xee, 0xfe, 0x7c, 0xfe, 0xee, 0x00, // x
	0x00, 0x00, 0xee, 0xfe, 0xee, 0xce, 0x0e, 0x7e, // y
	0x00, 0x00, 0xfe, 0xfc, 0x38, 0x7e, 0xfe, 0x00, // z
	0x0e, 0x1c, 0x38, 0xe0, 0xf0, 0x30, 0x3e, 0x3e, // {
	0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, // |
	0x7c, 0x7c, 0x0c, 0x0f, 0x07, 0x1c, 0x38, 0x70, // }
	0x66, 0xfe, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x1f, 0x21, 0x4d, 0x99, 0xb9, 0xbd, 0x81, 0xff, // ©
};