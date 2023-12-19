// Reactor font from https://damieng.com/zx-origins
static const uint8_t FONT_REACTOR_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x38, 0x38, 0x38, 0x38, 0x00, 0x38, 0x38, 0x00, // !
	0xee, 0xee, 0x66, 0xcc, 0x00, 0x00, 0x00, 0x00, // "
	0x00, 0x24, 0xfe, 0x6c, 0x6c, 0xfe, 0x48, 0x00, // #
	0x00, 0x18, 0xfe, 0xc0, 0xfe, 0x0e, 0xfe, 0x18, // $
	0x00, 0xe6, 0xec, 0x18, 0x30, 0x6e, 0xce, 0x00, // %
	0xfe, 0xe6, 0xe0, 0x7e, 0xec, 0xec, 0xfe, 0x00, // &
	0x38, 0x38, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, // '
	0x1e, 0x38, 0x30, 0x70, 0x70, 0x30, 0x38, 0x1e, // (
	0x78, 0x1c, 0x0c, 0x0e, 0x0e, 0x0c, 0x1c, 0x78, // )
	0x00, 0x18, 0x7e, 0x3c, 0x7e, 0x18, 0x00, 0x00, // *
	0x00, 0x38, 0x38, 0xfe, 0x38, 0x38, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x18, 0x30, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x00, // .
	0x00, 0x07, 0x0e, 0x1c, 0x38, 0x70, 0xe0, 0x00, // /
	0xfe, 0xce, 0xde, 0xee, 0xce, 0xce, 0xfe, 0x00, // 0
	0x38, 0x78, 0x38, 0x38, 0x38, 0x38, 0x7c, 0x00, // 1
	0xfe, 0xce, 0x0e, 0xfe, 0xc0, 0xce, 0xfe, 0x00, // 2
	0xfe, 0x0e, 0x0e, 0x7e, 0x0e, 0x0e, 0xfe, 0x00, // 3
	0xce, 0xce, 0xce, 0xfe, 0x0e, 0x0e, 0x0e, 0x00, // 4
	0xfe, 0xce, 0xc0, 0xfe, 0x0e, 0xce, 0xfe, 0x00, // 5
	0xfe, 0xe0, 0xfe, 0xe6, 0xe6, 0xe6, 0xfe, 0x00, // 6
	0xfe, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x00, // 7
	0xfe, 0xce, 0xce, 0x7c, 0xce, 0xce, 0xfe, 0x00, // 8
	0xfe, 0xce, 0xce, 0xfe, 0x0e, 0xce, 0xfe, 0x00, // 9
	0x00, 0x38, 0x38, 0x00, 0x38, 0x38, 0x00, 0x00, // :
	0x00, 0x38, 0x38, 0x00, 0x38, 0x38, 0x18, 0x30, // ;
	0x0e, 0x1c, 0x38, 0x70, 0x38, 0x1c, 0x0e, 0x00, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x7e, 0x00, 0x00, // =
	0x70, 0x38, 0x1c, 0x0e, 0x1c, 0x38, 0x70, 0x00, // >
	0xfe, 0xce, 0x0e, 0x3e, 0x00, 0x38, 0x38, 0x00, // ?
	0xfe, 0xe6, 0xee, 0xf6, 0xee, 0xe0, 0xfe, 0x00, // @
	0xfe, 0xce, 0xce, 0xfe, 0xce, 0xce, 0xce, 0x00, // A
	0xfe, 0xe6, 0xe6, 0xfc, 0xe6, 0xe6, 0xfe, 0x00, // B
	0xfe, 0xe6, 0xe6, 0xe0, 0xe6, 0xe6, 0xfe, 0x00, // C
	0xfe, 0xe6, 0xe6, 0xe6, 0xe6, 0xec, 0xf8, 0x00, // D
	0xfe, 0xe0, 0xe0, 0xfc, 0xe0, 0xe0, 0xfe, 0x00, // E
	0xfe, 0xe0, 0xe0, 0xfc, 0xe0, 0xe0, 0xe0, 0x00, // F
	0xfe, 0xe6, 0xe0, 0xee, 0xe6, 0xe6, 0xfe, 0x00, // G
	0xe6, 0xe6, 0xe6, 0xfe, 0xe6, 0xe6, 0xe6, 0x00, // H
	0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x00, // I
	0x0e, 0x0e, 0x0e, 0x0e, 0xce, 0xce, 0xfe, 0x00, // J
	0xe6, 0xe6, 0xec, 0xf8, 0xec, 0xe6, 0xe6, 0x00, // K
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xfe, 0x00, // L
	0xfe, 0xae, 0xae, 0xae, 0xae, 0xae, 0xae, 0x00, // M
	0xfe, 0xce, 0xce, 0xce, 0xce, 0xce, 0xce, 0x00, // N
	0xfe, 0xce, 0xce, 0xce, 0xce, 0xce, 0xfe, 0x00, // O
	0xfe, 0xe6, 0xe6, 0xfe, 0xe0, 0xe0, 0xe0, 0x00, // P
	0xfe, 0xe6, 0xe6, 0xe6, 0xe6, 0xe6, 0xfc, 0x1e, // Q
	0xfe, 0xe6, 0xe6, 0xfc, 0xe6, 0xe6, 0xe6, 0x00, // R
	0xfe, 0xc6, 0xc0, 0xfe, 0x0e, 0xce, 0xfe, 0x00, // S
	0xfe, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x00, // T
	0xce, 0xce, 0xce, 0xce, 0xce, 0xce, 0xfe, 0x00, // U
	0xe6, 0xe6, 0xe6, 0xe6, 0xec, 0xf8, 0xf0, 0x00, // V
	0xae, 0xae, 0xae, 0xae, 0xae, 0xae, 0xfe, 0x00, // W
	0xce, 0xce, 0xce, 0x7c, 0xce, 0xce, 0xce, 0x00, // X
	0xce, 0xce, 0xce, 0xfe, 0x0e, 0xce, 0xfe, 0x00, // Y
	0xfe, 0xce, 0x1c, 0x38, 0x70, 0xe6, 0xfe, 0x00, // Z
	0x7e, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x7e, // [
	0x00, 0xe0, 0x70, 0x38, 0x1c, 0x0e, 0x07, 0x00, // \
	0x7e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x7e, // ]
	0x10, 0x38, 0x7c, 0xfe, 0x38, 0x38, 0x38, 0x38, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x7e, 0x76, 0x70, 0xfc, 0x70, 0x76, 0xfe, 0x00, // £
	0x00, 0x00, 0xfe, 0x0e, 0xfe, 0xce, 0xfe, 0x00, // a
	0xe0, 0xe0, 0xfe, 0xe6, 0xe6, 0xe6, 0xfe, 0x00, // b
	0x00, 0x00, 0xfe, 0xe6, 0xe0, 0xe6, 0xfe, 0x00, // c
	0x0e, 0x0e, 0xfe, 0xce, 0xce, 0xce, 0xfe, 0x00, // d
	0x00, 0x00, 0xfe, 0xe6, 0xfe, 0xe0, 0xfe, 0x00, // e
	0x7e, 0x76, 0x70, 0x7c, 0x70, 0x70, 0x70, 0x00, // f
	0x00, 0x00, 0xfe, 0xce, 0xce, 0xfe, 0x0e, 0xfe, // g
	0xe0, 0xe0, 0xfe, 0xe6, 0xe6, 0xe6, 0xe6, 0x00, // h
	0x38, 0x38, 0x00, 0x38, 0x38, 0x38, 0x38, 0x00, // i
	0x0e, 0x0e, 0x00, 0x0e, 0x0e, 0x0e, 0xce, 0xfe, // j
	0xe0, 0xe0, 0xe6, 0xe6, 0xfc, 0xe6, 0xe6, 0x00, // k
	0x3c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x00, // l
	0x00, 0x00, 0xfe, 0xae, 0xae, 0xae, 0xae, 0x00, // m
	0x00, 0x00, 0xfe, 0xce, 0xce, 0xce, 0xce, 0x00, // n
	0x00, 0x00, 0xfe, 0xce, 0xce, 0xce, 0xfe, 0x00, // o
	0x00, 0x00, 0xfe, 0xe6, 0xe6, 0xfe, 0xe0, 0xe0, // p
	0x00, 0x00, 0xfe, 0xce, 0xce, 0xfe, 0x0e, 0x0e, // q
	0x00, 0x00, 0xfe, 0xe6, 0xe0, 0xe0, 0xe0, 0x00, // r
	0x00, 0x00, 0xfe, 0xc0, 0xfe, 0x0e, 0xfe, 0x00, // s
	0xe0, 0xe0, 0xfc, 0xe0, 0xe0, 0xe6, 0xfe, 0x00, // t
	0x00, 0x00, 0xce, 0xce, 0xce, 0xce, 0xfe, 0x00, // u
	0x00, 0x00, 0xe6, 0xe6, 0xec, 0xf8, 0xf0, 0x00, // v
	0x00, 0x00, 0xae, 0xae, 0xae, 0xae, 0xfe, 0x00, // w
	0x00, 0x00, 0xce, 0xce, 0x7c, 0xce, 0xce, 0x00, // x
	0x00, 0x00, 0xce, 0xce, 0xce, 0xfe, 0x0e, 0xfe, // y
	0x00, 0x00, 0xfe, 0x06, 0xfe, 0xe0, 0xfe, 0x00, // z
	0x3e, 0x38, 0x38, 0xf0, 0x38, 0x38, 0x3e, 0x00, // {
	0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x00, // |
	0xf8, 0x38, 0x38, 0x1e, 0x38, 0x38, 0xf8, 0x00, // }
	0xe6, 0xd6, 0xce, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x3c, 0x42, 0xbd, 0xb1, 0xb1, 0xbd, 0x42, 0x3c, // ©
};