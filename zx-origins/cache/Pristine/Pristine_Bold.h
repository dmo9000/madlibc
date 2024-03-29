// Pristine Bold font from https://damieng.com/zx-origins
static const uint8_t FONT_PRISTINE_BOLD_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x00, // !
	0x36, 0x36, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x00, 0x6c, 0xfe, 0x6c, 0x6c, 0xfe, 0x6c, 0x00, // #
	0x0c, 0x3e, 0x6c, 0x38, 0x1c, 0x36, 0x7c, 0x30, // $
	0x40, 0xe4, 0x48, 0x10, 0x24, 0x4e, 0x04, 0x00, // %
	0x70, 0xd8, 0xc0, 0x7e, 0xcc, 0xcc, 0x76, 0x00, // &
	0x18, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x1c, 0x30, 0x60, 0x60, 0x60, 0x30, 0x1c, 0x00, // (
	0x70, 0x18, 0x0c, 0x0c, 0x0c, 0x18, 0x70, 0x00, // )
	0x00, 0x6c, 0x38, 0xee, 0x38, 0x6c, 0x00, 0x00, // *
	0x00, 0x18, 0x18, 0x7e, 0x18, 0x18, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, // .
	0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0x00, // /
	0x7c, 0xc6, 0xce, 0xd6, 0xe6, 0xc6, 0x7c, 0x00, // 0
	0x18, 0x38, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00, // 1
	0x7c, 0xc6, 0x06, 0x1c, 0x70, 0xc0, 0xfe, 0x00, // 2
	0xfe, 0x06, 0x0c, 0x3c, 0x06, 0xc6, 0x7c, 0x00, // 3
	0x0c, 0x1c, 0x3c, 0x6c, 0xcc, 0xfe, 0x0c, 0x00, // 4
	0xfe, 0xc0, 0xc0, 0xfc, 0x06, 0xc6, 0x7c, 0x00, // 5
	0x7c, 0xc6, 0xc0, 0xfc, 0xc6, 0xc6, 0x7c, 0x00, // 6
	0xfe, 0x06, 0x0c, 0x18, 0x18, 0x30, 0x30, 0x00, // 7
	0x7c, 0xc6, 0xc6, 0x7c, 0xc6, 0xc6, 0x7c, 0x00, // 8
	0x7c, 0xc6, 0xc6, 0x7e, 0x06, 0xc6, 0x7c, 0x00, // 9
	0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00, // :
	0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x30, // ;
	0x00, 0x0c, 0x18, 0x30, 0x18, 0x0c, 0x00, 0x00, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, // =
	0x00, 0x30, 0x18, 0x0c, 0x18, 0x30, 0x00, 0x00, // >
	0x7c, 0xc6, 0x06, 0x1c, 0x30, 0x00, 0x30, 0x00, // ?
	0x38, 0x6c, 0xde, 0xf6, 0xf6, 0xde, 0x60, 0x3c, // @
	0x38, 0x6c, 0xc6, 0xc6, 0xfe, 0xc6, 0xc6, 0x00, // A
	0xfc, 0xc6, 0xc6, 0xfc, 0xc6, 0xc6, 0xfc, 0x00, // B
	0x7c, 0xc6, 0xc0, 0xc0, 0xc0, 0xc6, 0x7c, 0x00, // C
	0xfc, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xfc, 0x00, // D
	0xfe, 0xc0, 0xc0, 0xfc, 0xc0, 0xc0, 0xfe, 0x00, // E
	0xfe, 0xc0, 0xc0, 0xfc, 0xc0, 0xc0, 0xc0, 0x00, // F
	0x7c, 0xc6, 0xc0, 0xde, 0xc6, 0xc6, 0x7c, 0x00, // G
	0xc6, 0xc6, 0xc6, 0xfe, 0xc6, 0xc6, 0xc6, 0x00, // H
	0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x7e, 0x00, // I
	0x0e, 0x06, 0x06, 0x06, 0x06, 0xc6, 0x7c, 0x00, // J
	0xc6, 0xcc, 0xd8, 0xf0, 0xd8, 0xcc, 0xc6, 0x00, // K
	0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0x00, // L
	0xc6, 0xee, 0xfe, 0xd6, 0xc6, 0xc6, 0xc6, 0x00, // M
	0xc6, 0xe6, 0xf6, 0xde, 0xce, 0xc6, 0xc6, 0x00, // N
	0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0x7c, 0x00, // O
	0xfc, 0xc6, 0xc6, 0xfc, 0xc0, 0xc0, 0xc0, 0x00, // P
	0x7c, 0xc6, 0xc6, 0xc6, 0xda, 0xcc, 0x76, 0x00, // Q
	0xfc, 0xc6, 0xc6, 0xfc, 0xd8, 0xcc, 0xc6, 0x00, // R
	0x7c, 0xc6, 0xc0, 0x7c, 0x06, 0xc6, 0x7c, 0x00, // S
	0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // T
	0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0x7c, 0x00, // U
	0xc6, 0xc6, 0xc6, 0xc6, 0x6c, 0x38, 0x10, 0x00, // V
	0xc6, 0xc6, 0xc6, 0xd6, 0xfe, 0xee, 0xc6, 0x00, // W
	0xc6, 0xc6, 0x6c, 0x38, 0x6c, 0xc6, 0xc6, 0x00, // X
	0xc3, 0xc3, 0x66, 0x3c, 0x18, 0x18, 0x18, 0x00, // Y
	0xfe, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0xfe, 0x00, // Z
	0x7c, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7c, 0x00, // [
	0xc0, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x00, // \
	0x7c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x7c, 0x00, // ]
	0x18, 0x3c, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x3c, 0x66, 0x60, 0xf8, 0x60, 0x60, 0xfe, 0x00, // £
	0x00, 0x00, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00, // a
	0x60, 0x60, 0x7c, 0x66, 0x66, 0x66, 0x7c, 0x00, // b
	0x00, 0x00, 0x3c, 0x66, 0x60, 0x66, 0x3c, 0x00, // c
	0x06, 0x06, 0x3e, 0x66, 0x66, 0x66, 0x3e, 0x00, // d
	0x00, 0x00, 0x3c, 0x66, 0x7e, 0x60, 0x3e, 0x00, // e
	0x1c, 0x36, 0x30, 0x7c, 0x30, 0x30, 0x30, 0x00, // f
	0x00, 0x00, 0x3e, 0x66, 0x66, 0x3e, 0x06, 0x3c, // g
	0x60, 0x60, 0x7c, 0x66, 0x66, 0x66, 0x66, 0x00, // h
	0x18, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // i
	0x06, 0x00, 0x06, 0x06, 0x06, 0x06, 0x66, 0x3c, // j
	0x60, 0x60, 0x66, 0x6c, 0x78, 0x6c, 0x66, 0x00, // k
	0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // l
	0x00, 0x00, 0xec, 0xfe, 0xd6, 0xd6, 0xd6, 0x00, // m
	0x00, 0x00, 0x7c, 0x66, 0x66, 0x66, 0x66, 0x00, // n
	0x00, 0x00, 0x3c, 0x66, 0x66, 0x66, 0x3c, 0x00, // o
	0x00, 0x00, 0x7c, 0x66, 0x66, 0x7c, 0x60, 0x60, // p
	0x00, 0x00, 0x3e, 0x66, 0x66, 0x3e, 0x06, 0x06, // q
	0x00, 0x00, 0x6c, 0x76, 0x60, 0x60, 0x60, 0x00, // r
	0x00, 0x00, 0x3e, 0x60, 0x3c, 0x06, 0x7c, 0x00, // s
	0x30, 0x30, 0x7c, 0x30, 0x30, 0x30, 0x1e, 0x00, // t
	0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, // u
	0x00, 0x00, 0xc6, 0xc6, 0x6c, 0x38, 0x10, 0x00, // v
	0x00, 0x00, 0xc6, 0xd6, 0xd6, 0xfe, 0x6c, 0x00, // w
	0x00, 0x00, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0x00, // x
	0x00, 0x00, 0x66, 0x66, 0x3c, 0x18, 0x30, 0x60, // y
	0x00, 0x00, 0x7e, 0x0c, 0x18, 0x30, 0x7e, 0x00, // z
	0x0e, 0x18, 0x18, 0x70, 0x18, 0x18, 0x0e, 0x00, // {
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // |
	0x70, 0x18, 0x18, 0x0e, 0x18, 0x18, 0x70, 0x00, // }
	0x66, 0xfe, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x42, 0x99, 0xbd, 0xb1, 0xb1, 0xbd, 0x99, 0x42, // ©
};