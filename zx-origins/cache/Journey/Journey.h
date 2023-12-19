// Journey font from https://damieng.com/zx-origins
static const uint8_t FONT_JOURNEY_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x04, 0x0c, 0x0c, 0x18, 0x18, 0x00, 0x30, 0x00, // !
	0x36, 0x36, 0x24, 0x48, 0x00, 0x00, 0x00, 0x00, // "
	0x16, 0x16, 0x7f, 0x2c, 0xfe, 0x58, 0x58, 0x00, // #
	0x3c, 0x52, 0x70, 0x38, 0x1c, 0x94, 0x78, 0x00, // $
	0x62, 0xb4, 0x68, 0x10, 0x2c, 0x5a, 0x8c, 0x00, // %
	0x38, 0x6c, 0x28, 0x72, 0xdc, 0xcc, 0x76, 0x00, // &
	0x18, 0x18, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, // '
	0x0c, 0x18, 0x30, 0x30, 0x30, 0x18, 0x0c, 0x00, // (
	0x30, 0x18, 0x0c, 0x0c, 0x0c, 0x18, 0x30, 0x00, // )
	0x00, 0x24, 0x18, 0x7c, 0x30, 0x48, 0x00, 0x00, // *
	0x00, 0x18, 0x18, 0xfe, 0x30, 0x30, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x30, // ,
	0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, // .
	0x04, 0x0c, 0x0c, 0x18, 0x18, 0x30, 0x30, 0x00, // /
	0x3c, 0x66, 0x66, 0xc6, 0xcc, 0xcc, 0x78, 0x00, // 0
	0x04, 0x1c, 0x0c, 0x0c, 0x18, 0x18, 0x3c, 0x00, // 1
	0x3c, 0x66, 0x0c, 0x18, 0x30, 0x64, 0xf8, 0x00, // 2
	0x3c, 0x46, 0x0c, 0x18, 0x0c, 0x8c, 0x78, 0x00, // 3
	0x04, 0x1c, 0x3c, 0x6c, 0x7e, 0x18, 0x10, 0x00, // 4
	0x3e, 0x32, 0x70, 0x78, 0x0c, 0x8c, 0x78, 0x00, // 5
	0x0c, 0x18, 0x30, 0x7e, 0xc6, 0xcc, 0x78, 0x00, // 6
	0x7e, 0x06, 0x0c, 0x18, 0x30, 0x20, 0x40, 0x00, // 7
	0x3c, 0x66, 0x66, 0x38, 0xcc, 0xcc, 0x78, 0x00, // 8
	0x3c, 0x66, 0x66, 0x3e, 0x0c, 0x18, 0x60, 0x00, // 9
	0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x30, 0x00, // :
	0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x30, 0x10, // ;
	0x00, 0x04, 0x18, 0x70, 0x18, 0x04, 0x00, 0x00, // <
	0x00, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x00, 0x00, // =
	0x00, 0x20, 0x18, 0x0e, 0x18, 0x20, 0x00, 0x00, // >
	0x3c, 0x06, 0x0c, 0x18, 0x30, 0x00, 0x30, 0x00, // ?
	0x38, 0x64, 0xda, 0xee, 0xd4, 0x60, 0x38, 0x00, // @
	0x0e, 0x36, 0x66, 0x7e, 0xc6, 0xc6, 0xc6, 0x00, // A
	0x7c, 0x26, 0x66, 0x7c, 0x46, 0xc6, 0xfc, 0x00, // B
	0x1e, 0x30, 0x60, 0x60, 0x60, 0x32, 0x1c, 0x00, // C
	0x78, 0x6c, 0x66, 0xc6, 0xc6, 0xcc, 0xf8, 0x00, // D
	0x7c, 0x30, 0x30, 0x78, 0x60, 0x60, 0x7c, 0x00, // E
	0x7c, 0x30, 0x30, 0x7c, 0x60, 0x60, 0x60, 0x00, // F
	0x3c, 0x60, 0xc0, 0xce, 0xc6, 0xce, 0x78, 0x00, // G
	0xe6, 0x66, 0x66, 0xfc, 0xcc, 0xcc, 0xcc, 0x00, // H
	0x18, 0x18, 0x18, 0x30, 0x30, 0x30, 0x30, 0x00, // I
	0x0c, 0x0c, 0x0c, 0x18, 0x18, 0x18, 0x70, 0x00, // J
	0x66, 0x6c, 0x78, 0x70, 0xd8, 0xcc, 0xcc, 0x00, // K
	0xe0, 0x60, 0x60, 0xc0, 0xc0, 0xc0, 0xfc, 0x00, // L
	0x63, 0x77, 0x77, 0xfe, 0xb6, 0xb6, 0xb6, 0x00, // M
	0x62, 0x72, 0x7e, 0xde, 0xcc, 0x8c, 0x84, 0x00, // N
	0x3c, 0x66, 0xc6, 0xc6, 0xc6, 0xcc, 0x78, 0x00, // O
	0x7c, 0x66, 0x66, 0xfc, 0xc0, 0xc0, 0x80, 0x00, // P
	0x3c, 0x66, 0xc6, 0xc6, 0xd6, 0xcc, 0x7c, 0x06, // Q
	0x7c, 0x66, 0x66, 0xf8, 0xcc, 0xcc, 0x86, 0x00, // R
	0x3c, 0x62, 0x70, 0x38, 0x1c, 0x8c, 0x78, 0x00, // S
	0x7e, 0x18, 0x18, 0x30, 0x30, 0x30, 0x20, 0x00, // T
	0x22, 0x66, 0x66, 0xcc, 0xcc, 0xcc, 0x78, 0x00, // U
	0x44, 0xc6, 0x6c, 0x6c, 0x68, 0x30, 0x30, 0x00, // V
	0x41, 0x63, 0x63, 0xd6, 0xfe, 0xec, 0xcc, 0x00, // W
	0x62, 0x66, 0x3c, 0x38, 0x78, 0xcc, 0x8c, 0x00, // X
	0x66, 0x66, 0x24, 0x3c, 0x18, 0x30, 0x60, 0x00, // Y
	0x3e, 0x06, 0x0c, 0x18, 0x30, 0x60, 0xfc, 0x00, // Z
	0x38, 0x30, 0x30, 0x60, 0x60, 0x60, 0x78, 0x00, // [
	0x30, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x0c, 0x00, // \
	0x1c, 0x0c, 0x0c, 0x18, 0x18, 0x18, 0x38, 0x00, // ]
	0x10, 0x38, 0x68, 0x6c, 0xcc, 0x00, 0x00, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, // _
	0x0c, 0x1a, 0x18, 0x7c, 0x30, 0x32, 0x5c, 0x00, // £
	0x00, 0x00, 0x1e, 0x36, 0x66, 0x66, 0x3a, 0x00, // a
	0x10, 0x30, 0x3c, 0x36, 0x66, 0x66, 0x5c, 0x00, // b
	0x00, 0x00, 0x1c, 0x34, 0x60, 0x62, 0x3c, 0x00, // c
	0x02, 0x06, 0x36, 0x6c, 0xcc, 0xcc, 0x74, 0x00, // d
	0x00, 0x00, 0x1c, 0x36, 0x7c, 0x60, 0x3e, 0x00, // e
	0x1c, 0x32, 0x78, 0x30, 0x60, 0x60, 0x40, 0x00, // f
	0x00, 0x00, 0x3c, 0x66, 0x6c, 0x3c, 0x98, 0x70, // g
	0x30, 0x30, 0x3c, 0x36, 0x66, 0x6c, 0x6c, 0x00, // h
	0x0c, 0x00, 0x08, 0x18, 0x18, 0x30, 0x30, 0x00, // i
	0x0c, 0x00, 0x18, 0x18, 0x18, 0x30, 0x20, 0x40, // j
	0x10, 0x32, 0x34, 0x3c, 0x6c, 0x66, 0x66, 0x00, // k
	0x04, 0x0c, 0x0c, 0x18, 0x18, 0x18, 0x30, 0x00, // l
	0x00, 0x00, 0x56, 0x6b, 0x6b, 0xd6, 0xd6, 0x00, // m
	0x00, 0x00, 0x58, 0x6c, 0x6c, 0xd8, 0xd8, 0x00, // n
	0x00, 0x00, 0x1c, 0x36, 0x66, 0x6c, 0x38, 0x00, // o
	0x00, 0x00, 0x2c, 0x36, 0x36, 0x7c, 0x60, 0x60, // p
	0x00, 0x00, 0x1a, 0x36, 0x66, 0x3c, 0x08, 0x18, // q
	0x00, 0x00, 0x2c, 0x3a, 0x70, 0x60, 0x60, 0x00, // r
	0x00, 0x00, 0x1e, 0x30, 0x3c, 0x8c, 0x78, 0x00, // s
	0x08, 0x18, 0x7e, 0x18, 0x30, 0x34, 0x18, 0x00, // t
	0x00, 0x00, 0x36, 0x36, 0x66, 0x6c, 0x34, 0x00, // u
	0x00, 0x00, 0x62, 0x64, 0x6c, 0x78, 0x70, 0x00, // v
	0x00, 0x00, 0x66, 0x66, 0xd6, 0xfc, 0xec, 0x00, // w
	0x00, 0x00, 0x66, 0x6c, 0x38, 0x6c, 0xcc, 0x00, // x
	0x00, 0x00, 0x66, 0x66, 0x6c, 0x38, 0x30, 0xe0, // y
	0x00, 0x00, 0x3e, 0x0c, 0x18, 0x30, 0x7c, 0x00, // z
	0x0c, 0x18, 0x18, 0x60, 0x30, 0x30, 0x1c, 0x00, // {
	0x18, 0x18, 0x18, 0x18, 0x30, 0x30, 0x30, 0x00, // |
	0x30, 0x18, 0x18, 0x1c, 0x30, 0x30, 0x60, 0x00, // }
	0x00, 0x00, 0x32, 0x74, 0x98, 0x00, 0x00, 0x00, // ~
	0x38, 0x44, 0x9a, 0xa2, 0xb2, 0x44, 0x38, 0x00, // ©
};