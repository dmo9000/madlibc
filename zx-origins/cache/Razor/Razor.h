// Razor font from https://damieng.com/zx-origins
static const uint8_t FONT_RAZOR_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x08, 0x18, 0x38, 0x38, 0x38, 0x00, 0x38, 0x00, // !
	0xcc, 0xee, 0xcc, 0x88, 0x00, 0x00, 0x00, 0x00, // "
	0x24, 0x6c, 0xfe, 0x6c, 0xfe, 0x6c, 0x48, 0x00, // #
	0x10, 0x7c, 0x60, 0x3e, 0x8c, 0xf8, 0x20, 0x00, // $
	0x42, 0xac, 0xf8, 0x7c, 0x3a, 0x6e, 0xee, 0x00, // %
	0x70, 0xd8, 0xcc, 0x78, 0xce, 0xdc, 0xf6, 0x00, // &
	0x30, 0x38, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, // '
	0x04, 0x18, 0x30, 0x30, 0x30, 0x18, 0x1c, 0x00, // (
	0x20, 0x18, 0x0c, 0x0c, 0x0c, 0x18, 0x38, 0x00, // )
	0x08, 0x18, 0xfe, 0x7c, 0xfe, 0x30, 0x20, 0x00, // *
	0x00, 0x08, 0x18, 0x7e, 0x18, 0x18, 0x10, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x30, 0x38, 0x30, 0x20, // ,
	0x00, 0x00, 0x04, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x38, 0x00, // .
	0x02, 0x0c, 0x18, 0x38, 0x70, 0xe0, 0xe0, 0x00, // /
	0x60, 0x30, 0x98, 0xcc, 0xc6, 0xfe, 0x7c, 0x00, // 0
	0x38, 0x18, 0x18, 0x18, 0x38, 0x18, 0x08, 0x00, // 1
	0xfe, 0x4c, 0x18, 0x30, 0x62, 0xfe, 0xfe, 0x00, // 2
	0xfe, 0x46, 0x1c, 0x08, 0x24, 0x7e, 0xfe, 0x00, // 3
	0x0c, 0x1c, 0x30, 0x6c, 0xce, 0xfc, 0x08, 0x00, // 4
	0xfe, 0xc4, 0xe0, 0x18, 0x0c, 0x7e, 0xfe, 0x00, // 5
	0x7c, 0x88, 0xa0, 0xd8, 0xcc, 0x7e, 0x3e, 0x00, // 6
	0xfe, 0x62, 0x24, 0x0c, 0x18, 0x30, 0x78, 0x00, // 7
	0xfe, 0xcc, 0x68, 0x38, 0x2c, 0x66, 0xfe, 0x00, // 8
	0xff, 0xc6, 0x66, 0x1c, 0x18, 0x30, 0x70, 0x00, // 9
	0x00, 0x30, 0x38, 0x00, 0x00, 0x30, 0x38, 0x00, // :
	0x00, 0x30, 0x38, 0x00, 0x30, 0x38, 0x30, 0x20, // ;
	0x04, 0x18, 0x30, 0xf0, 0x30, 0x18, 0x04, 0x00, // <
	0x00, 0x04, 0x7e, 0x00, 0x04, 0x7e, 0x00, 0x00, // =
	0x40, 0x30, 0x18, 0x0e, 0x18, 0x30, 0x40, 0x00, // >
	0xfe, 0x46, 0x0c, 0x18, 0x20, 0x18, 0x3c, 0x00, // ?
	0x1c, 0x36, 0x6f, 0xd3, 0xdd, 0xe0, 0xfe, 0xff, // @
	0x1e, 0x36, 0x66, 0xc6, 0xce, 0xd6, 0xe6, 0x00, // A
	0xfc, 0xc8, 0xd0, 0xf8, 0xcc, 0xc6, 0xfe, 0x00, // B
	0x1c, 0x2c, 0x40, 0xc0, 0xc0, 0xc4, 0xfe, 0x00, // C
	0xe0, 0xd0, 0xc8, 0xc4, 0xc6, 0xc6, 0xfe, 0x00, // D
	0xfc, 0xc8, 0xc0, 0xf0, 0xc0, 0xc4, 0xfe, 0x00, // E
	0xfc, 0xc8, 0xc0, 0xf0, 0xc0, 0xc0, 0x80, 0x00, // F
	0x1c, 0x2c, 0x40, 0xc0, 0xcc, 0xc6, 0xfe, 0x00, // G
	0xc6, 0xc6, 0xfe, 0xc6, 0xc6, 0xc6, 0x42, 0x00, // H
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x08, 0x00, // I
	0x0e, 0x06, 0x06, 0x06, 0x04, 0x28, 0x70, 0x00, // J
	0xc0, 0xc4, 0xc8, 0xf0, 0xd8, 0xcc, 0xc6, 0x00, // K
	0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc4, 0xfe, 0x00, // L
	0xc6, 0xee, 0xd6, 0xc6, 0xc6, 0xc6, 0x42, 0x00, // M
	0xc6, 0xe6, 0xd6, 0xde, 0xce, 0xc6, 0x42, 0x00, // N
	0x60, 0xd0, 0xc8, 0xc4, 0xc2, 0xc6, 0x7c, 0x00, // O
	0xfe, 0xcc, 0xc8, 0xf0, 0xc0, 0xc0, 0x80, 0x00, // P
	0x1e, 0x26, 0x46, 0xc6, 0xd6, 0xda, 0xfc, 0x06, // Q
	0xfe, 0xcc, 0xc8, 0xd0, 0xd8, 0xcc, 0x86, 0x00, // R
	0xfc, 0xc8, 0xe0, 0x18, 0x0c, 0x46, 0xfe, 0x00, // S
	0xff, 0x5a, 0x18, 0x18, 0x18, 0x18, 0x08, 0x00, // T
	0x42, 0xc6, 0xc6, 0xc6, 0x66, 0x36, 0x1c, 0x00, // U
	0x42, 0xc6, 0xc6, 0xc4, 0xc8, 0xd0, 0xe0, 0x00, // V
	0x42, 0xc6, 0xc6, 0xc6, 0xd6, 0xee, 0xc6, 0x00, // W
	0xc2, 0x6c, 0x38, 0x38, 0x6c, 0x46, 0x82, 0x00, // X
	0xc2, 0xc6, 0x6c, 0x3c, 0x18, 0x30, 0x20, 0x00, // Y
	0xfe, 0x4c, 0x18, 0x30, 0x60, 0xc4, 0xfe, 0x00, // Z
	0x7c, 0x28, 0x60, 0x60, 0x60, 0x68, 0x3c, 0x00, // [
	0x80, 0x60, 0x30, 0x38, 0x1c, 0x0e, 0x0e, 0x00, // \
	0x7c, 0x28, 0x0c, 0x0c, 0x0c, 0x2c, 0x78, 0x00, // ]
	0x10, 0x10, 0x38, 0x28, 0x44, 0x00, 0x00, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x06, 0xff, // _
	0x7e, 0x62, 0x30, 0x78, 0x32, 0x7e, 0xfe, 0x00, // £
	0x00, 0x00, 0x0e, 0x36, 0x66, 0xce, 0xf6, 0x00, // a
	0x40, 0xc0, 0xc0, 0xd8, 0xec, 0xc6, 0xfc, 0x00, // b
	0x00, 0x00, 0x1c, 0x36, 0x64, 0xc0, 0xfe, 0x00, // c
	0x04, 0x06, 0x06, 0x36, 0x6e, 0xc6, 0x7e, 0x00, // d
	0x00, 0x00, 0x1c, 0x26, 0x4c, 0xd0, 0xfe, 0x00, // e
	0x0e, 0x1a, 0x30, 0x78, 0x60, 0x60, 0x40, 0x00, // f
	0x00, 0x00, 0x3e, 0x4c, 0xd6, 0xe6, 0x0c, 0xf8, // g
	0x40, 0xc0, 0xdc, 0xec, 0xc6, 0xcc, 0x88, 0x00, // h
	0x10, 0x30, 0x00, 0x38, 0x30, 0x30, 0x20, 0x00, // i
	0x04, 0x06, 0x00, 0x06, 0x06, 0x0c, 0x58, 0xf0, // j
	0x40, 0xc0, 0xc8, 0xd0, 0xfc, 0xc6, 0xc4, 0x00, // k
	0x08, 0x38, 0x18, 0x18, 0x18, 0x18, 0x10, 0x00, // l
	0x00, 0x00, 0xee, 0x7c, 0xd6, 0xd6, 0xd6, 0x00, // m
	0x00, 0x00, 0xf0, 0x5c, 0xcc, 0xc6, 0xce, 0x00, // n
	0x00, 0x00, 0x70, 0xd8, 0xcc, 0x46, 0xfe, 0x00, // o
	0x00, 0x00, 0xfc, 0x46, 0xec, 0xd8, 0xc0, 0x40, // p
	0x00, 0x00, 0x7e, 0xc4, 0x6e, 0x36, 0x06, 0x04, // q
	0x00, 0x00, 0xdc, 0x66, 0xc4, 0xc0, 0x40, 0x00, // r
	0x00, 0x00, 0x7c, 0x60, 0x3e, 0xc4, 0xf8, 0x00, // s
	0x08, 0x18, 0xfe, 0x18, 0x18, 0x18, 0x10, 0x00, // t
	0x00, 0x00, 0xce, 0xc6, 0x66, 0x36, 0x1e, 0x00, // u
	0x00, 0x00, 0x4e, 0xc6, 0xcc, 0xd8, 0xf0, 0x00, // v
	0x00, 0x00, 0xd6, 0xd6, 0xd6, 0xfe, 0xee, 0x00, // w
	0x00, 0x00, 0xc6, 0x7c, 0x38, 0x6c, 0xe6, 0x00, // x
	0x00, 0x00, 0xc2, 0xc6, 0x66, 0x76, 0x0c, 0x38, // y
	0x00, 0x00, 0xfc, 0x98, 0x32, 0x66, 0xfe, 0x00, // z
	0x1e, 0x18, 0x08, 0x30, 0x08, 0x18, 0x1e, 0x00, // {
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x10, // |
	0x78, 0x18, 0x10, 0x0c, 0x10, 0x18, 0x78, 0x00, // }
	0x00, 0x00, 0xe2, 0xd6, 0x8e, 0x00, 0x00, 0x00, // ~
	0x3f, 0x60, 0xcd, 0x95, 0xb1, 0xbd, 0x83, 0xfe, // ©
};