// Precinct 90 font from https://damieng.com/zx-origins
static const uint8_t FONT_PRECINCT_90_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, 0x3c, 0x00, // !
	0xee, 0xee, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x6c, 0xfe, 0xfe, 0x6c, 0xfe, 0xfe, 0x6c, 0x00, // #
	0x38, 0xfe, 0xf0, 0xfe, 0x1e, 0xfe, 0x38, 0x00, // $
	0x66, 0xee, 0xdc, 0x38, 0x76, 0xee, 0xcc, 0x00, // %
	0x3e, 0x70, 0xf6, 0x7e, 0xf6, 0xf6, 0xfe, 0x00, // &
	0x38, 0x38, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x1c, 0x38, 0x78, 0x78, 0x78, 0x78, 0x7c, 0x00, // (
	0x70, 0x38, 0x3c, 0x3c, 0x3c, 0x3c, 0x7c, 0x00, // )
	0x00, 0x6c, 0x7c, 0xfe, 0x7c, 0x6c, 0x00, 0x00, // *
	0x00, 0x38, 0x38, 0xfe, 0x38, 0x38, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x08, // ,
	0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x00, // .
	0x07, 0x0f, 0x1e, 0x3c, 0x78, 0xf0, 0xe0, 0x00, // /
	0x3e, 0x76, 0xf6, 0xf6, 0xf6, 0xf6, 0xfe, 0x00, // 0
	0x7c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x7e, 0x00, // 1
	0xf8, 0xf4, 0x06, 0xfe, 0xf0, 0xf0, 0xfe, 0x00, // 2
	0xf8, 0xdc, 0x1e, 0x3c, 0x1e, 0xde, 0xfe, 0x00, // 3
	0x3e, 0x5e, 0xde, 0xde, 0xfe, 0x1e, 0x1e, 0x00, // 4
	0xfe, 0xc0, 0xfe, 0x1e, 0x1e, 0xdc, 0xf8, 0x00, // 5
	0x3e, 0x76, 0xf0, 0xfe, 0xf6, 0xf6, 0xfe, 0x00, // 6
	0xf8, 0xdc, 0x1e, 0x3e, 0x1e, 0x1e, 0x1e, 0x00, // 7
	0x3e, 0x76, 0xf6, 0x7c, 0xf6, 0xf4, 0xf8, 0x00, // 8
	0xfe, 0xde, 0xde, 0xfe, 0x1e, 0xdc, 0xf8, 0x00, // 9
	0x00, 0x00, 0x38, 0x38, 0x00, 0x38, 0x38, 0x00, // :
	0x00, 0x00, 0x38, 0x38, 0x00, 0x38, 0x38, 0x08, // ;
	0x00, 0x1e, 0x3c, 0x78, 0x78, 0x3c, 0x1e, 0x00, // <
	0x00, 0x00, 0xfe, 0x00, 0xfe, 0x00, 0x00, 0x00, // =
	0x00, 0x78, 0x3c, 0x1e, 0x1e, 0x3c, 0x78, 0x00, // >
	0xf8, 0xdc, 0x1e, 0x3e, 0x3c, 0x00, 0x3c, 0x00, // ?
	0xf8, 0xf4, 0xfe, 0xf6, 0xfe, 0xf0, 0xfe, 0x00, // @
	0xf8, 0xf4, 0xf6, 0xf6, 0xfe, 0xf6, 0xf6, 0x00, // A
	0xf8, 0xf4, 0xf6, 0xfc, 0xf6, 0xf6, 0xfe, 0x00, // B
	0x3e, 0x76, 0xf0, 0xf0, 0xf0, 0xf6, 0xfe, 0x00, // C
	0xf8, 0xf4, 0xf6, 0xf6, 0xf6, 0xf6, 0xfe, 0x00, // D
	0x3e, 0x70, 0xf0, 0xfc, 0xf0, 0xf0, 0xfe, 0x00, // E
	0x3e, 0x70, 0xf0, 0xfc, 0xf0, 0xf0, 0xf0, 0x00, // F
	0x3e, 0x76, 0xf0, 0xf6, 0xf6, 0xf6, 0xfe, 0x00, // G
	0xf6, 0xf6, 0xf6, 0xfe, 0xf6, 0xf6, 0xf6, 0x00, // H
	0x7e, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x7e, 0x00, // I
	0x1e, 0x1e, 0x1e, 0x1e, 0xde, 0xdc, 0xf8, 0x00, // J
	0xf6, 0xf6, 0xf4, 0xf8, 0xf4, 0xf6, 0xf6, 0x00, // K
	0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x70, 0x3e, 0x00, // L
	0xfc, 0xfe, 0xeb, 0xeb, 0xe3, 0xe3, 0xe3, 0x00, // M
	0xf8, 0xf4, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0x00, // N
	0x3e, 0x76, 0xf6, 0xf6, 0xf6, 0xf6, 0xfe, 0x00, // O
	0xf8, 0xf4, 0xf6, 0xf6, 0xfe, 0xf0, 0xf0, 0x00, // P
	0x3e, 0x76, 0xf6, 0xf6, 0xf6, 0xfc, 0xf6, 0x06, // Q
	0xf8, 0xf4, 0xf6, 0xfc, 0xf6, 0xf6, 0xf6, 0x00, // R
	0x3e, 0x76, 0xf0, 0xfe, 0x06, 0xf6, 0xfe, 0x00, // S
	0x7e, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, // T
	0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0x76, 0x3e, 0x00, // U
	0xf6, 0xf6, 0xf6, 0xf6, 0xf4, 0xf8, 0xf0, 0x00, // V
	0xe3, 0xe3, 0xe3, 0xeb, 0xeb, 0xfe, 0xfc, 0x00, // W
	0xf6, 0xf6, 0x74, 0x38, 0x74, 0xf6, 0xf6, 0x00, // X
	0xf6, 0xf6, 0xf6, 0x7c, 0x38, 0x38, 0x38, 0x00, // Y
	0xfe, 0xde, 0x3c, 0x78, 0xf0, 0xe6, 0xfe, 0x00, // Z
	0x7e, 0x78, 0x78, 0x78, 0x78, 0x78, 0x7e, 0x00, // [
	0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0x0f, 0x07, 0x00, // \
	0x7e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x7e, 0x00, // ]
	0x00, 0x38, 0x38, 0xfe, 0xfe, 0x38, 0x38, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x1e, 0x3a, 0x78, 0xfc, 0x78, 0x78, 0xfe, 0x00, // £
	0x00, 0x00, 0xf8, 0x1c, 0xfe, 0xde, 0xfe, 0x00, // a
	0xf0, 0xf0, 0xf8, 0xf4, 0xf6, 0xf6, 0xfe, 0x00, // b
	0x00, 0x00, 0x3e, 0x76, 0xf0, 0xf6, 0xfe, 0x00, // c
	0x1e, 0x1e, 0x3e, 0x5e, 0xde, 0xde, 0xfe, 0x00, // d
	0x00, 0x00, 0x3e, 0x76, 0xfe, 0xf0, 0xfe, 0x00, // e
	0x00, 0x1e, 0x38, 0x78, 0xfc, 0x78, 0x78, 0x78, // f
	0x00, 0x00, 0x3e, 0x5e, 0xde, 0xfe, 0x1e, 0xfe, // g
	0xf0, 0xf0, 0xf8, 0xf4, 0xf6, 0xf6, 0xf6, 0x00, // h
	0x3c, 0x00, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, // i
	0x1e, 0x00, 0x1e, 0x1e, 0x1e, 0xdc, 0xf8, 0x00, // j
	0xf0, 0xf0, 0xf6, 0xfc, 0xf8, 0xfc, 0xf6, 0x00, // k
	0x7c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, // l
	0x00, 0x00, 0x3f, 0x6b, 0xeb, 0xeb, 0xe3, 0x00, // m
	0x00, 0x00, 0xf8, 0xf4, 0xf6, 0xf6, 0xf6, 0x00, // n
	0x00, 0x00, 0x3e, 0x76, 0xf6, 0xf6, 0xfe, 0x00, // o
	0x00, 0x00, 0xf8, 0xf4, 0xf6, 0xfe, 0xf0, 0xf0, // p
	0x00, 0x00, 0x3e, 0x5e, 0xde, 0xfe, 0x1e, 0x1e, // q
	0x00, 0x00, 0x3e, 0x76, 0xf0, 0xf0, 0xf0, 0x00, // r
	0x00, 0x00, 0x3e, 0x70, 0xfe, 0x1e, 0xfe, 0x00, // s
	0x78, 0x78, 0xfe, 0x78, 0x78, 0x38, 0x1e, 0x00, // t
	0x00, 0x00, 0xde, 0xde, 0xde, 0xdc, 0xf8, 0x00, // u
	0x00, 0x00, 0xf6, 0xf6, 0xf4, 0xf8, 0xf0, 0x00, // v
	0x00, 0x00, 0xe3, 0xeb, 0xeb, 0xea, 0xfc, 0x00, // w
	0x00, 0x00, 0xf6, 0x7c, 0x38, 0x7c, 0xf6, 0x00, // x
	0x00, 0x00, 0xde, 0xde, 0xde, 0xfe, 0x1c, 0xf8, // y
	0x00, 0x00, 0xfe, 0xbc, 0x78, 0xf2, 0xfe, 0x00, // z
	0x0e, 0x18, 0x38, 0xf0, 0x38, 0x38, 0x3e, 0x00, // {
	0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, // |
	0xe0, 0x30, 0x38, 0x1e, 0x38, 0x38, 0xf8, 0x00, // }
	0x00, 0x00, 0x76, 0x6e, 0x00, 0x00, 0x00, 0x00, // ~
	0x3c, 0x42, 0x8d, 0x99, 0xb9, 0xbd, 0x42, 0x3c, // ©
};