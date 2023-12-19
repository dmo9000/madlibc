// Reflex font from https://damieng.com/zx-origins
static const uint8_t FONT_REFLEX_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x30, 0x30, 0x18, 0x18, 0x00, 0x0c, 0x0c, 0x00, // !
	0x6c, 0x6c, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x00, 0x6c, 0xfe, 0x6c, 0x36, 0x7f, 0x36, 0x00, // #
	0x10, 0x78, 0x60, 0x3c, 0x06, 0x3e, 0x08, 0x00, // $
	0xcc, 0xcc, 0x18, 0x10, 0x30, 0x66, 0x66, 0x00, // %
	0xf8, 0xc0, 0xc8, 0x7e, 0x64, 0x7e, 0x3e, 0x00, // &
	0x18, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x38, 0x60, 0x60, 0x30, 0x30, 0x18, 0x0e, 0x00, // (
	0x70, 0x18, 0x0c, 0x0c, 0x06, 0x06, 0x1c, 0x00, // )
	0x00, 0x10, 0x7c, 0x38, 0x28, 0x00, 0x00, 0x00, // *
	0x00, 0x30, 0x30, 0x7c, 0x18, 0x18, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x08, // ,
	0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, // .
	0x0c, 0x0c, 0x18, 0x10, 0x30, 0x60, 0x60, 0x00, // /
	0xfa, 0xce, 0x4c, 0x76, 0x26, 0x7e, 0x5e, 0x00, // 0
	0x30, 0x70, 0x30, 0x30, 0x18, 0x18, 0x3c, 0x00, // 1
	0xf8, 0xcc, 0x18, 0x30, 0x70, 0x7e, 0x3e, 0x00, // 2
	0xf8, 0xcc, 0x0c, 0x7c, 0x06, 0x3e, 0x1e, 0x00, // 3
	0xd8, 0xcc, 0x6c, 0x3e, 0x0c, 0x06, 0x06, 0x00, // 4
	0xf8, 0xcc, 0x40, 0x7c, 0x06, 0x3e, 0x1e, 0x00, // 5
	0xf8, 0xcc, 0x40, 0x7c, 0x26, 0x3e, 0x1e, 0x00, // 6
	0xf8, 0xcc, 0x0c, 0x0c, 0x06, 0x06, 0x06, 0x00, // 7
	0xf8, 0xcc, 0xcc, 0x7c, 0x66, 0x3e, 0x1e, 0x00, // 8
	0xf8, 0xcc, 0x6c, 0x3e, 0x06, 0x3f, 0x1f, 0x00, // 9
	0x00, 0x30, 0x30, 0x00, 0x00, 0x18, 0x18, 0x00, // :
	0x00, 0x18, 0x18, 0x00, 0x00, 0x0c, 0x0c, 0x04, // ;
	0x0c, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0c, 0x00, // <
	0x00, 0x00, 0x7c, 0x00, 0x3e, 0x00, 0x00, 0x00, // =
	0x30, 0x18, 0x0c, 0x06, 0x0c, 0x18, 0x30, 0x00, // >
	0xf8, 0xcc, 0x0c, 0x7c, 0x00, 0x38, 0x18, 0x00, // ?
	0xf8, 0x8c, 0x56, 0x5e, 0x20, 0x3e, 0x1e, 0x00, // @
	0xf8, 0xcc, 0x66, 0x7c, 0x36, 0x36, 0x36, 0x00, // A
	0xf8, 0x0c, 0x4c, 0x7c, 0x22, 0x3e, 0x1e, 0x00, // B
	0xf8, 0xcc, 0x46, 0x60, 0x26, 0x3e, 0x1e, 0x00, // C
	0xf8, 0x0c, 0x46, 0x46, 0x26, 0x3e, 0x1e, 0x00, // D
	0xf8, 0x8c, 0x40, 0x7c, 0x20, 0x3e, 0x1e, 0x00, // E
	0xf8, 0x8c, 0x40, 0x7c, 0x20, 0x38, 0x18, 0x00, // F
	0xf8, 0xcc, 0x40, 0x6c, 0x26, 0x3e, 0x1e, 0x00, // G
	0x98, 0x8c, 0x4c, 0x7c, 0x26, 0x36, 0x36, 0x00, // H
	0x70, 0x30, 0x30, 0x30, 0x18, 0x18, 0x1c, 0x00, // I
	0x18, 0x0c, 0x0c, 0x0c, 0x26, 0x3e, 0x1e, 0x00, // J
	0xc8, 0xc8, 0x58, 0x70, 0x2c, 0x36, 0x36, 0x00, // K
	0xc0, 0x80, 0x40, 0x60, 0x26, 0x3e, 0x1e, 0x00, // L
	0xec, 0xfe, 0xd6, 0xd6, 0x63, 0x63, 0x63, 0x00, // M
	0x98, 0xcc, 0x6c, 0x7c, 0x2e, 0x36, 0x36, 0x00, // N
	0xf8, 0xcc, 0x4c, 0x66, 0x26, 0x3e, 0x1e, 0x00, // O
	0xf8, 0x0c, 0x46, 0x7c, 0x30, 0x38, 0x18, 0x00, // P
	0xf8, 0xcc, 0x4c, 0x66, 0x2a, 0x3e, 0x1c, 0x06, // Q
	0xf8, 0x0c, 0x46, 0x7c, 0x36, 0x3b, 0x1b, 0x00, // R
	0xf8, 0xcc, 0x40, 0x7c, 0x06, 0x3e, 0x1e, 0x00, // S
	0x7e, 0x5a, 0x18, 0x18, 0x0c, 0x0c, 0x0c, 0x00, // T
	0x88, 0xcc, 0x4c, 0x66, 0x26, 0x3e, 0x1e, 0x00, // U
	0x44, 0x66, 0x26, 0x36, 0x16, 0x1e, 0x0e, 0x00, // V
	0xd6, 0xd6, 0xd6, 0x6b, 0x6b, 0x3f, 0x3f, 0x00, // W
	0x98, 0xcc, 0x6c, 0x38, 0x6c, 0x66, 0x36, 0x00, // X
	0xc8, 0xcc, 0x4c, 0x7e, 0x06, 0x3e, 0x1e, 0x00, // Y
	0xf8, 0x0c, 0x18, 0x30, 0x70, 0x3e, 0x3e, 0x00, // Z
	0x78, 0x60, 0x60, 0x30, 0x30, 0x18, 0x1e, 0x00, // [
	0xc0, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x02, 0x00, // \
	0x78, 0x18, 0x18, 0x0c, 0x0c, 0x06, 0x1e, 0x00, // ]
	0x18, 0x3c, 0x7e, 0x18, 0x0c, 0x0c, 0x0c, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0xf8, 0xcc, 0xc0, 0x78, 0x60, 0x7e, 0x3e, 0x00, // £
	0x00, 0x00, 0x78, 0x0c, 0x7c, 0x36, 0x3e, 0x00, // a
	0xc0, 0xc0, 0xf8, 0x6c, 0x6c, 0x36, 0x3e, 0x00, // b
	0x00, 0x00, 0xf8, 0x6c, 0x60, 0x36, 0x3e, 0x00, // c
	0x18, 0x18, 0xf8, 0x6c, 0x6c, 0x36, 0x3e, 0x00, // d
	0x00, 0x00, 0xf8, 0x6c, 0x78, 0x36, 0x3e, 0x00, // e
	0x7c, 0x60, 0x78, 0x30, 0x30, 0x18, 0x18, 0x00, // f
	0x00, 0x00, 0xfc, 0xcc, 0x6c, 0x7c, 0x06, 0x7e, // g
	0xc0, 0xc0, 0xf8, 0x6c, 0x6c, 0x36, 0x36, 0x00, // h
	0x30, 0x30, 0x00, 0x18, 0x18, 0x0c, 0x0c, 0x00, // i
	0x30, 0x30, 0x00, 0x18, 0x18, 0x0c, 0x0c, 0x7c, // j
	0xc0, 0xc0, 0x6c, 0x68, 0x7c, 0x36, 0x36, 0x00, // k
	0x30, 0x30, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x00, // l
	0x00, 0x00, 0xfe, 0xd6, 0xd6, 0x6b, 0x6b, 0x00, // m
	0x00, 0x00, 0xf8, 0x6c, 0x6c, 0x36, 0x36, 0x00, // n
	0x00, 0x00, 0x78, 0x6c, 0x6c, 0x36, 0x3e, 0x00, // o
	0x00, 0x00, 0x7c, 0x6c, 0x36, 0x3e, 0x18, 0x18, // p
	0x00, 0x00, 0xf8, 0xd8, 0x6c, 0x7c, 0x06, 0x06, // q
	0x00, 0x00, 0xf8, 0x6c, 0x6c, 0x30, 0x30, 0x00, // r
	0x00, 0x00, 0x78, 0x60, 0x3c, 0x06, 0x3e, 0x00, // s
	0xc0, 0xc0, 0xf8, 0x60, 0x60, 0x36, 0x3e, 0x00, // t
	0x00, 0x00, 0x6c, 0x6c, 0x6c, 0x36, 0x3e, 0x00, // u
	0x00, 0x00, 0x6c, 0x66, 0x36, 0x36, 0x1e, 0x00, // v
	0x00, 0x00, 0xd6, 0xd6, 0x6b, 0x6b, 0x7f, 0x00, // w
	0x00, 0x00, 0x6c, 0x6c, 0x3c, 0x36, 0x36, 0x00, // x
	0x00, 0x00, 0xcc, 0xcc, 0x6c, 0x7c, 0x06, 0x7e, // y
	0x00, 0x00, 0x7c, 0x6c, 0x18, 0x36, 0x3e, 0x00, // z
	0x1c, 0x30, 0x30, 0x60, 0x18, 0x18, 0x0e, 0x00, // {
	0x30, 0x30, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x00, // |
	0x70, 0x18, 0x18, 0x06, 0x0c, 0x0c, 0x38, 0x00, // }
	0xec, 0xd6, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x78, 0x84, 0xba, 0x52, 0x5d, 0x21, 0x1e, 0x00, // ©
};