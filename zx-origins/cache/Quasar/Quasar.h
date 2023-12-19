// Quasar font from https://damieng.com/zx-origins
static const uint8_t FONT_QUASAR_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x28, 0x28, 0x28, 0x08, 0x38, 0x28, 0x38, 0x00, // !
	0x66, 0x55, 0xaa, 0x44, 0x00, 0x00, 0x00, 0x00, // "
	0x5c, 0xd6, 0x82, 0xd6, 0x82, 0xd6, 0x74, 0x00, // #
	0x3e, 0x42, 0x94, 0x44, 0x52, 0x84, 0xf8, 0x00, // $
	0xe4, 0x0a, 0xf4, 0x28, 0x5e, 0xa0, 0x4e, 0x00, // %
	0x7c, 0x82, 0xba, 0x44, 0xba, 0x82, 0x7c, 0x00, // &
	0x1c, 0x14, 0x28, 0x10, 0x00, 0x00, 0x00, 0x00, // '
	0x1c, 0x20, 0x5c, 0x50, 0x5c, 0x20, 0x1c, 0x00, // (
	0x70, 0x08, 0x74, 0x14, 0x74, 0x08, 0x70, 0x00, // )
	0x00, 0x38, 0xee, 0x44, 0xee, 0x28, 0x00, 0x00, // *
	0x28, 0x28, 0xee, 0x00, 0xee, 0x28, 0x28, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x1c, 0x14, 0x28, 0x10, // ,
	0x00, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x38, 0x00, // .
	0x04, 0x0a, 0x14, 0x28, 0x50, 0xa0, 0x40, 0x00, // /
	0x38, 0x44, 0xba, 0xaa, 0xba, 0x44, 0x38, 0x00, // 0
	0x14, 0x24, 0x54, 0x34, 0x14, 0x14, 0x14, 0x00, // 1
	0xf8, 0x04, 0xf4, 0x28, 0x5e, 0x80, 0xfe, 0x00, // 2
	0xf8, 0x04, 0xfa, 0x24, 0xfa, 0x04, 0xf8, 0x00, // 3
	0x10, 0x28, 0x50, 0xbe, 0x80, 0xf6, 0x14, 0x00, // 4
	0xfe, 0x80, 0xbc, 0x44, 0xfa, 0x06, 0xfc, 0x00, // 5
	0x3c, 0x40, 0x9c, 0xa2, 0xba, 0x42, 0x3c, 0x00, // 6
	0x7e, 0x02, 0x7a, 0x14, 0x14, 0x28, 0x28, 0x00, // 7
	0x38, 0x44, 0xba, 0x44, 0xba, 0x44, 0x38, 0x00, // 8
	0x78, 0x84, 0xba, 0x8a, 0x7a, 0x04, 0xf8, 0x00, // 9
	0x38, 0x00, 0x38, 0x00, 0x38, 0x28, 0x38, 0x00, // :
	0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x14, 0x28, 0x10, // ;
	0x08, 0x14, 0x28, 0x50, 0x28, 0x14, 0x0c, 0x00, // <
	0x00, 0xbe, 0x82, 0xfe, 0x82, 0xfa, 0x00, 0x00, // =
	0x20, 0x50, 0x28, 0x14, 0x28, 0x50, 0x60, 0x00, // >
	0xfc, 0x02, 0xfa, 0x14, 0x28, 0x38, 0x00, 0x38, // ?
	0x38, 0x44, 0x9a, 0xaa, 0xa2, 0x9e, 0x40, 0x3e, // @
	0x10, 0x28, 0x28, 0x44, 0x54, 0x92, 0xfe, 0x00, // A
	0xf8, 0x84, 0xb4, 0xa4, 0xba, 0x82, 0xfc, 0x00, // B
	0x3e, 0x42, 0x9e, 0xa0, 0x9e, 0x42, 0x3e, 0x00, // C
	0xf8, 0x84, 0xba, 0xaa, 0xba, 0x84, 0xf8, 0x00, // D
	0xfe, 0x82, 0xbe, 0x88, 0xbe, 0x82, 0xfe, 0x00, // E
	0xfe, 0x82, 0xbe, 0x88, 0xb8, 0xa0, 0xe0, 0x00, // F
	0x3e, 0x42, 0xbe, 0xaa, 0xba, 0x42, 0x3e, 0x00, // G
	0xee, 0xaa, 0xba, 0x82, 0xba, 0xaa, 0xee, 0x00, // H
	0x38, 0x28, 0x28, 0x28, 0x28, 0x28, 0x38, 0x00, // I
	0x0e, 0x0a, 0x0a, 0xea, 0xba, 0x44, 0x38, 0x00, // J
	0xee, 0xaa, 0xb4, 0x88, 0xb4, 0xaa, 0xee, 0x00, // K
	0xe0, 0xa0, 0xa0, 0xa0, 0xbe, 0x82, 0xfe, 0x00, // L
	0xc6, 0xaa, 0x92, 0xaa, 0xba, 0xaa, 0xee, 0x00, // M
	0xce, 0xaa, 0x9a, 0xaa, 0xb2, 0xaa, 0xee, 0x00, // N
	0x38, 0x44, 0xba, 0xaa, 0xba, 0x44, 0x38, 0x00, // O
	0xf8, 0x84, 0xba, 0x84, 0xb8, 0xa0, 0xe0, 0x00, // P
	0x38, 0x44, 0xba, 0xaa, 0xb4, 0x4a, 0x34, 0x00, // Q
	0xfc, 0x82, 0xba, 0x84, 0xb4, 0xaa, 0xee, 0x00, // R
	0x3e, 0x42, 0xbe, 0x44, 0xfa, 0x84, 0xf8, 0x00, // S
	0xfe, 0x82, 0xee, 0x28, 0x28, 0x28, 0x38, 0x00, // T
	0xee, 0xaa, 0xaa, 0xaa, 0xba, 0x44, 0x38, 0x00, // U
	0xee, 0xaa, 0xd4, 0x54, 0x54, 0x28, 0x38, 0x00, // V
	0xee, 0xba, 0xaa, 0xaa, 0x54, 0x44, 0x7c, 0x00, // W
	0xee, 0xaa, 0x54, 0x28, 0x54, 0xaa, 0xee, 0x00, // X
	0xee, 0xaa, 0xaa, 0x54, 0x28, 0x28, 0x38, 0x00, // Y
	0xfe, 0x82, 0xf4, 0x28, 0x5e, 0x82, 0xfe, 0x00, // Z
	0x7c, 0x40, 0x5c, 0x50, 0x50, 0x5c, 0x40, 0x7c, // [
	0x40, 0xa0, 0x50, 0x28, 0x14, 0x0a, 0x04, 0x00, // \
	0x7c, 0x04, 0x74, 0x14, 0x14, 0x74, 0x04, 0x7c, // ]
	0x10, 0x28, 0x44, 0xee, 0x28, 0x28, 0x28, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, // _
	0x3e, 0x40, 0x5e, 0x84, 0xde, 0x00, 0xfe, 0x00, // £
	0x10, 0x28, 0x28, 0x44, 0xd4, 0x12, 0xfe, 0x00, // a
	0xf8, 0x84, 0xb4, 0xa4, 0xba, 0x22, 0xfc, 0x00, // b
	0x3e, 0x40, 0x9e, 0xa0, 0x9e, 0x40, 0x3e, 0x00, // c
	0xf8, 0x84, 0xba, 0xaa, 0xba, 0x04, 0xf8, 0x00, // d
	0xfe, 0x00, 0xbc, 0x88, 0xbe, 0x80, 0xfe, 0x00, // e
	0xfe, 0x00, 0xbc, 0x88, 0xb8, 0x20, 0xe0, 0x00, // f
	0x3e, 0x40, 0xbe, 0xa2, 0xba, 0x42, 0x3e, 0x00, // g
	0xaa, 0xaa, 0xba, 0x82, 0xba, 0x2a, 0xea, 0x00, // h
	0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x00, // i
	0x0a, 0x0a, 0x0a, 0xaa, 0xba, 0x44, 0x38, 0x00, // j
	0xac, 0xaa, 0xb4, 0x88, 0xb4, 0x2a, 0xec, 0x00, // k
	0xe0, 0x20, 0xa0, 0xa0, 0xbe, 0x80, 0xfc, 0x00, // l
	0xc6, 0xaa, 0x92, 0xaa, 0xba, 0x2a, 0xea, 0x00, // m
	0xca, 0xaa, 0x9a, 0xaa, 0xb2, 0x2a, 0xee, 0x00, // n
	0x38, 0x44, 0xba, 0xaa, 0xba, 0x44, 0x38, 0x00, // o
	0xf8, 0x04, 0xba, 0x84, 0xb8, 0xa0, 0xa0, 0x00, // p
	0x38, 0x44, 0xba, 0xaa, 0xb4, 0x4a, 0x34, 0x00, // q
	0xfc, 0x82, 0xba, 0x84, 0xb4, 0xaa, 0xaa, 0x00, // r
	0x3e, 0x40, 0xbe, 0x44, 0xfa, 0x04, 0xf8, 0x00, // s
	0xfe, 0x00, 0xee, 0x28, 0x28, 0x28, 0x28, 0x00, // t
	0xea, 0x2a, 0xaa, 0xaa, 0xba, 0x44, 0x38, 0x00, // u
	0xee, 0x2a, 0xd4, 0x54, 0x54, 0x28, 0x38, 0x00, // v
	0xee, 0x3a, 0xaa, 0xaa, 0x54, 0x44, 0x7c, 0x00, // w
	0xee, 0xaa, 0x54, 0x28, 0x54, 0xaa, 0xae, 0x00, // x
	0xee, 0xaa, 0xaa, 0x54, 0x28, 0x28, 0x28, 0x00, // y
	0xfe, 0x02, 0xf4, 0x28, 0x5e, 0x80, 0xfe, 0x00, // z
	0x3e, 0x20, 0xee, 0x88, 0xe8, 0x2e, 0x20, 0x3e, // {
	0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, // |
	0xf8, 0x08, 0xee, 0x22, 0x2e, 0xe8, 0x08, 0xf8, // }
	0x6e, 0x92, 0xec, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x3c, 0x42, 0x9d, 0xa5, 0xa9, 0xa5, 0x9d, 0x42, // ©
};