// Dean font from https://damieng.com/zx-origins
static const uint8_t FONT_DEAN_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x06, 0x1c, 0x18, 0x18, 0x30, 0x00, 0xf0, 0x00, // !
	0x24, 0x6c, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x00, 0x63, 0xff, 0x66, 0xff, 0xc6, 0x00, 0x00, // #
	0x04, 0x0e, 0x3f, 0x31, 0x3c, 0xc6, 0xff, 0x30, // $
	0x00, 0x72, 0x76, 0x0c, 0x30, 0x6e, 0x4e, 0x00, // %
	0x1e, 0x33, 0x70, 0x3f, 0x66, 0xc7, 0xfe, 0x00, // &
	0x10, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x0c, 0x18, 0x38, 0x10, 0x30, 0x18, 0x0c, 0x00, // (
	0x30, 0x18, 0x08, 0x0c, 0x0c, 0x18, 0x38, 0x00, // )
	0x10, 0x0c, 0x76, 0x3c, 0x6e, 0x30, 0x08, 0x00, // *
	0x00, 0x18, 0x18, 0xfe, 0x30, 0x30, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x18, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, // .
	0x01, 0x03, 0x06, 0x0c, 0x08, 0x30, 0x60, 0x00, // /
	0x0c, 0x3e, 0x32, 0x6b, 0xdb, 0xc3, 0xfe, 0x00, // 0
	0x06, 0x3c, 0x18, 0x18, 0x30, 0x60, 0xf0, 0x00, // 1
	0x3e, 0x67, 0x0e, 0x3c, 0x60, 0xe6, 0xfe, 0x00, // 2
	0x1f, 0x33, 0x06, 0x3c, 0x06, 0xc7, 0xfe, 0x00, // 3
	0x19, 0x3b, 0x66, 0x7e, 0x0c, 0x18, 0x3c, 0x00, // 4
	0x0f, 0x3b, 0x30, 0x7c, 0x06, 0xc7, 0xfe, 0x00, // 5
	0x0e, 0x1e, 0x70, 0x78, 0x6c, 0xc6, 0xfe, 0x00, // 6
	0x7e, 0x66, 0x0c, 0x3c, 0x18, 0x30, 0x20, 0x00, // 7
	0x1e, 0x33, 0x76, 0x3c, 0x66, 0xc7, 0xfe, 0x00, // 8
	0x7e, 0xc6, 0x6c, 0x2c, 0x18, 0x70, 0xe0, 0x00, // 9
	0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00, // :
	0x00, 0x00, 0x18, 0x18, 0x00, 0x08, 0x18, 0x18, // ;
	0x00, 0x0c, 0x18, 0x30, 0x30, 0x18, 0x0c, 0x00, // <
	0x00, 0x00, 0x7c, 0x00, 0x7c, 0x00, 0x00, 0x00, // =
	0x00, 0x30, 0x18, 0x0c, 0x0c, 0x18, 0x30, 0x00, // >
	0x7e, 0xc6, 0x0c, 0x18, 0x00, 0x60, 0x60, 0x00, // ?
	0x1e, 0x33, 0x6d, 0xd5, 0xef, 0xba, 0xc0, 0x7e, // @
	0x70, 0xfc, 0x8c, 0x66, 0x7b, 0xcf, 0x83, 0x00, // A
	0x7c, 0xbe, 0x03, 0x3e, 0x63, 0xc3, 0xfe, 0x00, // B
	0x0e, 0x3f, 0x31, 0x60, 0xc0, 0xc2, 0xff, 0x00, // C
	0x70, 0xfc, 0x8c, 0x66, 0x63, 0xc3, 0xff, 0x00, // D
	0x0e, 0x3f, 0x31, 0x7c, 0xc0, 0xc3, 0xfe, 0x00, // E
	0x0e, 0x3f, 0x31, 0x7c, 0xc0, 0xc0, 0xe0, 0x00, // F
	0x0e, 0x3f, 0x31, 0x60, 0xc6, 0xc3, 0xff, 0x00, // G
	0x32, 0x23, 0x63, 0x7f, 0xc3, 0xc6, 0xc6, 0x00, // H
	0x03, 0x0e, 0x0c, 0x18, 0x18, 0x30, 0x38, 0x00, // I
	0x70, 0xfc, 0x8c, 0x06, 0x03, 0x43, 0xff, 0x00, // J
	0x31, 0x23, 0x66, 0x7e, 0xcc, 0xc6, 0xc7, 0x00, // K
	0x08, 0x38, 0x30, 0x60, 0xc0, 0xc2, 0xff, 0x00, // L
	0x36, 0x3f, 0x6b, 0x6b, 0xd3, 0xc6, 0xce, 0x00, // M
	0x32, 0x33, 0x7b, 0x6b, 0xcf, 0xc6, 0xc6, 0x00, // N
	0x0c, 0x3e, 0x36, 0x63, 0xc3, 0xc3, 0xfe, 0x00, // O
	0x7c, 0xee, 0x23, 0x7e, 0x60, 0xc0, 0xe0, 0x00, // P
	0x0c, 0x3e, 0x36, 0x63, 0xcb, 0xcf, 0xf6, 0x03, // Q
	0x7c, 0xee, 0x23, 0x7e, 0x6c, 0xc6, 0xe7, 0x00, // R
	0x0e, 0x3f, 0x31, 0x7c, 0x06, 0xc7, 0xfe, 0x00, // S
	0x7f, 0xba, 0x18, 0x30, 0x30, 0x60, 0x70, 0x00, // T
	0x36, 0x33, 0x63, 0x63, 0xc3, 0xe6, 0x7c, 0x00, // U
	0x66, 0x63, 0xc6, 0xc6, 0xcc, 0xd8, 0xf0, 0x00, // V
	0x23, 0x63, 0x6b, 0xd6, 0xd6, 0xfc, 0xec, 0x00, // W
	0x63, 0x36, 0x3c, 0x18, 0x3c, 0x66, 0xc6, 0x00, // X
	0x63, 0x63, 0x36, 0x3c, 0x18, 0x30, 0x60, 0x00, // Y
	0x3f, 0x63, 0x06, 0x1c, 0x30, 0x63, 0xfe, 0x00, // Z
	0x3c, 0x30, 0x10, 0x30, 0x30, 0x60, 0x7c, 0x00, // [
	0x80, 0xc0, 0x50, 0x30, 0x18, 0x0c, 0x06, 0x00, // \
	0x3c, 0x0c, 0x04, 0x0c, 0x04, 0x06, 0x3e, 0x00, // ]
	0x18, 0x3c, 0x6c, 0x44, 0x00, 0x00, 0x00, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x0e, 0x3f, 0x32, 0xf8, 0x60, 0xa6, 0xfc, 0x00, // £
	0x00, 0x38, 0x6c, 0x06, 0xfa, 0x6f, 0xc3, 0x00, // a
	0x00, 0x7e, 0x36, 0x33, 0x7e, 0x63, 0xfe, 0x00, // b
	0x00, 0x1e, 0x36, 0x60, 0xc0, 0xc2, 0xfe, 0x00, // c
	0x00, 0x70, 0xdc, 0x8c, 0x66, 0x66, 0xfe, 0x00, // d
	0x00, 0x0e, 0x3b, 0x30, 0x7c, 0xc0, 0xfe, 0x00, // e
	0x00, 0x0e, 0x3b, 0x30, 0x7c, 0xc0, 0xe0, 0x00, // f
	0x00, 0x1e, 0x36, 0x60, 0xcc, 0xc6, 0xfe, 0x00, // g
	0x00, 0x23, 0x63, 0x6f, 0xf6, 0xc6, 0xc6, 0x00, // h
	0x03, 0x04, 0x1c, 0x18, 0x30, 0x30, 0x38, 0x00, // i
	0x00, 0x78, 0xdc, 0x0c, 0x06, 0x43, 0xff, 0x00, // j
	0x00, 0x33, 0x66, 0x7c, 0xec, 0xc6, 0xce, 0x00, // k
	0x00, 0x08, 0x38, 0x30, 0x60, 0xc4, 0xfe, 0x00, // l
	0x00, 0x37, 0x3f, 0x6b, 0x6b, 0xc6, 0xc6, 0x00, // m
	0x00, 0x6c, 0x66, 0x76, 0xd6, 0xde, 0xcc, 0x00, // n
	0x00, 0x0c, 0x3e, 0x36, 0x66, 0xc6, 0xfc, 0x00, // o
	0x00, 0x7c, 0xee, 0x26, 0x7c, 0x60, 0xc0, 0x00, // p
	0x00, 0x3c, 0x66, 0xc6, 0xd6, 0xde, 0xec, 0x06, // q
	0x00, 0x7c, 0xe6, 0x2c, 0x78, 0x6d, 0xe6, 0x00, // r
	0x00, 0x1c, 0x76, 0x62, 0x38, 0xcc, 0xfe, 0x00, // s
	0x00, 0x7f, 0x9a, 0x18, 0x30, 0x30, 0x70, 0x00, // t
	0x00, 0x2c, 0x66, 0x66, 0xc6, 0xec, 0x78, 0x00, // u
	0x00, 0x66, 0xcc, 0xcc, 0xd8, 0xd8, 0xf0, 0x00, // v
	0x00, 0x63, 0xc3, 0xd6, 0xd6, 0xfc, 0xec, 0x00, // w
	0x00, 0x66, 0x3c, 0x18, 0x38, 0x6c, 0xc6, 0x00, // x
	0x00, 0xce, 0xc6, 0x6c, 0x78, 0x30, 0x60, 0xc0, // y
	0x00, 0x3e, 0x66, 0x0c, 0x30, 0x62, 0xfc, 0x00, // z
	0x1e, 0x1c, 0x18, 0x70, 0x18, 0x08, 0x18, 0x1e, // {
	0x30, 0x10, 0x30, 0x18, 0x18, 0x10, 0x38, 0x00, // |
	0x78, 0x30, 0x18, 0x0e, 0x18, 0x18, 0x18, 0x70, // }
	0x00, 0x3a, 0x76, 0x5c, 0x00, 0x00, 0x00, 0x00, // ~
	0x1e, 0x33, 0x6d, 0xd5, 0xb1, 0xbd, 0xc3, 0x7e, // ©
};