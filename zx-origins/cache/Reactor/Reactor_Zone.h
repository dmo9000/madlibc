// Reactor Zone font from https://damieng.com/zx-origins
static const uint8_t FONT_REACTOR_ZONE_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x38, 0x18, 0x28, 0x30, 0x00, 0x38, 0x38, 0x00, // !
	0xee, 0xaa, 0x66, 0xcc, 0x00, 0x00, 0x00, 0x00, // "
	0x00, 0x24, 0xbe, 0x4c, 0x6c, 0xf6, 0x48, 0x00, // #
	0x00, 0x18, 0xfe, 0xc0, 0xfa, 0x06, 0xee, 0x18, // $
	0x00, 0xe6, 0xec, 0x18, 0x30, 0x6e, 0xce, 0x00, // %
	0xfe, 0x66, 0xa0, 0x56, 0xec, 0xec, 0xfe, 0x00, // &
	0x38, 0x28, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, // '
	0x1e, 0x38, 0x30, 0x50, 0x60, 0x30, 0x38, 0x1e, // (
	0x78, 0x1c, 0x0c, 0x0a, 0x06, 0x0c, 0x1c, 0x78, // )
	0x00, 0x18, 0x5e, 0x2c, 0x76, 0x18, 0x00, 0x00, // *
	0x00, 0x38, 0x18, 0xee, 0x30, 0x38, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x38, 0x28, 0x18, 0x30, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x10, 0x28, 0x38, 0x00, // .
	0x00, 0x05, 0x0a, 0x14, 0x38, 0x70, 0xe0, 0x00, // /
	0xfe, 0xcc, 0xda, 0xe6, 0xce, 0xce, 0xfe, 0x00, // 0
	0x38, 0x70, 0x28, 0x18, 0x38, 0x38, 0x7c, 0x00, // 1
	0xfe, 0xcc, 0x0a, 0xf6, 0xc0, 0xce, 0xfe, 0x00, // 2
	0xfe, 0x0c, 0x0a, 0x76, 0x0e, 0x0e, 0xfe, 0x00, // 3
	0xce, 0xcc, 0xca, 0xf6, 0x0e, 0x0e, 0x0e, 0x00, // 4
	0xfe, 0xce, 0xc0, 0xf6, 0x0a, 0xcc, 0xfe, 0x00, // 5
	0xfe, 0x60, 0xbe, 0xc6, 0xe6, 0xe6, 0xfe, 0x00, // 6
	0xfe, 0x0c, 0x0a, 0x06, 0x0e, 0x0e, 0x0e, 0x00, // 7
	0xfe, 0xcc, 0xca, 0x74, 0xce, 0xce, 0xfe, 0x00, // 8
	0xfe, 0xcc, 0xca, 0xf6, 0x0e, 0xce, 0xfe, 0x00, // 9
	0x10, 0x28, 0x38, 0x00, 0x10, 0x28, 0x38, 0x00, // :
	0x10, 0x28, 0x38, 0x00, 0x38, 0x28, 0x18, 0x30, // ;
	0x0a, 0x14, 0x28, 0x70, 0x38, 0x1c, 0x0e, 0x00, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x7e, 0x00, 0x00, // =
	0x50, 0x28, 0x14, 0x0e, 0x1c, 0x38, 0x70, 0x00, // >
	0xfe, 0xcc, 0x0a, 0x36, 0x00, 0x38, 0x38, 0x00, // ?
	0xfe, 0x66, 0xae, 0xd6, 0xee, 0xe0, 0xfe, 0x00, // @
	0xfe, 0xcc, 0xca, 0xf6, 0xce, 0xce, 0xce, 0x00, // A
	0xfe, 0x66, 0xa6, 0xdc, 0xe6, 0xe6, 0xfe, 0x00, // B
	0xfe, 0x66, 0xa6, 0xc0, 0xe6, 0xe6, 0xfe, 0x00, // C
	0xfe, 0x66, 0xa6, 0xc6, 0xe6, 0xec, 0xf8, 0x00, // D
	0xfe, 0x60, 0xa0, 0xdc, 0xe0, 0xe0, 0xfe, 0x00, // E
	0xfe, 0x60, 0xa0, 0xdc, 0xe0, 0xe0, 0xe0, 0x00, // F
	0xfe, 0x66, 0xa0, 0xce, 0xe6, 0xe6, 0xfe, 0x00, // G
	0xe6, 0x66, 0xa6, 0xde, 0xe6, 0xe6, 0xe6, 0x00, // H
	0x38, 0x18, 0x28, 0x30, 0x38, 0x38, 0x38, 0x00, // I
	0x0e, 0x0c, 0x0a, 0x06, 0xce, 0xce, 0xfe, 0x00, // J
	0xe6, 0x66, 0xac, 0xd8, 0xec, 0xe6, 0xe6, 0x00, // K
	0xe0, 0x60, 0xa0, 0xc0, 0xe0, 0xe0, 0xfe, 0x00, // L
	0xfe, 0xac, 0xaa, 0xa6, 0xae, 0xae, 0xae, 0x00, // M
	0xfe, 0xcc, 0xca, 0xc6, 0xce, 0xce, 0xce, 0x00, // N
	0xfe, 0xcc, 0xca, 0xc6, 0xce, 0xce, 0xfe, 0x00, // O
	0xfe, 0x66, 0xa6, 0xde, 0xe0, 0xe0, 0xe0, 0x00, // P
	0xfe, 0x66, 0xa6, 0xc6, 0xe6, 0xe6, 0xfc, 0x1e, // Q
	0xfe, 0x66, 0xa6, 0xdc, 0xe6, 0xe6, 0xe6, 0x00, // R
	0xfe, 0xc6, 0xc0, 0xf6, 0x0a, 0xcc, 0xfe, 0x00, // S
	0xfe, 0x18, 0x28, 0x30, 0x38, 0x38, 0x38, 0x00, // T
	0xce, 0xc6, 0xca, 0xcc, 0xce, 0xce, 0xfe, 0x00, // U
	0xe6, 0x66, 0xa6, 0xc6, 0xec, 0xf8, 0xf0, 0x00, // V
	0xae, 0xac, 0xaa, 0xa6, 0xae, 0xae, 0xfe, 0x00, // W
	0xce, 0xcc, 0xca, 0x74, 0xce, 0xce, 0xce, 0x00, // X
	0xce, 0xcc, 0xca, 0xf6, 0x0e, 0xce, 0xfe, 0x00, // Y
	0xfc, 0xca, 0x14, 0x38, 0x70, 0xe6, 0xfe, 0x00, // Z
	0x7e, 0x30, 0x50, 0x60, 0x70, 0x70, 0x70, 0x7e, // [
	0x00, 0xa0, 0x50, 0x28, 0x1c, 0x0e, 0x07, 0x00, // \
	0x7e, 0x06, 0x0a, 0x0c, 0x0e, 0x0e, 0x0e, 0x7e, // ]
	0x10, 0x38, 0x7c, 0xfe, 0x18, 0x28, 0x30, 0x38, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x7e, 0x66, 0x50, 0xbc, 0x70, 0x76, 0xfe, 0x00, // £
	0x00, 0x00, 0xfe, 0x0c, 0xfa, 0xc6, 0xfe, 0x00, // a
	0xe0, 0x60, 0xbe, 0xc6, 0xe6, 0xe6, 0xfe, 0x00, // b
	0x00, 0x00, 0xfe, 0xc6, 0xa0, 0x66, 0xfe, 0x00, // c
	0x0e, 0x0c, 0xfa, 0xc6, 0xce, 0xce, 0xfe, 0x00, // d
	0x00, 0x00, 0xfe, 0x66, 0xbe, 0xc0, 0xfe, 0x00, // e
	0x7e, 0x36, 0x50, 0x6c, 0x70, 0x70, 0x70, 0x00, // f
	0x00, 0x00, 0xfe, 0xcc, 0xca, 0xf6, 0x0e, 0xfe, // g
	0xe0, 0x60, 0xbe, 0xc6, 0xe6, 0xe6, 0xe6, 0x00, // h
	0x38, 0x30, 0x08, 0x18, 0x38, 0x38, 0x38, 0x00, // i
	0x0e, 0x0e, 0x00, 0x0e, 0x0c, 0x0a, 0xc6, 0xfe, // j
	0xe0, 0x60, 0xa6, 0xc6, 0xfc, 0xe6, 0xe6, 0x00, // k
	0x3c, 0x0c, 0x14, 0x18, 0x1c, 0x1c, 0x1c, 0x00, // l
	0x00, 0x00, 0xfe, 0xac, 0xaa, 0xa6, 0xae, 0x00, // m
	0x00, 0x00, 0xfe, 0xcc, 0xca, 0xc6, 0xce, 0x00, // n
	0x00, 0x00, 0xfe, 0xcc, 0xca, 0xc6, 0xfe, 0x00, // o
	0x00, 0x00, 0xfe, 0x66, 0xa6, 0xde, 0xe0, 0xe0, // p
	0x00, 0x00, 0xfe, 0xcc, 0xca, 0xf6, 0x0e, 0x0e, // q
	0x00, 0x00, 0xfe, 0x66, 0xa0, 0xc0, 0xe0, 0x00, // r
	0x00, 0x00, 0xfe, 0xc0, 0xfe, 0x0e, 0xfe, 0x00, // s
	0xe0, 0x60, 0xbc, 0xc0, 0xe0, 0xe6, 0xfe, 0x00, // t
	0x00, 0x00, 0xce, 0xcc, 0xca, 0xc6, 0xfe, 0x00, // u
	0x00, 0x00, 0xe6, 0x66, 0xac, 0xd8, 0xf0, 0x00, // v
	0x00, 0x00, 0xae, 0xac, 0xaa, 0xa6, 0xfe, 0x00, // w
	0x00, 0x00, 0xce, 0xce, 0x7c, 0xce, 0xce, 0x00, // x
	0x00, 0x00, 0xce, 0xcc, 0xca, 0xf6, 0x0e, 0xfe, // y
	0x00, 0x00, 0xfe, 0x06, 0xfe, 0xe0, 0xfe, 0x00, // z
	0x3e, 0x18, 0x28, 0xf0, 0x38, 0x38, 0x3e, 0x00, // {
	0x38, 0x18, 0x28, 0x30, 0x38, 0x38, 0x38, 0x00, // |
	0xf8, 0x18, 0x28, 0x16, 0x38, 0x38, 0xf8, 0x00, // }
	0x70, 0xba, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x3c, 0x42, 0xbd, 0xb1, 0xb1, 0xbd, 0x42, 0x3c, // ©
};