// Clipper font from https://damieng.com/zx-origins
static const uint8_t FONT_CLIPPER_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x38, 0x38, 0x38, 0x38, 0x38, 0x00, 0x38, 0x00, // !
	0x76, 0x76, 0x32, 0x64, 0x00, 0x00, 0x00, 0x00, // "
	0x74, 0xfe, 0xfe, 0x74, 0x74, 0xfe, 0x74, 0x00, // #
	0xfe, 0xfe, 0xd0, 0xfe, 0x12, 0x12, 0xfe, 0x00, // $
	0xe0, 0xe6, 0xec, 0x18, 0x30, 0x66, 0xc6, 0x00, // %
	0xf8, 0xf8, 0xe4, 0x7e, 0xe4, 0xe4, 0xfe, 0x00, // &
	0x38, 0x38, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, // '
	0x1c, 0x3c, 0x70, 0x70, 0x70, 0x30, 0x1c, 0x00, // (
	0x70, 0x78, 0x1c, 0x1c, 0x1c, 0x18, 0x70, 0x00, // )
	0x00, 0x18, 0x18, 0x7e, 0x18, 0x18, 0x00, 0x00, // *
	0x00, 0x34, 0x3c, 0x7e, 0x3c, 0x34, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x18, 0x30, // ,
	0x00, 0x00, 0x00, 0x7e, 0x7e, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x00, // .
	0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0x00, // /
	0xfe, 0xfe, 0xe2, 0xe2, 0xe2, 0xe2, 0xfe, 0x00, // 0
	0x70, 0x70, 0x10, 0x10, 0x10, 0x10, 0x7c, 0x00, // 1
	0xfe, 0xfe, 0x02, 0xfe, 0xe0, 0xe0, 0xfe, 0x00, // 2
	0xfe, 0xfe, 0x02, 0x7e, 0x02, 0x02, 0xfe, 0x00, // 3
	0xfc, 0xfc, 0xe4, 0xe4, 0xe4, 0xfe, 0x04, 0x00, // 4
	0xfe, 0xfe, 0xe0, 0xfe, 0x02, 0x02, 0xfe, 0x00, // 5
	0xfe, 0xfe, 0xe0, 0xfe, 0xe2, 0xe2, 0xfe, 0x00, // 6
	0xfe, 0xfe, 0x82, 0x02, 0x02, 0x02, 0x02, 0x00, // 7
	0xfe, 0xfe, 0xe2, 0xfe, 0xe2, 0xe2, 0xfe, 0x00, // 8
	0xfe, 0xfe, 0xe2, 0xfe, 0x02, 0x02, 0xfe, 0x00, // 9
	0x00, 0x38, 0x38, 0x38, 0x00, 0x38, 0x38, 0x00, // :
	0x00, 0x38, 0x38, 0x38, 0x00, 0x38, 0x18, 0x30, // ;
	0x1e, 0x3c, 0x78, 0x70, 0x30, 0x18, 0x0c, 0x00, // <
	0x00, 0x00, 0x7e, 0x7e, 0x00, 0x7e, 0x00, 0x00, // =
	0xf0, 0x78, 0x3c, 0x1c, 0x18, 0x30, 0x60, 0x00, // >
	0xfe, 0xfe, 0x82, 0x3e, 0x30, 0x00, 0x38, 0x00, // ?
	0xfe, 0xfe, 0xe2, 0xee, 0xea, 0xee, 0xe0, 0xfe, // @
	0xfe, 0xfe, 0xe2, 0xe2, 0xfe, 0xe2, 0xe2, 0x00, // A
	0xfc, 0xfc, 0xe4, 0xfc, 0xe2, 0xe2, 0xfe, 0x00, // B
	0xfe, 0xfe, 0xe2, 0xe0, 0xe0, 0xe2, 0xfe, 0x00, // C
	0xf8, 0xfc, 0xe6, 0xe2, 0xe2, 0xe4, 0xf8, 0x00, // D
	0xfe, 0xfe, 0xe0, 0xfc, 0xe0, 0xe0, 0xfe, 0x00, // E
	0xfe, 0xfe, 0xe0, 0xfc, 0xe0, 0xe0, 0xe0, 0x00, // F
	0xfe, 0xfe, 0xe0, 0xee, 0xe2, 0xe2, 0xfe, 0x00, // G
	0xe2, 0xe2, 0xe2, 0xfe, 0xe2, 0xe2, 0xe2, 0x00, // H
	0x7c, 0x7c, 0x10, 0x10, 0x10, 0x10, 0x7c, 0x00, // I
	0x02, 0x02, 0x02, 0x02, 0xe2, 0xe2, 0xfe, 0x00, // J
	0xe2, 0xe4, 0xe8, 0xf0, 0xe8, 0xe4, 0xe2, 0x00, // K
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xfe, 0x00, // L
	0xfe, 0xfe, 0xea, 0xea, 0xea, 0xea, 0xea, 0x00, // M
	0xfe, 0xfe, 0xe2, 0xe2, 0xe2, 0xe2, 0xe2, 0x00, // N
	0xfe, 0xfe, 0xe2, 0xe2, 0xe2, 0xe2, 0xfe, 0x00, // O
	0xfe, 0xfe, 0xe2, 0xe2, 0xfe, 0xe0, 0xe0, 0x00, // P
	0xfe, 0xfe, 0xe2, 0xe2, 0xe2, 0xe2, 0xfc, 0x0e, // Q
	0xfe, 0xfe, 0xe2, 0xe2, 0xfc, 0xe2, 0xe2, 0x00, // R
	0xfe, 0xfe, 0xe0, 0xfe, 0x02, 0x02, 0xfe, 0x00, // S
	0xfe, 0xfe, 0x38, 0x38, 0x38, 0x38, 0x38, 0x00, // T
	0xe2, 0xe2, 0xe2, 0xe2, 0xe2, 0xe2, 0x7c, 0x00, // U
	0xe2, 0xe2, 0xe2, 0x74, 0x74, 0x34, 0x38, 0x00, // V
	0xea, 0xea, 0xea, 0xea, 0xea, 0xea, 0xfe, 0x00, // W
	0xe2, 0xe2, 0x74, 0x38, 0x74, 0xe2, 0xe2, 0x00, // X
	0xe2, 0xe2, 0xe2, 0xfe, 0x18, 0x18, 0x18, 0x00, // Y
	0xfe, 0xfe, 0x02, 0x0c, 0x30, 0xc0, 0xfe, 0x00, // Z
	0x7e, 0x7e, 0x70, 0x70, 0x70, 0x70, 0x7e, 0x00, // [
	0xc0, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x00, // \
	0x7e, 0x7e, 0x02, 0x02, 0x02, 0x02, 0x7e, 0x00, // ]
	0x10, 0x38, 0x7c, 0xfe, 0x92, 0x10, 0x10, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x7e, 0x7e, 0x72, 0x70, 0xfc, 0x70, 0xfe, 0x00, // £
	0x00, 0xfe, 0xfe, 0x02, 0xfe, 0xe2, 0xfe, 0x00, // a
	0xe0, 0xe0, 0xfe, 0xfe, 0xe2, 0xe2, 0xfe, 0x00, // b
	0x00, 0xfe, 0xfe, 0xe0, 0xe0, 0xe0, 0xfe, 0x00, // c
	0x02, 0x02, 0xfe, 0xfe, 0xe2, 0xe2, 0xfe, 0x00, // d
	0x00, 0xfe, 0xfe, 0xe2, 0xfe, 0xe0, 0xfe, 0x00, // e
	0x3e, 0x3e, 0x38, 0x38, 0xfe, 0x38, 0x38, 0x00, // f
	0x00, 0xfe, 0xfe, 0xe2, 0xfe, 0x02, 0xe2, 0xfe, // g
	0xe0, 0xe0, 0xfe, 0xfe, 0xe2, 0xe2, 0xe2, 0x00, // h
	0x38, 0x38, 0x00, 0x08, 0x08, 0x08, 0x08, 0x00, // i
	0x1c, 0x1c, 0x00, 0x04, 0x04, 0x04, 0xe4, 0xfc, // j
	0xe0, 0xe2, 0xe4, 0xe8, 0xf8, 0xe4, 0xe2, 0x00, // k
	0x38, 0x38, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, // l
	0x00, 0xfe, 0xfe, 0xea, 0xea, 0xea, 0xea, 0x00, // m
	0x00, 0xfe, 0xfe, 0xe2, 0xe2, 0xe2, 0xe2, 0x00, // n
	0x00, 0xfe, 0xfe, 0xe2, 0xe2, 0xe2, 0xfe, 0x00, // o
	0x00, 0xfe, 0xfe, 0xe2, 0xe2, 0xfe, 0xe0, 0xe0, // p
	0x00, 0xfe, 0xfe, 0xe2, 0xe2, 0xfe, 0x02, 0x02, // q
	0x00, 0xfe, 0xfe, 0xe2, 0xe0, 0xe0, 0xe0, 0x00, // r
	0x00, 0xfe, 0xfe, 0xe0, 0xfe, 0x02, 0xfe, 0x00, // s
	0x70, 0xfc, 0x70, 0x70, 0x72, 0x72, 0x7e, 0x00, // t
	0x00, 0xe2, 0xe2, 0xe2, 0xe2, 0xe2, 0xfe, 0x00, // u
	0x00, 0xe2, 0xe2, 0x74, 0x74, 0x38, 0x38, 0x00, // v
	0x00, 0xea, 0xea, 0xea, 0xea, 0xea, 0xfe, 0x00, // w
	0x00, 0xee, 0xee, 0x7c, 0x7c, 0xee, 0xee, 0x00, // x
	0x00, 0xe2, 0xe2, 0xe2, 0xfe, 0x02, 0xe2, 0xfe, // y
	0x00, 0xfe, 0xfe, 0x0c, 0x30, 0xc0, 0xfe, 0x00, // z
	0x1e, 0x1e, 0x10, 0x70, 0x10, 0x10, 0x1e, 0x00, // {
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // |
	0x78, 0x78, 0x08, 0x0e, 0x08, 0x08, 0x78, 0x00, // }
	0xf2, 0xfe, 0xce, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0xff, 0xff, 0xe1, 0xed, 0xe9, 0xed, 0xe1, 0xff, // ©
};