// Reflections font from https://damieng.com/zx-origins
static const uint8_t FONT_REFLECTIONS_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x1c, 0x14, 0x14, 0x1c, 0x08, 0x1c, 0x1c, 0x00, // !
	0x44, 0xaa, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x00, 0x54, 0xfe, 0x5c, 0x74, 0xfe, 0x54, 0x00, // #
	0xfe, 0xaa, 0xe8, 0x38, 0x3e, 0xba, 0xfe, 0x00, // $
	0x40, 0xa6, 0xea, 0x14, 0x3a, 0x77, 0x67, 0x00, // %
	0x7c, 0xaa, 0xa0, 0x7e, 0xee, 0xee, 0x7e, 0x00, // &
	0x10, 0x28, 0x50, 0x60, 0x00, 0x00, 0x00, 0x00, // '
	0x3c, 0x50, 0x50, 0x70, 0x70, 0x70, 0x3c, 0x00, // (
	0x78, 0x14, 0x14, 0x1c, 0x1c, 0x1c, 0x78, 0x00, // )
	0x00, 0x00, 0x38, 0x6c, 0x38, 0x7c, 0x38, 0x00, // *
	0x00, 0x00, 0x38, 0x28, 0xfe, 0x38, 0x38, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x08, 0x14, 0x38, 0x30, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x10, 0x38, 0x38, 0x00, // .
	0x06, 0x0a, 0x14, 0x38, 0x70, 0xe0, 0xc0, 0x00, // /
	0x7c, 0xaa, 0xaa, 0xee, 0xee, 0xee, 0x7c, 0x00, // 0
	0x38, 0x68, 0x28, 0x38, 0x38, 0x38, 0x7c, 0x00, // 1
	0x7c, 0xaa, 0x14, 0x38, 0x70, 0xee, 0xfe, 0x00, // 2
	0x7c, 0xaa, 0x0a, 0x3c, 0x0e, 0xee, 0x7c, 0x00, // 3
	0x0c, 0x14, 0x34, 0x5c, 0xfe, 0x1c, 0x1c, 0x00, // 4
	0xfe, 0xaa, 0xa0, 0xfc, 0x0e, 0xee, 0x7c, 0x00, // 5
	0x7c, 0xaa, 0xa0, 0xfc, 0xee, 0xee, 0x7c, 0x00, // 6
	0xfe, 0xaa, 0x0a, 0x1c, 0x1c, 0x38, 0x38, 0x00, // 7
	0x7c, 0xaa, 0xaa, 0x7c, 0xee, 0xee, 0x7c, 0x00, // 8
	0x7c, 0xaa, 0xaa, 0x7e, 0x0e, 0xee, 0x7c, 0x00, // 9
	0x00, 0x00, 0x38, 0x28, 0x10, 0x38, 0x38, 0x00, // :
	0x00, 0x00, 0x1c, 0x14, 0x08, 0x14, 0x38, 0x30, // ;
	0x0c, 0x14, 0x28, 0x50, 0x38, 0x1c, 0x0c, 0x00, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, // =
	0x60, 0x50, 0x28, 0x14, 0x38, 0x70, 0x60, 0x00, // >
	0x7c, 0xaa, 0x0a, 0x3e, 0x00, 0x38, 0x38, 0x00, // ?
	0x7c, 0xaa, 0xaa, 0xfe, 0xee, 0xe0, 0x7e, 0x00, // @
	0x7c, 0xaa, 0xaa, 0xba, 0xee, 0xee, 0xee, 0x00, // A
	0xfc, 0xaa, 0xaa, 0xbc, 0xee, 0xee, 0xfc, 0x00, // B
	0x7c, 0xaa, 0xa0, 0xe0, 0xe0, 0xee, 0x7c, 0x00, // C
	0xfc, 0xaa, 0xaa, 0xee, 0xee, 0xee, 0xfc, 0x00, // D
	0x7e, 0xaa, 0xa0, 0xf8, 0xe0, 0xee, 0x7e, 0x00, // E
	0x7e, 0xaa, 0xa0, 0xf8, 0xe0, 0xe0, 0xe0, 0x00, // F
	0x7e, 0xaa, 0xa0, 0xee, 0xee, 0xee, 0x7e, 0x00, // G
	0xee, 0xaa, 0xaa, 0xfe, 0xee, 0xee, 0xee, 0x00, // H
	0x38, 0x28, 0x28, 0x28, 0x38, 0x38, 0x38, 0x00, // I
	0x0e, 0x0a, 0x0a, 0x0a, 0x0e, 0xee, 0x7c, 0x00, // J
	0xee, 0xaa, 0xb4, 0xa8, 0xfc, 0xee, 0xee, 0x00, // K
	0xe0, 0xa0, 0xa0, 0xa0, 0xe0, 0xee, 0xfe, 0x00, // L
	0xee, 0xba, 0xaa, 0xaa, 0xee, 0xfe, 0xee, 0x00, // M
	0xfc, 0xaa, 0xaa, 0xee, 0xee, 0xee, 0xee, 0x00, // N
	0x7c, 0xaa, 0xaa, 0xee, 0xee, 0xee, 0x7c, 0x00, // O
	0xfc, 0xaa, 0xaa, 0xee, 0xfc, 0xe0, 0xe0, 0x00, // P
	0x7c, 0xaa, 0xaa, 0xee, 0xee, 0xee, 0x7e, 0x0e, // Q
	0xfe, 0xaa, 0xb4, 0xf8, 0xfc, 0xee, 0xe6, 0x00, // R
	0xfe, 0xaa, 0xe0, 0x38, 0x0e, 0xee, 0xfe, 0x00, // S
	0xfe, 0xaa, 0x28, 0x38, 0x38, 0x38, 0x38, 0x00, // T
	0xee, 0xaa, 0xaa, 0xee, 0xee, 0xee, 0x7c, 0x00, // U
	0xee, 0xaa, 0xaa, 0xee, 0xee, 0x6c, 0x38, 0x00, // V
	0xaa, 0xba, 0xaa, 0xee, 0xee, 0xee, 0x7c, 0x00, // W
	0xee, 0xaa, 0xaa, 0x7c, 0xee, 0xee, 0xee, 0x00, // X
	0xee, 0xaa, 0xaa, 0x7c, 0x38, 0x38, 0x38, 0x00, // Y
	0xfe, 0xaa, 0x14, 0x38, 0x70, 0xee, 0xfe, 0x00, // Z
	0x3c, 0x28, 0x28, 0x38, 0x38, 0x38, 0x3c, 0x00, // [
	0xc0, 0xa0, 0x50, 0x38, 0x1c, 0x0e, 0x06, 0x00, // \
	0x3c, 0x14, 0x14, 0x1c, 0x1c, 0x1c, 0x3c, 0x00, // ]
	0x10, 0x38, 0x6c, 0xba, 0x38, 0x38, 0x38, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x7c, 0xaa, 0xa0, 0xf8, 0xe0, 0xee, 0xfe, 0x00, // £
	0x00, 0x76, 0xaa, 0xaa, 0xee, 0xee, 0x76, 0x00, // a
	0xe0, 0xbc, 0xaa, 0xaa, 0xee, 0xee, 0xfc, 0x00, // b
	0x00, 0x7c, 0xaa, 0xa0, 0xe0, 0xee, 0x7c, 0x00, // c
	0x0e, 0x7a, 0xaa, 0xaa, 0xee, 0xee, 0x7e, 0x00, // d
	0x00, 0x7c, 0xaa, 0xbe, 0xe0, 0xee, 0x7c, 0x00, // e
	0x7c, 0xaa, 0xa0, 0xf0, 0xe0, 0xe0, 0xe0, 0x00, // f
	0x00, 0x7e, 0xaa, 0xaa, 0x7e, 0x0e, 0xee, 0x7c, // g
	0xe0, 0xbc, 0xaa, 0xaa, 0xee, 0xee, 0xee, 0x00, // h
	0x10, 0x28, 0x38, 0x28, 0x38, 0x38, 0x38, 0x00, // i
	0x04, 0x0a, 0x0e, 0x0a, 0x0a, 0x0e, 0xee, 0x7c, // j
	0xe0, 0xa0, 0xae, 0xaa, 0xfc, 0xee, 0xee, 0x00, // k
	0x3c, 0x14, 0x14, 0x1c, 0x1c, 0x1c, 0x1c, 0x00, // l
	0x00, 0xec, 0xba, 0xaa, 0xfe, 0xfe, 0xee, 0x00, // m
	0x00, 0xfc, 0xaa, 0xaa, 0xee, 0xee, 0xee, 0x00, // n
	0x00, 0x7c, 0xaa, 0xaa, 0xee, 0xee, 0x7c, 0x00, // o
	0x00, 0xfc, 0xaa, 0xaa, 0xee, 0xee, 0xfc, 0xe0, // p
	0x00, 0x7e, 0xaa, 0xaa, 0xee, 0xee, 0x7e, 0x0e, // q
	0x00, 0xfc, 0xaa, 0xa0, 0xe0, 0xe0, 0xe0, 0x00, // r
	0x00, 0x7c, 0xaa, 0x70, 0x1c, 0xee, 0x7c, 0x00, // s
	0xe0, 0xa0, 0xb0, 0xa0, 0xe0, 0xee, 0x7c, 0x00, // t
	0x00, 0xee, 0xaa, 0xaa, 0xee, 0xee, 0x7e, 0x00, // u
	0x00, 0xee, 0xaa, 0xaa, 0xee, 0x6c, 0x38, 0x00, // v
	0x00, 0xaa, 0xaa, 0xba, 0xee, 0xfe, 0x6c, 0x00, // w
	0x00, 0xee, 0xaa, 0x7c, 0xee, 0xee, 0xee, 0x00, // x
	0x00, 0xee, 0xaa, 0xaa, 0xee, 0x7e, 0x0e, 0xfc, // y
	0x00, 0xfe, 0x94, 0x28, 0x70, 0xee, 0xfe, 0x00, // z
	0x1e, 0x28, 0x28, 0xe8, 0x38, 0x38, 0x1e, 0x00, // {
	0x38, 0x28, 0x28, 0x28, 0x38, 0x38, 0x38, 0x00, // |
	0xf0, 0x28, 0x28, 0x2e, 0x38, 0x38, 0xf0, 0x00, // }
	0x00, 0x6e, 0xba, 0xec, 0x00, 0x00, 0x00, 0x00, // ~
	0x7e, 0x81, 0x9d, 0xa9, 0xb9, 0x9d, 0x81, 0x7e, // ©
};