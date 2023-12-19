// Authorized Edge font from https://damieng.com/zx-origins
static const uint8_t FONT_AUTHORIZED_EDGE_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x08, 0x18, 0x38, 0x38, 0x38, 0x00, 0x38, 0x00, // !
	0xee, 0xee, 0x44, 0x88, 0x00, 0x00, 0x00, 0x00, // "
	0x00, 0x72, 0xf7, 0x72, 0x72, 0xf7, 0x72, 0x00, // #
	0x14, 0x36, 0x60, 0xfe, 0x0e, 0xde, 0x50, 0x00, // $
	0xe6, 0xee, 0x1c, 0x38, 0x70, 0xee, 0xce, 0x00, // %
	0x2c, 0x64, 0xe0, 0x76, 0xe4, 0xe4, 0xf6, 0x00, // &
	0x38, 0x38, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, // '
	0x3a, 0x70, 0x70, 0x70, 0x70, 0x70, 0x3a, 0x00, // (
	0x5c, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x5c, 0x00, // )
	0x00, 0x18, 0x7e, 0x3c, 0x7e, 0x18, 0x00, 0x00, // *
	0x00, 0x38, 0x38, 0xfe, 0x38, 0x38, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x10, 0x20, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x00, // .
	0x06, 0x0e, 0x1c, 0x38, 0x70, 0xe0, 0xc0, 0x00, // /
	0xde, 0x8e, 0x9e, 0xae, 0xce, 0x8c, 0xd8, 0x00, // 0
	0xb8, 0x38, 0x38, 0x38, 0x38, 0x38, 0xbe, 0x00, // 1
	0xd8, 0x8c, 0x0e, 0xfe, 0xe0, 0xe0, 0xf6, 0x00, // 2
	0xd8, 0x8c, 0x0e, 0x6e, 0x0e, 0x8e, 0xde, 0x00, // 3
	0x82, 0x86, 0x8e, 0xde, 0x0e, 0x0e, 0x0e, 0x00, // 4
	0xf6, 0xe0, 0xe0, 0xfe, 0x0e, 0x8c, 0xd8, 0x00, // 5
	0x36, 0x62, 0xe0, 0xf6, 0xe2, 0xe2, 0xf6, 0x00, // 6
	0xd8, 0x8c, 0x0e, 0x3e, 0x0e, 0x0e, 0x0e, 0x00, // 7
	0xf6, 0xe2, 0xe2, 0x74, 0xe2, 0xe2, 0xf6, 0x00, // 8
	0xde, 0x8e, 0x8e, 0xde, 0x0e, 0x8c, 0xd8, 0x00, // 9
	0x00, 0x38, 0x38, 0x00, 0x38, 0x38, 0x00, 0x00, // :
	0x00, 0x38, 0x38, 0x00, 0x38, 0x38, 0x10, 0x20, // ;
	0x0e, 0x1c, 0x38, 0x70, 0x38, 0x1c, 0x0e, 0x00, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, // =
	0x70, 0x38, 0x1c, 0x0e, 0x1c, 0x38, 0x70, 0x00, // >
	0xd8, 0x8c, 0x0e, 0x3e, 0x38, 0x00, 0x38, 0x00, // ?
	0xd8, 0x8c, 0xee, 0xce, 0xde, 0x80, 0xde, 0x00, // @
	0x36, 0x62, 0xe2, 0xf6, 0xe2, 0xe2, 0xe2, 0x00, // A
	0xde, 0x8e, 0x8c, 0xde, 0x8e, 0x8c, 0xd8, 0x00, // B
	0x36, 0x62, 0xe0, 0xe0, 0xe0, 0xe2, 0xf6, 0x00, // C
	0xf6, 0xe2, 0xe2, 0xe2, 0xe2, 0xe4, 0xe8, 0x00, // D
	0x36, 0x62, 0xe0, 0xec, 0xe0, 0xe2, 0xf6, 0x00, // E
	0x36, 0x62, 0xe0, 0xf8, 0xe0, 0xe0, 0xe0, 0x00, // F
	0x36, 0x62, 0xe0, 0xee, 0xe6, 0xe6, 0xf6, 0x00, // G
	0x22, 0x62, 0xe2, 0xfa, 0xe2, 0xe2, 0xe2, 0x00, // H
	0xfa, 0x38, 0x38, 0x38, 0x38, 0x38, 0xbe, 0x00, // I
	0x3e, 0x0e, 0x0e, 0x0e, 0x8e, 0x8c, 0xd8, 0x00, // J
	0x8e, 0x8e, 0x8e, 0xdc, 0x8e, 0x8e, 0x8e, 0x00, // K
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x62, 0x36, 0x00, // L
	0x3e, 0x62, 0xea, 0xea, 0xea, 0xea, 0xea, 0x00, // M
	0x36, 0x62, 0xe2, 0xe2, 0xe2, 0xe2, 0xe2, 0x00, // N
	0xde, 0x8e, 0x8e, 0x8e, 0x8e, 0x8c, 0xd8, 0x00, // O
	0x36, 0x62, 0xe2, 0xf6, 0xe0, 0xe0, 0xe0, 0x00, // P
	0x36, 0x62, 0xe2, 0xe2, 0xe2, 0xe6, 0xf6, 0x06, // Q
	0xd8, 0x8c, 0x8e, 0xdc, 0x8e, 0x8e, 0x8e, 0x00, // R
	0x36, 0x62, 0xe0, 0xfe, 0x0e, 0x8e, 0xde, 0x00, // S
	0xfe, 0xba, 0x38, 0x38, 0x38, 0x38, 0x38, 0x00, // T
	0x8e, 0x8e, 0x8e, 0x8e, 0x8e, 0x8c, 0xd8, 0x00, // U
	0x22, 0x62, 0xe2, 0xe2, 0xe4, 0xe8, 0xd0, 0x00, // V
	0xea, 0xea, 0xea, 0xea, 0xea, 0x62, 0x3e, 0x00, // W
	0xe2, 0xe2, 0x74, 0x38, 0x5c, 0x8e, 0x8e, 0x00, // X
	0x8e, 0x8e, 0x8e, 0xde, 0x0e, 0x8c, 0xf8, 0x00, // Y
	0xde, 0x0e, 0x1c, 0x38, 0x70, 0xe0, 0xf6, 0x00, // Z
	0x7a, 0x70, 0x70, 0x70, 0x70, 0x70, 0x7a, 0x00, // [
	0xc0, 0xe0, 0x70, 0x38, 0x1c, 0x0e, 0x06, 0x00, // \
	0x5e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x5e, 0x00, // ]
	0x10, 0x10, 0x38, 0x38, 0x6c, 0x00, 0x00, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x36, 0x62, 0xe0, 0xf4, 0xe0, 0xe0, 0xf6, 0x00, // £
	0x00, 0x00, 0xd8, 0x8c, 0x8e, 0x8e, 0xde, 0x00, // a
	0xe0, 0xe0, 0xf6, 0xe2, 0xe2, 0x62, 0x36, 0x00, // b
	0x00, 0x00, 0xf6, 0xe2, 0xe0, 0xe2, 0xf6, 0x00, // c
	0x0e, 0x0e, 0xde, 0x8e, 0x8e, 0x8c, 0xd8, 0x00, // d
	0x00, 0x00, 0x36, 0x62, 0xf6, 0xe0, 0xf6, 0x00, // e
	0x00, 0x36, 0x62, 0xe0, 0xf8, 0xe0, 0xe0, 0xe0, // f
	0x00, 0x00, 0xde, 0x8e, 0x8e, 0xde, 0x0c, 0xf8, // g
	0x20, 0x60, 0xf6, 0xe2, 0xe2, 0xe2, 0xe2, 0x00, // h
	0x1c, 0x00, 0x30, 0x18, 0x1c, 0x1c, 0x1c, 0x00, // i
	0x0e, 0x00, 0x0e, 0x0e, 0x0e, 0x0e, 0x8c, 0xd8, // j
	0x20, 0x60, 0xe2, 0xe2, 0xec, 0xe2, 0xe2, 0x00, // k
	0x30, 0x18, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x00, // l
	0x00, 0x00, 0x3e, 0x62, 0xea, 0xea, 0xea, 0x00, // m
	0x00, 0x00, 0x36, 0x62, 0xe2, 0xe2, 0xe2, 0x00, // n
	0x00, 0x00, 0xde, 0x8e, 0x8e, 0x8c, 0xd8, 0x00, // o
	0x00, 0x00, 0x36, 0x62, 0xe2, 0xf6, 0xe0, 0xe0, // p
	0x00, 0x00, 0xd8, 0x8c, 0x8e, 0xde, 0x0e, 0x0e, // q
	0x00, 0x00, 0x36, 0x62, 0xe0, 0xe0, 0xe0, 0x00, // r
	0x00, 0x00, 0x36, 0x60, 0xfe, 0x0e, 0xde, 0x00, // s
	0xe0, 0xe0, 0xf8, 0xe0, 0xe0, 0x62, 0x36, 0x00, // t
	0x00, 0x00, 0x8e, 0x8e, 0x8e, 0x8c, 0xd8, 0x00, // u
	0x00, 0x00, 0x22, 0x62, 0xe4, 0xe8, 0xd0, 0x00, // v
	0x00, 0x00, 0xea, 0xea, 0xea, 0x62, 0x3e, 0x00, // w
	0x00, 0x00, 0xe2, 0x74, 0x38, 0x5c, 0x8e, 0x00, // x
	0x00, 0x00, 0x8e, 0x8e, 0x8e, 0xde, 0x0c, 0xf8, // y
	0x00, 0x00, 0xde, 0x1c, 0x38, 0x70, 0xf6, 0x00, // z
	0x3a, 0x38, 0x38, 0xb8, 0x38, 0x38, 0x3a, 0x00, // {
	0x08, 0x18, 0x38, 0x38, 0x38, 0x38, 0x38, 0x00, // |
	0xb8, 0x38, 0x38, 0x3e, 0x38, 0x38, 0xb8, 0x00, // }
	0x34, 0x6c, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x3c, 0x42, 0x95, 0xb1, 0xb1, 0x95, 0x42, 0x3c, // ©
};