// Touch Down font from https://damieng.com/zx-origins
static const uint8_t FONT_TOUCH_DOWN_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x10, 0x10, 0x10, 0x10, 0x00, 0x38, 0x38, 0x00, // !
	0xee, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x44, 0xfe, 0xfe, 0xfe, 0x44, 0xfe, 0x44, 0x00, // #
	0x18, 0x7e, 0xe0, 0x7c, 0x0e, 0xfc, 0x30, 0x00, // $
	0xe2, 0xe6, 0xec, 0x18, 0x30, 0x60, 0xc6, 0x00, // %
	0x7c, 0xfc, 0xfc, 0x80, 0x7e, 0x84, 0x7e, 0x00, // &
	0x38, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x1c, 0x3c, 0x3c, 0x20, 0x20, 0x20, 0x1c, 0x00, // (
	0x38, 0x3c, 0x3c, 0x04, 0x04, 0x04, 0x38, 0x00, // )
	0x00, 0x10, 0x7c, 0x38, 0x7c, 0x10, 0x00, 0x00, // *
	0x10, 0x10, 0x7c, 0x7c, 0x7c, 0x10, 0x10, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x30, 0x30, // ,
	0x00, 0x00, 0x7e, 0x7e, 0x7e, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x00, // .
	0x0c, 0x0c, 0x18, 0x18, 0x18, 0x30, 0x30, 0x00, // /
	0x7c, 0xfe, 0xfe, 0x8a, 0x92, 0xa2, 0x7c, 0x00, // 0
	0x18, 0x38, 0x38, 0x08, 0x08, 0x08, 0x08, 0x00, // 1
	0xfc, 0xfe, 0xfe, 0x02, 0x7c, 0xc0, 0xfe, 0x00, // 2
	0xfe, 0xfe, 0xfe, 0x02, 0x7c, 0x02, 0xfc, 0x00, // 3
	0x1c, 0x3c, 0x7c, 0xfc, 0x84, 0xfe, 0x04, 0x00, // 4
	0xfe, 0xfe, 0xfe, 0x80, 0x7c, 0x06, 0xfc, 0x00, // 5
	0x7c, 0xfc, 0xfc, 0x80, 0xfc, 0x82, 0x7c, 0x00, // 6
	0xfe, 0xfe, 0xfe, 0x04, 0x08, 0x08, 0x10, 0x00, // 7
	0x7c, 0xfe, 0xfe, 0x82, 0x7c, 0x82, 0x7c, 0x00, // 8
	0x7c, 0xfe, 0xfe, 0x82, 0x7e, 0x02, 0x7c, 0x00, // 9
	0x00, 0x38, 0x38, 0x38, 0x00, 0x38, 0x00, 0x00, // :
	0x00, 0x1c, 0x1c, 0x1c, 0x00, 0x1c, 0x18, 0x18, // ;
	0x00, 0x18, 0x38, 0x78, 0x60, 0x20, 0x18, 0x00, // <
	0x00, 0x7e, 0x7e, 0x7e, 0x00, 0x7e, 0x00, 0x00, // =
	0x00, 0x30, 0x38, 0x3c, 0x0c, 0x08, 0x30, 0x00, // >
	0xfc, 0xfe, 0xfe, 0x02, 0x3c, 0x00, 0x38, 0x00, // ?
	0x1c, 0x3e, 0x7e, 0x52, 0x4e, 0x20, 0x1e, 0x00, // @
	0x7c, 0xfe, 0xfe, 0x82, 0xfe, 0x82, 0x82, 0x00, // A
	0xfc, 0xfe, 0xfe, 0x82, 0xfc, 0x82, 0xfc, 0x00, // B
	0x7c, 0xfe, 0xfe, 0x82, 0x80, 0x80, 0x7e, 0x00, // C
	0xfc, 0xfe, 0xfe, 0x82, 0x82, 0x82, 0xfc, 0x00, // D
	0x7e, 0xfe, 0xfe, 0x80, 0xfc, 0x80, 0x7e, 0x00, // E
	0x7e, 0xfe, 0xfe, 0x80, 0xfc, 0x80, 0x80, 0x00, // F
	0x7e, 0xfe, 0xfe, 0x80, 0xbe, 0x82, 0x7e, 0x00, // G
	0x82, 0x82, 0xfe, 0xfe, 0xfe, 0x82, 0x82, 0x00, // H
	0x7c, 0x7c, 0x7c, 0x10, 0x10, 0x10, 0x7c, 0x00, // I
	0x1e, 0x1e, 0x1e, 0x04, 0x04, 0x8c, 0x78, 0x00, // J
	0x82, 0x86, 0xdc, 0xf8, 0xdc, 0x86, 0x82, 0x00, // K
	0x80, 0x80, 0x80, 0x80, 0xc0, 0xfe, 0xfe, 0x00, // L
	0xee, 0xfe, 0xfe, 0x92, 0x92, 0x92, 0x92, 0x00, // M
	0xfc, 0xfe, 0xfe, 0x82, 0x82, 0x82, 0x82, 0x00, // N
	0x7c, 0xfe, 0xfe, 0x82, 0x82, 0x82, 0x7c, 0x00, // O
	0xfc, 0xfe, 0xfe, 0x82, 0xfc, 0x80, 0x80, 0x00, // P
	0x7c, 0xfe, 0xfe, 0x82, 0x8a, 0x84, 0x7a, 0x02, // Q
	0xfc, 0xfe, 0xfe, 0x82, 0xfc, 0x88, 0x86, 0x00, // R
	0x7e, 0xfe, 0xfe, 0x80, 0x7c, 0x06, 0xfc, 0x00, // S
	0xfe, 0xfe, 0xfe, 0x10, 0x10, 0x10, 0x10, 0x00, // T
	0x82, 0x82, 0x82, 0x82, 0xc6, 0xfe, 0x7c, 0x00, // U
	0x82, 0x82, 0x82, 0xc6, 0xee, 0x7c, 0x38, 0x00, // V
	0x92, 0x92, 0x92, 0x92, 0xfe, 0xfe, 0xee, 0x00, // W
	0x82, 0x82, 0xee, 0x7c, 0xee, 0x82, 0x82, 0x00, // X
	0x82, 0x82, 0xee, 0xfe, 0x7c, 0x10, 0x10, 0x00, // Y
	0xfe, 0xfe, 0xfe, 0x0c, 0x30, 0xc0, 0xfe, 0x00, // Z
	0x1c, 0x3c, 0x3c, 0x20, 0x20, 0x20, 0x1c, 0x00, // [
	0x30, 0x30, 0x18, 0x18, 0x18, 0x0c, 0x0c, 0x00, // \
	0x38, 0x3c, 0x3c, 0x04, 0x04, 0x04, 0x38, 0x00, // ]
	0x38, 0x7c, 0xfe, 0xfe, 0x10, 0x10, 0x10, 0x10, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, // _
	0x3c, 0x7e, 0x7e, 0x42, 0xf0, 0x40, 0xfe, 0x00, // £
	0x00, 0x00, 0x7c, 0x82, 0xc6, 0xfe, 0x7e, 0x00, // a
	0x80, 0x80, 0xfc, 0x82, 0xc6, 0xfe, 0x7c, 0x00, // b
	0x00, 0x00, 0x7e, 0x80, 0xc0, 0xfe, 0x7e, 0x00, // c
	0x02, 0x02, 0x7e, 0x82, 0xc6, 0xfe, 0x7c, 0x00, // d
	0x00, 0x00, 0x7c, 0x8e, 0xf0, 0xfe, 0x7e, 0x00, // e
	0x0c, 0x10, 0x10, 0x7e, 0x7e, 0x10, 0x10, 0x10, // f
	0x00, 0x00, 0x7c, 0x82, 0x7e, 0x06, 0xfe, 0xfc, // g
	0x80, 0x80, 0xbc, 0xfe, 0xc6, 0x82, 0x82, 0x00, // h
	0x30, 0x00, 0x30, 0x10, 0x10, 0x38, 0x38, 0x00, // i
	0x06, 0x00, 0x06, 0x02, 0x02, 0x0e, 0x7e, 0x7c, // j
	0x80, 0x84, 0x8c, 0xf8, 0xf8, 0xcc, 0x86, 0x00, // k
	0x60, 0x20, 0x20, 0x20, 0x30, 0x3c, 0x1c, 0x00, // l
	0x00, 0x00, 0x6c, 0xfe, 0xd6, 0x92, 0x92, 0x00, // m
	0x00, 0x00, 0x7c, 0xfe, 0xc6, 0x82, 0x82, 0x00, // n
	0x00, 0x00, 0x7c, 0x82, 0xc6, 0xfe, 0x7c, 0x00, // o
	0x00, 0x00, 0x7c, 0x82, 0xc6, 0xfe, 0xfc, 0x80, // p
	0x00, 0x00, 0x7c, 0x82, 0xc6, 0xfe, 0x7e, 0x02, // q
	0x00, 0x00, 0x7c, 0xfe, 0xc2, 0x80, 0x80, 0x00, // r
	0x00, 0x00, 0x7e, 0xf0, 0x1e, 0xfe, 0xfc, 0x00, // s
	0x20, 0x20, 0xfc, 0x20, 0x30, 0x3e, 0x1e, 0x00, // t
	0x00, 0x00, 0x82, 0x82, 0xc6, 0xfe, 0x7c, 0x00, // u
	0x00, 0x00, 0x82, 0x82, 0xee, 0x7c, 0x38, 0x00, // v
	0x00, 0x00, 0x92, 0x92, 0xd6, 0xfe, 0x6c, 0x00, // w
	0x00, 0x00, 0xc6, 0x7c, 0x38, 0x7c, 0xc6, 0x00, // x
	0x00, 0x00, 0x82, 0xc2, 0x7e, 0x06, 0xfe, 0xfc, // y
	0x00, 0x00, 0xfe, 0x1c, 0x70, 0xfe, 0xfe, 0x00, // z
	0x1e, 0x38, 0x38, 0xf0, 0x38, 0x38, 0x1e, 0x00, // {
	0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x00, // |
	0xf0, 0x38, 0x38, 0x1e, 0x38, 0x38, 0xf0, 0x00, // }
	0x34, 0x7c, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x7e, 0xc3, 0x99, 0xa1, 0x99, 0xc3, 0xff, 0x7e, // ©
};