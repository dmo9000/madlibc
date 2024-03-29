// Striker font from https://damieng.com/zx-origins
static const uint8_t FONT_STRIKER_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x10, 0x00, // !
	0xee, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x00, 0x44, 0xfe, 0x44, 0xfe, 0x44, 0x00, 0x00, // #
	0x08, 0x3e, 0x42, 0xf0, 0x0e, 0x82, 0xfe, 0x10, // $
	0x60, 0x94, 0x68, 0x10, 0x2c, 0x52, 0x0c, 0x00, // %
	0x30, 0x40, 0x88, 0x7e, 0x88, 0x88, 0xfe, 0x00, // &
	0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x08, 0x10, 0x20, 0x20, 0x20, 0x20, 0x38, 0x00, // (
	0x38, 0x08, 0x08, 0x08, 0x08, 0x10, 0x20, 0x00, // )
	0x00, 0x6c, 0x10, 0x7c, 0x10, 0x6c, 0x00, 0x00, // *
	0x00, 0x10, 0x10, 0x7c, 0x10, 0x10, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x38, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, // .
	0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, // /
	0x3e, 0x42, 0x82, 0x82, 0x82, 0x84, 0xf8, 0x00, // 0
	0x04, 0x1c, 0x64, 0x04, 0x04, 0x04, 0x04, 0x00, // 1
	0xf8, 0x04, 0x02, 0xfe, 0x80, 0x80, 0xfe, 0x00, // 2
	0xfe, 0x02, 0x02, 0x7c, 0x02, 0x04, 0xf8, 0x00, // 3
	0x0e, 0x12, 0x22, 0x42, 0xfe, 0x02, 0x02, 0x00, // 4
	0xfe, 0x80, 0x80, 0x7e, 0x02, 0x04, 0xf8, 0x00, // 5
	0x3e, 0x40, 0x80, 0xfe, 0x82, 0x82, 0xfe, 0x00, // 6
	0xfe, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x00, // 7
	0x3e, 0x42, 0x82, 0x7c, 0x82, 0x82, 0xfe, 0x00, // 8
	0xfe, 0x82, 0x82, 0xfe, 0x02, 0x04, 0xf8, 0x00, // 9
	0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x00, // :
	0x00, 0x00, 0x18, 0x00, 0x00, 0x08, 0x38, 0x00, // ;
	0x00, 0x06, 0x18, 0x60, 0x18, 0x06, 0x00, 0x00, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, // =
	0x00, 0x60, 0x18, 0x06, 0x18, 0x60, 0x00, 0x00, // >
	0xfe, 0x82, 0x04, 0x08, 0x10, 0x00, 0x10, 0x00, // ?
	0x3e, 0x42, 0x9a, 0x2a, 0x4a, 0x4a, 0x7e, 0x00, // @
	0xf8, 0x84, 0x82, 0x82, 0xfe, 0x82, 0x82, 0x00, // A
	0xfe, 0x82, 0x84, 0xf8, 0x84, 0x82, 0xfe, 0x00, // B
	0xfe, 0x82, 0x80, 0x80, 0x80, 0x42, 0x3e, 0x00, // C
	0xfe, 0x82, 0x82, 0x82, 0x82, 0x84, 0xf8, 0x00, // D
	0xfe, 0x80, 0x80, 0xfe, 0x80, 0x40, 0x3e, 0x00, // E
	0xfe, 0x80, 0x80, 0xfe, 0x80, 0x80, 0x80, 0x00, // F
	0xfe, 0x82, 0x80, 0x9e, 0x82, 0x42, 0x3e, 0x00, // G
	0x82, 0x82, 0x82, 0xfe, 0x82, 0x82, 0x82, 0x00, // H
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // I
	0x0e, 0x02, 0x02, 0x02, 0x82, 0x82, 0x7e, 0x00, // J
	0x82, 0x84, 0x88, 0x90, 0xa8, 0xc4, 0x82, 0x00, // K
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xfe, 0x00, // L
	0x82, 0xc6, 0xc6, 0xaa, 0xaa, 0x92, 0x92, 0x00, // M
	0xc2, 0xa2, 0xa2, 0x92, 0x8a, 0x8a, 0x86, 0x00, // N
	0x3e, 0x42, 0x82, 0x82, 0x82, 0x84, 0xf8, 0x00, // O
	0xfe, 0x82, 0x84, 0xf8, 0x80, 0x80, 0x80, 0x00, // P
	0x3e, 0x42, 0x82, 0x82, 0x8a, 0x84, 0xfa, 0x00, // Q
	0xfe, 0x82, 0x84, 0xf8, 0x88, 0x84, 0x82, 0x00, // R
	0xfe, 0x82, 0x40, 0x3e, 0x02, 0x84, 0xf8, 0x00, // S
	0xfe, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // T
	0x82, 0x82, 0x82, 0x82, 0x82, 0x84, 0xf8, 0x00, // U
	0x82, 0x82, 0x44, 0x44, 0x28, 0x28, 0x10, 0x00, // V
	0x82, 0x82, 0x92, 0x92, 0xaa, 0xaa, 0xc6, 0x00, // W
	0x82, 0x44, 0x28, 0x10, 0x28, 0x44, 0x82, 0x00, // X
	0x82, 0x82, 0x82, 0xfe, 0x02, 0x04, 0xf8, 0x00, // Y
	0xfe, 0x04, 0x08, 0x10, 0x20, 0x40, 0xfe, 0x00, // Z
	0x1c, 0x20, 0x40, 0x40, 0x40, 0x40, 0x7c, 0x00, // [
	0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00, // \
	0x7c, 0x04, 0x04, 0x04, 0x04, 0x08, 0x70, 0x00, // ]
	0x18, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x3e, 0x40, 0x80, 0xfc, 0x80, 0x80, 0xfe, 0x00, // £
	0x00, 0x00, 0x3e, 0x42, 0x82, 0x82, 0x7e, 0x00, // a
	0x80, 0x80, 0xf8, 0x84, 0x82, 0x82, 0xfe, 0x00, // b
	0x00, 0x00, 0x3e, 0x40, 0x80, 0x80, 0xfe, 0x00, // c
	0x02, 0x02, 0x3e, 0x42, 0x82, 0x82, 0xfe, 0x00, // d
	0x00, 0x00, 0x3e, 0x42, 0xfe, 0x80, 0xfe, 0x00, // e
	0x1e, 0x22, 0x40, 0x7c, 0x40, 0x40, 0x40, 0x00, // f
	0x00, 0x00, 0x3e, 0x42, 0x82, 0xfe, 0x02, 0xfe, // g
	0x80, 0x80, 0xf8, 0x84, 0x82, 0x82, 0x82, 0x00, // h
	0x10, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // i
	0x02, 0x00, 0x02, 0x02, 0x02, 0x02, 0x84, 0xf8, // j
	0x80, 0x82, 0x84, 0xf8, 0x88, 0x84, 0x82, 0x00, // k
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // l
	0x00, 0x00, 0xf8, 0x94, 0x92, 0x92, 0x92, 0x00, // m
	0x00, 0x00, 0xf8, 0x84, 0x82, 0x82, 0x82, 0x00, // n
	0x00, 0x00, 0x3e, 0x42, 0x82, 0x82, 0xfe, 0x00, // o
	0x00, 0x00, 0xf8, 0x84, 0x82, 0x82, 0xfc, 0x80, // p
	0x00, 0x00, 0x3e, 0x42, 0x82, 0x82, 0x7e, 0x02, // q
	0x00, 0x00, 0x3e, 0x42, 0x80, 0x80, 0x80, 0x00, // r
	0x00, 0x00, 0x3e, 0x40, 0xfe, 0x02, 0xfe, 0x00, // s
	0x40, 0x40, 0x7c, 0x40, 0x40, 0x22, 0x1e, 0x00, // t
	0x00, 0x00, 0x82, 0x82, 0x82, 0x42, 0x3e, 0x00, // u
	0x00, 0x00, 0x82, 0x82, 0x44, 0x28, 0x10, 0x00, // v
	0x00, 0x00, 0x92, 0x92, 0x92, 0x52, 0x3e, 0x00, // w
	0x00, 0x00, 0xc6, 0x28, 0x10, 0x28, 0xc6, 0x00, // x
	0x00, 0x00, 0x82, 0x82, 0x82, 0xfe, 0x04, 0xf8, // y
	0x00, 0x00, 0xfe, 0x04, 0x38, 0x40, 0xfe, 0x00, // z
	0x06, 0x08, 0x10, 0x60, 0x10, 0x10, 0x1e, 0x00, // {
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // |
	0x78, 0x08, 0x08, 0x06, 0x08, 0x10, 0x60, 0x00, // }
	0xe2, 0x92, 0x8e, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x1f, 0x21, 0x4d, 0x91, 0xa1, 0xbd, 0x81, 0xff, // ©
};