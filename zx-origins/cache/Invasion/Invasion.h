// Invasion font from https://damieng.com/zx-origins
static const uint8_t FONT_INVASION_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x10, 0x00, // !
	0x36, 0x24, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x44, 0x44, 0xfe, 0x44, 0xfe, 0x44, 0x44, 0x00, // #
	0x08, 0x3e, 0x40, 0x3c, 0x02, 0x7c, 0x10, 0x00, // $
	0xc2, 0xc4, 0x08, 0x10, 0x20, 0x46, 0x86, 0x00, // %
	0x1e, 0x62, 0x40, 0x7e, 0x84, 0x84, 0xfe, 0x00, // &
	0x18, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x7c, 0x40, 0x40, 0x40, 0x20, 0x30, 0x0c, 0x00, // (
	0x7c, 0x04, 0x04, 0x04, 0x08, 0x18, 0x60, 0x00, // )
	0x00, 0x6c, 0x38, 0xc6, 0x38, 0x6c, 0x00, 0x00, // *
	0x10, 0x10, 0x10, 0xfe, 0x10, 0x10, 0x10, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x10, 0x20, // ,
	0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, // .
	0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, // /
	0x1e, 0x62, 0x46, 0x8a, 0x92, 0xa2, 0xfe, 0x00, // 0
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, // 1
	0xf0, 0x8c, 0x04, 0x02, 0xfe, 0x80, 0xfe, 0x00, // 2
	0xfe, 0x82, 0x1e, 0x02, 0x04, 0x0c, 0xf0, 0x00, // 3
	0x82, 0x82, 0xfa, 0x02, 0x02, 0x02, 0x02, 0x00, // 4
	0xfe, 0x80, 0xfe, 0x02, 0x04, 0x8c, 0xf0, 0x00, // 5
	0x1e, 0x62, 0x40, 0x80, 0xbe, 0x82, 0xfe, 0x00, // 6
	0x78, 0x46, 0x02, 0x1d, 0x01, 0x01, 0x01, 0x00, // 7
	0xfe, 0x82, 0x84, 0x6c, 0x42, 0x82, 0xfe, 0x00, // 8
	0xfe, 0x82, 0xfa, 0x02, 0x04, 0x8c, 0xf0, 0x00, // 9
	0x00, 0x00, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, // :
	0x00, 0x00, 0x08, 0x08, 0x00, 0x18, 0x10, 0x20, // ;
	0x04, 0x08, 0x10, 0x20, 0x10, 0x08, 0x04, 0x00, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, // =
	0x20, 0x10, 0x08, 0x04, 0x08, 0x10, 0x20, 0x00, // >
	0xfe, 0x82, 0x0c, 0x30, 0x20, 0x00, 0x20, 0x00, // ?
	0xfe, 0x82, 0xbe, 0x92, 0x4e, 0x60, 0x1e, 0x00, // @
	0x1e, 0x62, 0x42, 0x82, 0xfa, 0x82, 0x82, 0x00, // A
	0xfe, 0x82, 0x84, 0xb8, 0x84, 0x82, 0xfe, 0x00, // B
	0xfe, 0x82, 0x80, 0x80, 0x40, 0x60, 0x1e, 0x00, // C
	0xfe, 0x02, 0x82, 0x82, 0x84, 0x8c, 0xf0, 0x00, // D
	0xfe, 0x80, 0x80, 0xbe, 0x40, 0x60, 0x1e, 0x00, // E
	0xfe, 0x80, 0x80, 0xbc, 0x80, 0x80, 0x80, 0x00, // F
	0xfe, 0x82, 0x80, 0x8e, 0x42, 0x62, 0x1e, 0x00, // G
	0x82, 0x82, 0x82, 0xbe, 0x82, 0x82, 0x82, 0x00, // H
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // I
	0x06, 0x02, 0x02, 0x02, 0x04, 0x8c, 0xf0, 0x00, // J
	0x82, 0x8c, 0xb0, 0x8c, 0x84, 0x82, 0x82, 0x00, // K
	0xc0, 0x80, 0x80, 0x80, 0x40, 0x62, 0x1e, 0x00, // L
	0xf8, 0x84, 0x92, 0x92, 0x92, 0x92, 0x92, 0x00, // M
	0xf0, 0x8c, 0x84, 0x82, 0x82, 0x82, 0x82, 0x00, // N
	0xfe, 0x82, 0x82, 0x82, 0x42, 0x62, 0x1e, 0x00, // O
	0xfe, 0x82, 0x84, 0x98, 0x80, 0x80, 0x80, 0x00, // P
	0xfe, 0x82, 0x82, 0x92, 0x94, 0x8c, 0xf3, 0x00, // Q
	0xfe, 0x82, 0x84, 0x98, 0xb0, 0x88, 0x86, 0x00, // R
	0xfe, 0x80, 0xfe, 0x02, 0x04, 0x8c, 0xf0, 0x00, // S
	0xfe, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // T
	0x82, 0x82, 0x82, 0x82, 0x42, 0x62, 0x1e, 0x00, // U
	0x82, 0x82, 0x82, 0x82, 0x84, 0x8c, 0xf0, 0x00, // V
	0x92, 0x92, 0x92, 0x92, 0x92, 0x84, 0xf8, 0x00, // W
	0x82, 0x6c, 0x10, 0x6c, 0x44, 0x82, 0x82, 0x00, // X
	0x82, 0x82, 0xfa, 0x02, 0x04, 0x8c, 0xf0, 0x00, // Y
	0xfe, 0x82, 0x0c, 0x70, 0x80, 0x80, 0xfe, 0x00, // Z
	0x3c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3c, 0x00, // [
	0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00, // \
	0x3c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x3c, 0x00, // ]
	0x10, 0x38, 0x38, 0x54, 0x10, 0x10, 0x10, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x1e, 0x62, 0x40, 0x78, 0x80, 0x82, 0xfe, 0x00, // £
	0x00, 0x1e, 0x62, 0x42, 0x9e, 0x82, 0x82, 0x00, // a
	0x00, 0xfe, 0x84, 0xb8, 0x84, 0x82, 0xfe, 0x00, // b
	0x00, 0xfe, 0x80, 0x80, 0x40, 0x60, 0x1e, 0x00, // c
	0x00, 0xfe, 0x02, 0x82, 0x84, 0x8c, 0xf0, 0x00, // d
	0x00, 0xfe, 0x80, 0xbc, 0x40, 0x60, 0x1e, 0x00, // e
	0x00, 0xfe, 0x80, 0xbc, 0x80, 0x80, 0x80, 0x00, // f
	0x00, 0xfe, 0x80, 0x8e, 0x42, 0x62, 0x1e, 0x00, // g
	0x00, 0x82, 0x82, 0xbe, 0x82, 0x82, 0x82, 0x00, // h
	0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // i
	0x00, 0x02, 0x02, 0x02, 0x04, 0x0c, 0xf0, 0x00, // j
	0x00, 0x82, 0x8c, 0xb0, 0x8c, 0x84, 0x82, 0x00, // k
	0x00, 0x80, 0x80, 0x80, 0x40, 0x60, 0x1e, 0x00, // l
	0x00, 0xf8, 0x84, 0x92, 0x92, 0x92, 0x92, 0x00, // m
	0x00, 0xf0, 0x8c, 0x84, 0x82, 0x82, 0x82, 0x00, // n
	0x00, 0xfe, 0x82, 0x82, 0x42, 0x62, 0x1e, 0x00, // o
	0x00, 0xfe, 0x82, 0x84, 0xb8, 0x80, 0x80, 0x00, // p
	0x00, 0xfe, 0x82, 0x82, 0x94, 0x8c, 0xf3, 0x00, // q
	0x00, 0xfe, 0x82, 0x8c, 0xb0, 0x88, 0x86, 0x00, // r
	0x00, 0xfe, 0x80, 0xfe, 0x02, 0x84, 0xf8, 0x00, // s
	0x00, 0xfe, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // t
	0x00, 0x82, 0x82, 0x82, 0x42, 0x62, 0x1e, 0x00, // u
	0x00, 0x82, 0x82, 0x82, 0x84, 0x8c, 0xf0, 0x00, // v
	0x00, 0x92, 0x92, 0x92, 0x92, 0x84, 0xf8, 0x00, // w
	0x00, 0x82, 0x6c, 0x10, 0x6c, 0x44, 0x82, 0x00, // x
	0x00, 0x82, 0x82, 0xfa, 0x04, 0x0c, 0xf0, 0x00, // y
	0x00, 0xfe, 0x02, 0x0c, 0x70, 0x80, 0xfe, 0x00, // z
	0x1e, 0x10, 0x10, 0xe0, 0x10, 0x10, 0x1e, 0x00, // {
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // |
	0x78, 0x08, 0x08, 0x07, 0x08, 0x08, 0x78, 0x00, // }
	0xe2, 0x92, 0x8e, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x3c, 0x42, 0x9d, 0xa1, 0xa1, 0x9d, 0x42, 0x3c, // ©
};