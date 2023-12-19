// Reactor Leak font from https://damieng.com/zx-origins
static const uint8_t FONT_REACTOR_LEAK_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x28, 0x18, 0x28, 0x18, 0x00, 0x18, 0x28, 0x10, // !
	0x66, 0xaa, 0x44, 0x88, 0x00, 0x00, 0x00, 0x00, // "
	0x00, 0x54, 0xee, 0x54, 0x64, 0xde, 0x64, 0x00, // #
	0x00, 0x18, 0xfa, 0xc0, 0xfa, 0x0c, 0xfa, 0x10, // $
	0x44, 0xaa, 0xd4, 0x28, 0x54, 0xaa, 0x46, 0x00, // %
	0xbe, 0x66, 0xa0, 0x76, 0xac, 0x6c, 0xbe, 0x00, // &
	0x10, 0x28, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, // '
	0x16, 0x28, 0x20, 0x50, 0x60, 0x10, 0x28, 0x16, // (
	0x68, 0x14, 0x04, 0x0a, 0x06, 0x08, 0x14, 0x68, // )
	0x00, 0x18, 0x56, 0x28, 0x56, 0x18, 0x00, 0x00, // *
	0x00, 0x28, 0x30, 0xec, 0x30, 0x28, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x18, 0x28, 0x10, 0x20, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x10, 0x28, 0x18, 0x00, // .
	0x04, 0x0a, 0x14, 0x28, 0x50, 0xa0, 0x40, 0x00, // /
	0xfa, 0xcc, 0xda, 0xec, 0xca, 0xcc, 0xfa, 0x00, // 0
	0x14, 0x38, 0x14, 0x18, 0x14, 0x18, 0x34, 0x00, // 1
	0xfa, 0xcc, 0x0a, 0xfc, 0xc0, 0xca, 0xf4, 0x00, // 2
	0xfa, 0x0c, 0x0a, 0x7c, 0x0a, 0x0c, 0xfa, 0x00, // 3
	0xca, 0xcc, 0xca, 0xfc, 0x0a, 0x0c, 0x0a, 0x00, // 4
	0xfa, 0xcc, 0xc0, 0xfc, 0x0a, 0xcc, 0xfa, 0x00, // 5
	0xbe, 0x40, 0xbe, 0x46, 0xa6, 0x46, 0xbe, 0x00, // 6
	0xfa, 0x0c, 0x0a, 0x0c, 0x0a, 0x0c, 0x0a, 0x00, // 7
	0xfa, 0xcc, 0xca, 0x7c, 0xca, 0xcc, 0xfa, 0x00, // 8
	0xfa, 0xcc, 0xca, 0xfc, 0x0a, 0xcc, 0xfa, 0x00, // 9
	0x10, 0x28, 0x18, 0x00, 0x10, 0x28, 0x18, 0x00, // :
	0x10, 0x28, 0x18, 0x00, 0x18, 0x28, 0x10, 0x20, // ;
	0x08, 0x14, 0x28, 0x50, 0x28, 0x14, 0x08, 0x00, // <
	0x00, 0x00, 0x7a, 0x00, 0x7a, 0x00, 0x00, 0x00, // =
	0x10, 0x28, 0x14, 0x0a, 0x14, 0x28, 0x10, 0x00, // >
	0xfa, 0xcc, 0x0a, 0x3c, 0x00, 0x10, 0x28, 0x18, // ?
	0xbe, 0x66, 0xae, 0x76, 0xae, 0x60, 0xbe, 0x00, // @
	0xfe, 0xcc, 0xca, 0xfc, 0xca, 0xcc, 0xca, 0x00, // A
	0xbe, 0x66, 0xa6, 0x7c, 0xa6, 0x66, 0xbe, 0x00, // B
	0xbe, 0x66, 0xa6, 0x60, 0xa6, 0x66, 0xbe, 0x00, // C
	0xbe, 0x66, 0xa6, 0x66, 0xa6, 0x6c, 0xb8, 0x00, // D
	0xbe, 0x60, 0xa0, 0x7c, 0xa0, 0x60, 0xbe, 0x00, // E
	0xbe, 0x60, 0xa0, 0x7c, 0xa0, 0x60, 0xa0, 0x00, // F
	0xbe, 0x66, 0xa0, 0x6e, 0xa6, 0x66, 0xbe, 0x00, // G
	0xa6, 0x66, 0xa6, 0x7e, 0xa6, 0x66, 0xa6, 0x00, // H
	0x28, 0x30, 0x28, 0x30, 0x28, 0x30, 0x28, 0x00, // I
	0x0a, 0x0c, 0x0a, 0x0c, 0xca, 0xcc, 0xfa, 0x00, // J
	0xa6, 0x66, 0xac, 0x78, 0xac, 0x66, 0xa6, 0x00, // K
	0xa0, 0x60, 0xa0, 0x60, 0xa0, 0x60, 0xbe, 0x00, // L
	0xfa, 0xac, 0xaa, 0xac, 0xaa, 0xac, 0xaa, 0x00, // M
	0xfa, 0xcc, 0xca, 0xcc, 0xca, 0xcc, 0xca, 0x00, // N
	0xfa, 0xcc, 0xca, 0xcc, 0xca, 0xcc, 0xfa, 0x00, // O
	0xbe, 0x66, 0xa6, 0x7e, 0xa0, 0x60, 0xa0, 0x00, // P
	0xbe, 0x66, 0xa6, 0x66, 0xa6, 0x66, 0xbc, 0x1e, // Q
	0xbe, 0x66, 0xa6, 0x7c, 0xa6, 0x66, 0xa6, 0x00, // R
	0xfc, 0xca, 0xc0, 0xfa, 0x0c, 0xca, 0xfc, 0x00, // S
	0xfe, 0x18, 0x28, 0x18, 0x28, 0x18, 0x28, 0x00, // T
	0xca, 0xcc, 0xca, 0xcc, 0xca, 0xcc, 0xfa, 0x00, // U
	0xa6, 0x66, 0xa6, 0x66, 0xac, 0x78, 0xb0, 0x00, // V
	0xaa, 0xac, 0xaa, 0xac, 0xaa, 0xac, 0xfa, 0x00, // W
	0xca, 0xcc, 0xca, 0x7c, 0xca, 0xcc, 0xca, 0x00, // X
	0xca, 0xcc, 0xca, 0xfc, 0x0a, 0xcc, 0xfa, 0x00, // Y
	0xbe, 0x4a, 0x14, 0x28, 0x50, 0xa4, 0xfa, 0x00, // Z
	0x5e, 0x30, 0x50, 0x30, 0x50, 0x30, 0x50, 0x3e, // [
	0x40, 0xa0, 0x50, 0x28, 0x14, 0x0a, 0x04, 0x00, // \
	0x7a, 0x0c, 0x0a, 0x0c, 0x0a, 0x0c, 0x0a, 0x7c, // ]
	0x10, 0x28, 0x54, 0xae, 0x18, 0x28, 0x18, 0x28, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x5e, 0x36, 0x50, 0xbc, 0x50, 0x36, 0x5e, 0x00, // £
	0x00, 0x00, 0xfa, 0x0c, 0xfa, 0xcc, 0xfa, 0x00, // a
	0xa0, 0x60, 0xbe, 0x66, 0xa6, 0x66, 0xbe, 0x00, // b
	0x00, 0x00, 0xbe, 0x66, 0xa0, 0x66, 0xbe, 0x00, // c
	0x0a, 0x0c, 0xfa, 0xcc, 0xca, 0xcc, 0xfa, 0x00, // d
	0x00, 0x00, 0xbe, 0x66, 0xbe, 0x60, 0xbe, 0x00, // e
	0x5e, 0x36, 0x50, 0x3c, 0x50, 0x30, 0x50, 0x00, // f
	0x00, 0x00, 0xfa, 0xcc, 0xca, 0xfc, 0x0a, 0xfc, // g
	0xa0, 0x60, 0xbe, 0x66, 0xa6, 0x66, 0xa6, 0x00, // h
	0x28, 0x30, 0x00, 0x30, 0x28, 0x30, 0x28, 0x00, // i
	0x0a, 0x0e, 0x00, 0x0a, 0x0c, 0x0a, 0xcc, 0xfa, // j
	0xa0, 0x60, 0xa6, 0x66, 0xbc, 0x66, 0xa6, 0x00, // k
	0x34, 0x18, 0x14, 0x18, 0x14, 0x18, 0x14, 0x00, // l
	0x00, 0x00, 0xfa, 0xac, 0xaa, 0xac, 0xaa, 0x00, // m
	0x00, 0x00, 0xfa, 0xcc, 0xca, 0xcc, 0xca, 0x00, // n
	0x00, 0x00, 0xfa, 0xcc, 0xca, 0xcc, 0xfa, 0x00, // o
	0x00, 0x00, 0xbe, 0x66, 0xa6, 0x7e, 0xa0, 0x60, // p
	0x00, 0x00, 0xfa, 0xcc, 0xca, 0xfc, 0x0a, 0x0c, // q
	0x00, 0x00, 0xbe, 0x66, 0xa0, 0x60, 0xa0, 0x00, // r
	0x00, 0x00, 0xfa, 0xc0, 0xfa, 0x0c, 0xfa, 0x00, // s
	0xa0, 0x60, 0xbc, 0x60, 0xa0, 0x66, 0xbe, 0x00, // t
	0x00, 0x00, 0xca, 0xcc, 0xca, 0xcc, 0xfa, 0x00, // u
	0x00, 0x00, 0xa6, 0x66, 0xac, 0x78, 0xb0, 0x00, // v
	0x00, 0x00, 0xaa, 0xac, 0xaa, 0xac, 0xfa, 0x00, // w
	0x00, 0x00, 0xca, 0xcc, 0x78, 0xcc, 0xca, 0x00, // x
	0x00, 0x00, 0xca, 0xcc, 0xca, 0xfc, 0x0a, 0xfc, // y
	0x00, 0x00, 0xbe, 0x06, 0xbe, 0x60, 0xbe, 0x00, // z
	0x2e, 0x18, 0x28, 0xd8, 0x28, 0x18, 0x2e, 0x00, // {
	0x28, 0x18, 0x28, 0x18, 0x28, 0x18, 0x28, 0x00, // |
	0xe8, 0x30, 0x28, 0x36, 0x28, 0x30, 0xe8, 0x00, // }
	0x70, 0xaa, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x3c, 0x42, 0x9d, 0xa1, 0xb1, 0xbd, 0x42, 0x3c, // ©
};