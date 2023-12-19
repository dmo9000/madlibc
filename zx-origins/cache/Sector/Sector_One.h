// Sector One font from https://damieng.com/zx-origins
static const uint8_t FONT_SECTOR_ONE_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x00, // !
	0x6c, 0x6c, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x6c, 0x6c, 0xfe, 0x6c, 0xfe, 0x6c, 0x6c, 0x00, // #
	0x18, 0x3c, 0x60, 0x7c, 0x0c, 0x7c, 0x30, 0x00, // $
	0x36, 0x36, 0x0c, 0x18, 0x18, 0x36, 0x36, 0x00, // %
	0x38, 0x60, 0x6c, 0x3c, 0x6c, 0x6c, 0x7c, 0x00, // &
	0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x0c, 0x18, 0x30, 0x30, 0x30, 0x18, 0x0c, 0x00, // (
	0x30, 0x18, 0x0c, 0x0c, 0x0c, 0x18, 0x30, 0x00, // )
	0x00, 0x10, 0x7c, 0x38, 0x7c, 0x10, 0x00, 0x00, // *
	0x00, 0x18, 0x18, 0x7e, 0x18, 0x18, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x30, // ,
	0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, // .
	0x18, 0x18, 0x30, 0x30, 0x30, 0x60, 0x60, 0x00, // /
	0x78, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0x3c, 0x00, // 0
	0x18, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // 1
	0x78, 0x6c, 0x0c, 0x7c, 0x60, 0x60, 0x7c, 0x00, // 2
	0x78, 0x6c, 0x0c, 0x3c, 0x0c, 0x6c, 0x7c, 0x00, // 3
	0x60, 0x60, 0x6c, 0x6c, 0x7e, 0x0c, 0x0c, 0x00, // 4
	0x7c, 0x60, 0x60, 0x7c, 0x0c, 0x6c, 0x78, 0x00, // 5
	0x3c, 0x6c, 0x60, 0x7c, 0x6c, 0x6c, 0x7c, 0x00, // 6
	0x78, 0x6c, 0x0c, 0x3c, 0x0c, 0x0c, 0x0c, 0x00, // 7
	0x78, 0x6c, 0x6c, 0x38, 0x6c, 0x6c, 0x3c, 0x00, // 8
	0x78, 0x6c, 0x6c, 0x7c, 0x0c, 0x6c, 0x7c, 0x00, // 9
	0x00, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00, // :
	0x00, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x30, // ;
	0x00, 0x18, 0x30, 0x60, 0x30, 0x18, 0x00, 0x00, // <
	0x00, 0x00, 0x78, 0x00, 0x78, 0x00, 0x00, 0x00, // =
	0x00, 0x60, 0x30, 0x18, 0x30, 0x60, 0x00, 0x00, // >
	0x78, 0x6c, 0x0c, 0x1c, 0x00, 0x18, 0x18, 0x00, // ?
	0x7e, 0xc6, 0xde, 0xd6, 0xde, 0xc0, 0xfc, 0x00, // @
	0x78, 0x6c, 0x0c, 0x7c, 0x6c, 0x6c, 0x7c, 0x00, // A
	0x7c, 0x6c, 0x6c, 0x78, 0x6c, 0x6c, 0x7c, 0x00, // B
	0x3c, 0x6c, 0x6c, 0x60, 0x6c, 0x6c, 0x7c, 0x00, // C
	0x78, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0x7c, 0x00, // D
	0x3c, 0x6c, 0x60, 0x78, 0x60, 0x6c, 0x7c, 0x00, // E
	0x3c, 0x6c, 0x60, 0x78, 0x60, 0x60, 0x60, 0x00, // F
	0x3c, 0x6c, 0x60, 0x6c, 0x6c, 0x6c, 0x7c, 0x00, // G
	0x6c, 0x6c, 0x6c, 0x7c, 0x6c, 0x6c, 0x6c, 0x00, // H
	0x3c, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00, // I
	0x0c, 0x0c, 0x0c, 0x0c, 0x6c, 0x6c, 0x78, 0x00, // J
	0x6c, 0x6c, 0x6c, 0x78, 0x6c, 0x6c, 0x6c, 0x00, // K
	0x60, 0x60, 0x60, 0x60, 0x60, 0x6c, 0x7c, 0x00, // L
	0xee, 0xd6, 0xd6, 0xd6, 0xc6, 0xc6, 0xc6, 0x00, // M
	0x78, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0x00, // N
	0x3c, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0x78, 0x00, // O
	0x78, 0x6c, 0x6c, 0x7c, 0x60, 0x60, 0x60, 0x00, // P
	0x3c, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0x78, 0x0c, // Q
	0x78, 0x6c, 0x6c, 0x78, 0x6c, 0x6c, 0x6c, 0x00, // R
	0x3c, 0x6c, 0x60, 0x7c, 0x0c, 0x6c, 0x78, 0x00, // S
	0x3c, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // T
	0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0x3c, 0x00, // U
	0x6c, 0x6c, 0x6c, 0x6c, 0x78, 0x70, 0x60, 0x00, // V
	0xc6, 0xc6, 0xc6, 0xd6, 0xd6, 0xd6, 0x7e, 0x00, // W
	0x6c, 0x6c, 0x6c, 0x38, 0x6c, 0x6c, 0x6c, 0x00, // X
	0x6c, 0x6c, 0x6c, 0x7c, 0x0c, 0x6c, 0x78, 0x00, // Y
	0x7c, 0x6c, 0x1c, 0x38, 0x70, 0x6c, 0x7c, 0x00, // Z
	0x3c, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3c, 0x00, // [
	0x60, 0x60, 0x30, 0x30, 0x30, 0x18, 0x18, 0x00, // \
	0x3c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x3c, 0x00, // ]
	0x18, 0x3c, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x3c, 0x6c, 0x60, 0x78, 0x60, 0x60, 0x7c, 0x00, // £
	0x00, 0x78, 0x6c, 0x0c, 0x7c, 0x6c, 0x7c, 0x00, // a
	0x60, 0x7c, 0x6c, 0x6c, 0x6c, 0x6c, 0x78, 0x00, // b
	0x00, 0x3c, 0x6c, 0x60, 0x60, 0x6c, 0x7c, 0x00, // c
	0x0c, 0x7c, 0x6c, 0x6c, 0x6c, 0x6c, 0x3c, 0x00, // d
	0x00, 0x3c, 0x6c, 0x7c, 0x60, 0x6c, 0x7c, 0x00, // e
	0x00, 0x3c, 0x6c, 0x60, 0x78, 0x60, 0x60, 0x60, // f
	0x00, 0x7c, 0x6c, 0x6c, 0x6c, 0x3c, 0x0c, 0x7c, // g
	0x60, 0x78, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0x00, // h
	0x18, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // i
	0x0c, 0x00, 0x0c, 0x0c, 0x0c, 0x6c, 0x6c, 0x78, // j
	0x60, 0x6c, 0x6c, 0x78, 0x6c, 0x6c, 0x6c, 0x00, // k
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // l
	0x00, 0xfc, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0x00, // m
	0x00, 0x78, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0x00, // n
	0x00, 0x3c, 0x6c, 0x6c, 0x6c, 0x6c, 0x78, 0x00, // o
	0x00, 0x78, 0x6c, 0x6c, 0x6c, 0x7c, 0x60, 0x60, // p
	0x00, 0x3c, 0x6c, 0x6c, 0x6c, 0x7c, 0x0c, 0x0c, // q
	0x00, 0x7c, 0x6c, 0x60, 0x60, 0x60, 0x60, 0x00, // r
	0x00, 0x3c, 0x6c, 0x70, 0x1c, 0x6c, 0x7c, 0x00, // s
	0x60, 0x60, 0x78, 0x60, 0x60, 0x6c, 0x3c, 0x00, // t
	0x00, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0x3c, 0x00, // u
	0x00, 0x6c, 0x6c, 0x6c, 0x6c, 0x78, 0x70, 0x00, // v
	0x00, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0x7e, 0x00, // w
	0x00, 0x6c, 0x6c, 0x38, 0x6c, 0x6c, 0x6c, 0x00, // x
	0x00, 0x6c, 0x6c, 0x6c, 0x6c, 0x7c, 0x0c, 0x78, // y
	0x00, 0x7c, 0x6c, 0x18, 0x30, 0x6c, 0x7c, 0x00, // z
	0x0e, 0x18, 0x18, 0x70, 0x18, 0x18, 0x1e, 0x00, // {
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // |
	0x70, 0x18, 0x18, 0x0e, 0x18, 0x18, 0x78, 0x00, // }
	0x00, 0x74, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x38, 0x44, 0x9a, 0xb2, 0xb2, 0xba, 0x44, 0x38, // ©
};