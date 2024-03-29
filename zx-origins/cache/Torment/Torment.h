// Torment font from https://damieng.com/zx-origins
static const uint8_t FONT_TORMENT_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x1c, 0x18, 0x18, 0x18, 0x10, 0x00, 0x18, 0x10, // !
	0x36, 0x24, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x6c, 0x6c, 0xfe, 0x6c, 0xfe, 0x6c, 0x48, 0x90, // #
	0x18, 0xfe, 0xd8, 0xfe, 0x36, 0xfe, 0x20, 0x40, // $
	0x22, 0x76, 0x2c, 0x18, 0x34, 0x6e, 0x44, 0x80, // %
	0x70, 0xd8, 0xc0, 0x7e, 0xc8, 0xdc, 0xee, 0x00, // &
	0x18, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x0c, 0x18, 0x30, 0x30, 0x30, 0x18, 0x0c, 0x00, // (
	0x30, 0x18, 0x0c, 0x0c, 0x0c, 0x18, 0x30, 0x00, // )
	0x00, 0x2c, 0x38, 0x7e, 0x1c, 0x34, 0x00, 0x00, // *
	0x00, 0x18, 0x18, 0x7e, 0x18, 0x10, 0x20, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x10, 0x20, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x10, // .
	0x00, 0x06, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0x00, // /
	0x3e, 0x66, 0x6e, 0x76, 0x66, 0x66, 0x7c, 0x00, // 0
	0x18, 0x38, 0x18, 0x18, 0x18, 0x18, 0x10, 0x20, // 1
	0x7e, 0x46, 0x06, 0x1c, 0x30, 0x60, 0x7e, 0x00, // 2
	0x7e, 0x46, 0x04, 0x1c, 0x06, 0x46, 0x7e, 0x00, // 3
	0x1c, 0x2c, 0x6c, 0xcc, 0xfe, 0x0c, 0x08, 0x10, // 4
	0x7e, 0x64, 0x60, 0x7e, 0x06, 0x46, 0x7c, 0x00, // 5
	0x04, 0x18, 0x30, 0x6c, 0x66, 0x66, 0x7c, 0x00, // 6
	0x7e, 0x46, 0x06, 0x0c, 0x0c, 0x18, 0x10, 0x20, // 7
	0x3e, 0x66, 0x66, 0x3c, 0x66, 0x66, 0x7c, 0x00, // 8
	0x7e, 0x66, 0x66, 0x36, 0x0c, 0x0c, 0x18, 0x20, // 9
	0x00, 0x00, 0x18, 0x10, 0x00, 0x00, 0x18, 0x10, // :
	0x00, 0x00, 0x18, 0x10, 0x00, 0x18, 0x10, 0x20, // ;
	0x04, 0x0c, 0x18, 0x30, 0x18, 0x0c, 0x04, 0x00, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, // =
	0x20, 0x30, 0x18, 0x0c, 0x18, 0x30, 0x20, 0x00, // >
	0x3f, 0x66, 0x04, 0x0c, 0x10, 0x00, 0x30, 0x20, // ?
	0x3e, 0x66, 0xde, 0xd6, 0xdc, 0xc0, 0xfc, 0x00, // @
	0x1e, 0x36, 0x66, 0x6e, 0x66, 0x66, 0x04, 0x08, // A
	0xfe, 0x66, 0x66, 0x6c, 0x66, 0x66, 0x6c, 0x10, // B
	0x7e, 0x64, 0x60, 0x60, 0x60, 0x66, 0x5e, 0x80, // C
	0xfc, 0x66, 0x66, 0x66, 0x66, 0x6c, 0x68, 0x10, // D
	0xfe, 0x62, 0x60, 0x78, 0x60, 0x62, 0x5e, 0x80, // E
	0xfe, 0x62, 0x60, 0x78, 0x60, 0x60, 0x40, 0x80, // F
	0x7e, 0x62, 0x60, 0x6e, 0x66, 0x6e, 0x34, 0x08, // G
	0x66, 0x66, 0x66, 0x7e, 0x66, 0x66, 0x64, 0x08, // H
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x10, 0x20, // I
	0x3e, 0x0c, 0x0c, 0x0c, 0x08, 0x18, 0x10, 0x20, // J
	0xe6, 0x66, 0x6c, 0x7c, 0x66, 0x66, 0x64, 0x08, // K
	0xe0, 0x60, 0x60, 0x60, 0x60, 0x62, 0x5e, 0x80, // L
	0xfe, 0xd6, 0xd6, 0xd6, 0xd6, 0xc6, 0xc4, 0x08, // M
	0xe6, 0x76, 0x7e, 0x6e, 0x66, 0x66, 0x64, 0x08, // N
	0x3e, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7c, 0x00, // O
	0xfe, 0x66, 0x66, 0x6c, 0x60, 0x60, 0x40, 0x80, // P
	0x7c, 0x66, 0x66, 0x66, 0x62, 0x6c, 0x36, 0x06, // Q
	0xfe, 0x66, 0x66, 0x6c, 0x6c, 0x66, 0x46, 0x80, // R
	0x7e, 0x62, 0x60, 0x3e, 0x06, 0x46, 0x7c, 0x00, // S
	0x7e, 0x5a, 0x18, 0x18, 0x18, 0x18, 0x10, 0x20, // T
	0xe2, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7c, 0x00, // U
	0xe6, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x00, // V
	0xce, 0xc6, 0xd6, 0xd6, 0xd6, 0xd6, 0xfc, 0x00, // W
	0xe6, 0x66, 0x66, 0x3c, 0x66, 0x66, 0x64, 0x08, // X
	0xe6, 0x66, 0x34, 0x3c, 0x18, 0x18, 0x10, 0x20, // Y
	0x7e, 0x46, 0x0c, 0x18, 0x30, 0x62, 0x7e, 0x00, // Z
	0x3c, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3c, // [
	0x00, 0xc0, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x00, // \
	0x3c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x3c, // ]
	0x18, 0x3c, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x3e, 0x32, 0x30, 0x78, 0x30, 0x32, 0x7e, 0x00, // £
	0x00, 0x00, 0x3e, 0x66, 0x66, 0x6e, 0x76, 0x00, // a
	0xe0, 0x60, 0x6e, 0x66, 0x66, 0x66, 0x7c, 0x40, // b
	0x00, 0x00, 0x3e, 0x64, 0x60, 0x62, 0x7e, 0x00, // c
	0x0e, 0x06, 0x76, 0x66, 0x66, 0x66, 0x7a, 0x00, // d
	0x00, 0x00, 0x3e, 0x66, 0x6c, 0x60, 0x7e, 0x00, // e
	0x0e, 0x1a, 0x30, 0x3c, 0x30, 0x30, 0x20, 0x40, // f
	0x00, 0x00, 0x7e, 0x66, 0x66, 0x36, 0x04, 0x38, // g
	0xe0, 0x60, 0x6e, 0x66, 0x66, 0x66, 0x64, 0x08, // h
	0x18, 0x00, 0x18, 0x18, 0x18, 0x18, 0x10, 0x20, // i
	0x18, 0x00, 0x38, 0x18, 0x18, 0x18, 0x10, 0x20, // j
	0xe0, 0x60, 0x66, 0x6c, 0x78, 0x6c, 0x46, 0x80, // k
	0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x10, // l
	0x00, 0x00, 0xfe, 0xd6, 0xd6, 0xd6, 0xc4, 0x08, // m
	0x00, 0x00, 0xee, 0x76, 0x66, 0x66, 0x64, 0x08, // n
	0x00, 0x00, 0x3e, 0x66, 0x66, 0x66, 0x7c, 0x00, // o
	0x00, 0x00, 0xfe, 0x66, 0x66, 0x6c, 0x60, 0x40, // p
	0x00, 0x00, 0xfe, 0xcc, 0xcc, 0x6c, 0x0c, 0x04, // q
	0x00, 0x00, 0xee, 0x76, 0x60, 0x60, 0x40, 0x80, // r
	0x00, 0x00, 0x7e, 0x62, 0x38, 0x8c, 0xfc, 0x00, // s
	0x18, 0x18, 0x7e, 0x18, 0x18, 0x18, 0x10, 0x20, // t
	0x00, 0x00, 0x4e, 0xcc, 0xcc, 0xdc, 0xec, 0x04, // u
	0x00, 0x00, 0x27, 0x66, 0x6c, 0x68, 0x70, 0x20, // v
	0x00, 0x00, 0x42, 0xd6, 0xd6, 0xd6, 0xfe, 0x48, // w
	0x00, 0x00, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0x81, // x
	0x00, 0x00, 0xce, 0xcc, 0x78, 0x30, 0x20, 0x40, // y
	0x00, 0x00, 0x7e, 0x4c, 0x18, 0x32, 0x7e, 0x04, // z
	0x1e, 0x18, 0x38, 0xe0, 0x38, 0x18, 0x18, 0x1e, // {
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x10, // |
	0xf0, 0x30, 0x38, 0x0e, 0x38, 0x30, 0x30, 0xf0, // }
	0x32, 0x7c, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x3c, 0x42, 0x99, 0xa1, 0xa1, 0x99, 0x42, 0x3c, // ©
};