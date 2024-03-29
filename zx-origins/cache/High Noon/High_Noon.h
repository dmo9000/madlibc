// High Noon font from https://damieng.com/zx-origins
static const uint8_t FONT_HIGH_NOON_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x38, 0x38, 0x38, 0x10, 0x00, 0x38, 0x38, 0x00, // !
	0x36, 0x36, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x24, 0x7e, 0x7e, 0x24, 0x7e, 0x7e, 0x24, 0x00, // #
	0x7c, 0xfc, 0x90, 0x78, 0x24, 0xfc, 0xf8, 0x00, // $
	0x62, 0x66, 0x0c, 0x18, 0x30, 0x66, 0x46, 0x00, // %
	0x78, 0xfc, 0x80, 0x7e, 0x84, 0xfe, 0x7e, 0x00, // &
	0x18, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x1c, 0x3c, 0x60, 0x40, 0x60, 0x3c, 0x1c, 0x00, // (
	0x70, 0x78, 0x0c, 0x04, 0x0c, 0x78, 0x70, 0x00, // )
	0x00, 0x10, 0x7c, 0x38, 0x38, 0x7c, 0x10, 0x00, // *
	0x00, 0x10, 0x10, 0x7c, 0x7c, 0x10, 0x10, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, // ,
	0x00, 0x00, 0x00, 0x7e, 0x7e, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, // .
	0x03, 0x07, 0x0c, 0x18, 0x30, 0xe0, 0xc0, 0x00, // /
	0x38, 0x7c, 0xc6, 0x82, 0xc6, 0x7c, 0x38, 0x00, // 0
	0x18, 0x38, 0x38, 0x08, 0x08, 0x3e, 0x3e, 0x00, // 1
	0x7c, 0xfe, 0x86, 0x18, 0x62, 0xfe, 0xfe, 0x00, // 2
	0xfe, 0xfe, 0x82, 0x3c, 0x02, 0xfe, 0x7c, 0x00, // 3
	0x1c, 0x3c, 0x64, 0xfe, 0xfe, 0x04, 0x0e, 0x00, // 4
	0xfe, 0xfe, 0xc2, 0x38, 0x86, 0xfe, 0xfc, 0x00, // 5
	0x3c, 0x7c, 0xc0, 0xfc, 0x82, 0xfe, 0x7c, 0x00, // 6
	0xfe, 0xfe, 0x84, 0x08, 0x10, 0x30, 0x30, 0x00, // 7
	0x7c, 0xfe, 0x82, 0x7c, 0x82, 0xfe, 0x7c, 0x00, // 8
	0x7c, 0xfe, 0x82, 0x7e, 0x06, 0x7c, 0x78, 0x00, // 9
	0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00, // :
	0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x30, // ;
	0x0c, 0x1c, 0x30, 0x60, 0x30, 0x1c, 0x0c, 0x00, // <
	0x00, 0x7e, 0x7e, 0x00, 0x7e, 0x7e, 0x00, 0x00, // =
	0x60, 0x70, 0x18, 0x0c, 0x18, 0x70, 0x60, 0x00, // >
	0x7c, 0xfe, 0x02, 0x3c, 0x00, 0x30, 0x30, 0x00, // ?
	0x3c, 0x7e, 0xc2, 0x9e, 0x9e, 0xc0, 0x7e, 0x3e, // @
	0x3c, 0x3c, 0x24, 0x7e, 0x42, 0xe7, 0xe7, 0x00, // A
	0xfc, 0xfe, 0x42, 0xfc, 0x42, 0xfe, 0xfc, 0x00, // B
	0x3c, 0x7e, 0xc2, 0x80, 0xc2, 0x7e, 0x3c, 0x00, // C
	0xf8, 0xfc, 0x46, 0x42, 0x46, 0xfc, 0xf8, 0x00, // D
	0xfe, 0xfe, 0x42, 0xf8, 0x42, 0xfe, 0xfe, 0x00, // E
	0xfe, 0xfe, 0x42, 0xf8, 0x40, 0xe0, 0xe0, 0x00, // F
	0x3c, 0x7e, 0xc0, 0x8e, 0xc6, 0x7e, 0x3e, 0x00, // G
	0xee, 0xee, 0x44, 0xfe, 0x44, 0xee, 0xee, 0x00, // H
	0x7c, 0x7c, 0x10, 0x10, 0x10, 0x7c, 0x7c, 0x00, // I
	0x0e, 0x0e, 0x04, 0x04, 0xc4, 0xfc, 0x78, 0x00, // J
	0xee, 0xee, 0x44, 0xf8, 0x44, 0xee, 0xee, 0x00, // K
	0xe0, 0xe0, 0x40, 0x40, 0x46, 0xfe, 0xfe, 0x00, // L
	0xe7, 0xe7, 0x5a, 0x5a, 0x42, 0xe7, 0xe7, 0x00, // M
	0xee, 0xee, 0x64, 0x54, 0x4c, 0xec, 0xe4, 0x00, // N
	0x38, 0x7c, 0xc6, 0x82, 0xc6, 0x7c, 0x38, 0x00, // O
	0xfc, 0xfe, 0x42, 0xfc, 0x40, 0xe0, 0xe0, 0x00, // P
	0x38, 0x7c, 0xc6, 0x82, 0xc4, 0x7c, 0x3e, 0x06, // Q
	0xfc, 0xfe, 0x42, 0xfc, 0x44, 0xee, 0xee, 0x00, // R
	0x7e, 0xfe, 0xc2, 0x38, 0x86, 0xfe, 0xfc, 0x00, // S
	0xfe, 0xfe, 0x92, 0x10, 0x10, 0x38, 0x38, 0x00, // T
	0xee, 0xee, 0x44, 0x44, 0x44, 0x7c, 0x38, 0x00, // U
	0xee, 0xee, 0x44, 0x44, 0x28, 0x38, 0x38, 0x00, // V
	0xe7, 0xe7, 0x42, 0x5a, 0x5a, 0x7e, 0x66, 0x00, // W
	0xee, 0xee, 0x44, 0x38, 0x44, 0xee, 0xee, 0x00, // X
	0xee, 0xee, 0x44, 0x28, 0x10, 0x38, 0x38, 0x00, // Y
	0x7e, 0x7e, 0x44, 0x18, 0x22, 0x7e, 0x7e, 0x00, // Z
	0x3c, 0x3c, 0x20, 0x20, 0x20, 0x20, 0x3c, 0x3c, // [
	0xc0, 0xe0, 0x30, 0x18, 0x0c, 0x07, 0x03, 0x00, // \
	0x3c, 0x3c, 0x04, 0x04, 0x04, 0x04, 0x3c, 0x3c, // ]
	0x10, 0x38, 0x7c, 0x54, 0x10, 0x10, 0x10, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, // _
	0x3c, 0x7e, 0x42, 0xf8, 0x42, 0xfe, 0xfe, 0x00, // £
	0x00, 0x3c, 0x24, 0x7e, 0x42, 0xe7, 0xe7, 0x00, // a
	0x00, 0xfc, 0x42, 0xfc, 0x42, 0xfe, 0xfc, 0x00, // b
	0x00, 0x3c, 0x42, 0x80, 0xc2, 0x7e, 0x3c, 0x00, // c
	0x00, 0xfc, 0x46, 0x42, 0x46, 0xfc, 0xf8, 0x00, // d
	0x00, 0xfe, 0x42, 0xf8, 0x42, 0xfe, 0xfe, 0x00, // e
	0x00, 0xfe, 0x42, 0xf8, 0x40, 0xe0, 0xe0, 0x00, // f
	0x00, 0x7e, 0xc0, 0x8e, 0xc6, 0x7e, 0x3e, 0x00, // g
	0x00, 0xee, 0x44, 0xfe, 0x44, 0xee, 0xee, 0x00, // h
	0x00, 0x7c, 0x10, 0x10, 0x10, 0x7c, 0x7c, 0x00, // i
	0x00, 0x0e, 0x04, 0x04, 0xc4, 0xfc, 0x78, 0x00, // j
	0x00, 0xee, 0x44, 0xf8, 0x44, 0xee, 0xee, 0x00, // k
	0x00, 0xe0, 0x40, 0x40, 0x46, 0xfe, 0xfe, 0x00, // l
	0x00, 0xe7, 0x5a, 0x5a, 0x42, 0xe7, 0xe7, 0x00, // m
	0x00, 0xee, 0x64, 0x54, 0x4c, 0xec, 0xe4, 0x00, // n
	0x00, 0x38, 0x44, 0x82, 0xc6, 0x7c, 0x38, 0x00, // o
	0x00, 0xfc, 0x42, 0xfc, 0x40, 0xe0, 0xe0, 0x00, // p
	0x00, 0x38, 0x44, 0x82, 0xc4, 0x7c, 0x3e, 0x06, // q
	0x00, 0xfc, 0x42, 0xfc, 0x44, 0xee, 0xee, 0x00, // r
	0x00, 0x7c, 0xc2, 0x38, 0x86, 0xfe, 0xfc, 0x00, // s
	0x00, 0xfe, 0x92, 0x10, 0x10, 0x38, 0x38, 0x00, // t
	0x00, 0xee, 0x44, 0x44, 0x44, 0x7c, 0x38, 0x00, // u
	0x00, 0xee, 0x44, 0x44, 0x28, 0x38, 0x38, 0x00, // v
	0x00, 0xe7, 0x42, 0x5a, 0x5a, 0x7e, 0x66, 0x00, // w
	0x00, 0xee, 0x44, 0x38, 0x44, 0xee, 0xee, 0x00, // x
	0x00, 0xee, 0x44, 0x28, 0x10, 0x38, 0x38, 0x00, // y
	0x00, 0x7e, 0x44, 0x18, 0x22, 0x7e, 0x7e, 0x00, // z
	0x1e, 0x1e, 0x10, 0xf0, 0xf0, 0x10, 0x1e, 0x1e, // {
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // |
	0xf0, 0xf0, 0x10, 0x1e, 0x1e, 0x10, 0xf0, 0xf0, // }
	0x32, 0x7e, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x3c, 0x42, 0x9d, 0xbd, 0xb1, 0x9d, 0x42, 0x3c, // ©
};