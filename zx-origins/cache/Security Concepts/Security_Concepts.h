// Security Concepts font from https://damieng.com/zx-origins
static const uint8_t FONT_SECURITY_CONCEPTS_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, // !
	0x6c, 0x6c, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x24, 0x7e, 0x7e, 0x24, 0x7e, 0x7e, 0x24, 0x00, // #
	0x7e, 0xfc, 0xd0, 0xfe, 0x16, 0xfe, 0xfc, 0x00, // $
	0x66, 0x66, 0x0c, 0x18, 0x30, 0x66, 0x66, 0x00, // %
	0x78, 0xf8, 0xcc, 0x7e, 0xcc, 0xfe, 0x7e, 0x00, // &
	0x30, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x1c, 0x3c, 0x70, 0x70, 0x70, 0x3c, 0x1c, 0x00, // (
	0x38, 0x3c, 0x0e, 0x0e, 0x0e, 0x3c, 0x38, 0x00, // )
	0x00, 0x66, 0x18, 0x7e, 0x18, 0x66, 0x00, 0x00, // *
	0x00, 0x38, 0x38, 0xfe, 0x38, 0x38, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x10, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, // .
	0x03, 0x07, 0x0e, 0x1c, 0x38, 0x70, 0xe0, 0xc0, // /
	0x7c, 0xfe, 0xce, 0xd6, 0xe6, 0xfe, 0x7c, 0x00, // 0
	0x78, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // 1
	0xfc, 0xfe, 0x06, 0x7c, 0xc0, 0xfe, 0xfe, 0x00, // 2
	0xfc, 0x7e, 0x06, 0x7c, 0x06, 0x7e, 0xfc, 0x00, // 3
	0xc6, 0xc6, 0xc6, 0xfe, 0x7e, 0x06, 0x06, 0x00, // 4
	0xfe, 0xfc, 0xc0, 0xfc, 0x06, 0xfe, 0xfc, 0x00, // 5
	0x7e, 0xfc, 0xc0, 0xfc, 0xc6, 0xfe, 0x7c, 0x00, // 6
	0xfc, 0xfe, 0x06, 0x0c, 0x18, 0x30, 0x30, 0x00, // 7
	0x7c, 0xfe, 0xc6, 0x7c, 0xc6, 0xfe, 0x7c, 0x00, // 8
	0x7c, 0xfe, 0xc6, 0x7e, 0x06, 0x7e, 0xfc, 0x00, // 9
	0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x00, // :
	0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x10, // ;
	0x0c, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0c, 0x00, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, // =
	0x60, 0x30, 0x18, 0x0c, 0x18, 0x30, 0x60, 0x00, // >
	0xfe, 0x7e, 0x06, 0x0c, 0x18, 0x00, 0x18, 0x18, // ?
	0xf8, 0xcc, 0xde, 0xd6, 0xd8, 0x62, 0x3e, 0x00, // @
	0x7c, 0xfe, 0xc6, 0xfe, 0xde, 0xc6, 0xc6, 0x00, // A
	0xf8, 0xfc, 0xd8, 0xf8, 0xcc, 0xfe, 0xfc, 0x00, // B
	0x7e, 0xfc, 0xc0, 0xc0, 0xc0, 0xfe, 0x7e, 0x00, // C
	0xfc, 0xfe, 0xc6, 0xc6, 0xc6, 0xfe, 0xfc, 0x00, // D
	0xfe, 0xfc, 0xc0, 0xf8, 0xc0, 0xfe, 0xfe, 0x00, // E
	0xfe, 0xfc, 0xc0, 0xf8, 0xc0, 0xc0, 0xc0, 0x00, // F
	0x7e, 0xfc, 0xc0, 0xce, 0xc6, 0xfe, 0x7e, 0x00, // G
	0xc6, 0xc6, 0xfe, 0xde, 0xc6, 0xc6, 0xc6, 0x00, // H
	0x7e, 0x7c, 0x18, 0x18, 0x18, 0x7e, 0x7e, 0x00, // I
	0x3e, 0x1e, 0x06, 0x06, 0xc6, 0xfe, 0x7c, 0x00, // J
	0xcc, 0xcc, 0xd8, 0xf0, 0xfc, 0xc6, 0xc6, 0x00, // K
	0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xfe, 0x00, // L
	0xd8, 0xfc, 0xfe, 0xd6, 0xd6, 0xd6, 0xd6, 0x00, // M
	0x46, 0xe6, 0xf6, 0xfe, 0xde, 0xce, 0xc4, 0x00, // N
	0x7c, 0xfe, 0xc6, 0xc6, 0xc6, 0xfe, 0x7c, 0x00, // O
	0xfc, 0xfe, 0xcc, 0xd8, 0xf0, 0xc0, 0xc0, 0x00, // P
	0x7c, 0xfe, 0xc6, 0xc6, 0xcc, 0xfe, 0x76, 0x00, // Q
	0xfc, 0xfe, 0xcc, 0xd8, 0xfc, 0xc6, 0xc6, 0x00, // R
	0x7e, 0xfc, 0xc0, 0xfe, 0x06, 0xfe, 0xfc, 0x00, // S
	0x7e, 0x7c, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // T
	0xc6, 0xc6, 0xc6, 0xc6, 0xee, 0x7c, 0x38, 0x00, // U
	0xc6, 0xc6, 0xc6, 0xcc, 0xd8, 0xf0, 0xe0, 0x00, // V
	0xd6, 0xd6, 0xd6, 0xd6, 0xfc, 0xf8, 0xd0, 0x00, // W
	0xc6, 0xc6, 0x7c, 0x38, 0x6c, 0xc6, 0xc6, 0x00, // X
	0xc3, 0xc3, 0x66, 0x3c, 0x18, 0x18, 0x18, 0x00, // Y
	0xfc, 0x7e, 0x0c, 0x38, 0x60, 0xfe, 0x7e, 0x00, // Z
	0x1e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1e, 0x00, // [
	0xc0, 0xe0, 0x70, 0x38, 0x1c, 0x0e, 0x07, 0x03, // \
	0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x78, 0x00, // ]
	0x18, 0x3c, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, // _
	0x3e, 0x36, 0x30, 0x78, 0x30, 0x30, 0x7e, 0x00, // £
	0x00, 0x00, 0x7c, 0xc6, 0xde, 0xc6, 0xc6, 0x00, // a
	0x00, 0x00, 0xf8, 0xcc, 0xfc, 0xc6, 0xfc, 0x00, // b
	0x00, 0x00, 0x7c, 0xc6, 0xc0, 0xc6, 0x7c, 0x00, // c
	0x00, 0x00, 0xfc, 0x06, 0xc6, 0xc6, 0xfc, 0x00, // d
	0x00, 0x00, 0xfe, 0xc0, 0xfc, 0xc0, 0xfe, 0x00, // e
	0x00, 0x00, 0xfe, 0xc0, 0xfc, 0xc0, 0xc0, 0x00, // f
	0x00, 0x00, 0x7e, 0xc0, 0xce, 0xc6, 0x7e, 0x00, // g
	0x00, 0x00, 0xc6, 0xc6, 0xfe, 0xc6, 0xc6, 0x00, // h
	0x00, 0x00, 0x7e, 0x18, 0x18, 0x18, 0x7e, 0x00, // i
	0x00, 0x00, 0x0e, 0x06, 0x06, 0xc6, 0x7c, 0x00, // j
	0x00, 0x00, 0xcc, 0xd8, 0xfc, 0xc6, 0xc6, 0x00, // k
	0x00, 0x00, 0x60, 0x60, 0x60, 0x60, 0x7e, 0x00, // l
	0x00, 0x00, 0xd8, 0xfc, 0xd6, 0xd6, 0xd6, 0x00, // m
	0x00, 0x00, 0x46, 0xe6, 0xf6, 0xde, 0xcc, 0x00, // n
	0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0x7c, 0x00, // o
	0x00, 0x00, 0xfc, 0xc6, 0xdc, 0xc0, 0xc0, 0x00, // p
	0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xcc, 0x76, 0x00, // q
	0x00, 0x00, 0xfc, 0xc6, 0xdc, 0xc6, 0xc6, 0x00, // r
	0x00, 0x00, 0x7e, 0xc0, 0xfe, 0x06, 0xfc, 0x00, // s
	0x00, 0x00, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x00, // t
	0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0x7c, 0x00, // u
	0x00, 0x00, 0xc6, 0xc6, 0xcc, 0xd8, 0xf0, 0x00, // v
	0x00, 0x00, 0xd6, 0xd6, 0xfc, 0xf8, 0xd0, 0x00, // w
	0x00, 0x00, 0xc6, 0x6c, 0x38, 0x6c, 0xc6, 0x00, // x
	0x00, 0x00, 0xc3, 0x66, 0x3c, 0x18, 0x18, 0x00, // y
	0x00, 0x00, 0xfc, 0x0e, 0x38, 0xe0, 0x7e, 0x00, // z
	0x1e, 0x18, 0x18, 0x70, 0x18, 0x18, 0x1e, 0x00, // {
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // |
	0x78, 0x18, 0x18, 0x0e, 0x18, 0x18, 0x78, 0x00, // }
	0x00, 0x76, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x7f, 0xc1, 0x99, 0x9f, 0x9f, 0x99, 0x83, 0xfe, // ©
};