// Undead font from https://damieng.com/zx-origins
static const uint8_t FONT_UNDEAD_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x08, 0x18, 0x08, 0x08, 0x08, 0x00, 0x18, 0x00, // !
	0x36, 0x24, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x24, 0x24, 0x7e, 0x24, 0x7e, 0x24, 0x24, 0x00, // #
	0x00, 0x04, 0x3c, 0x48, 0x3c, 0x12, 0x3c, 0x20, // $
	0x66, 0x64, 0x08, 0x18, 0x10, 0x26, 0x66, 0x00, // %
	0x1c, 0x24, 0x20, 0x36, 0x4c, 0x88, 0x76, 0x00, // &
	0x18, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x08, 0x10, 0x20, 0x20, 0x20, 0x10, 0x08, 0x00, // (
	0x20, 0x10, 0x08, 0x08, 0x08, 0x10, 0x20, 0x00, // )
	0x10, 0x10, 0xaa, 0x44, 0x28, 0x54, 0x44, 0x00, // *
	0x10, 0x10, 0x10, 0xfe, 0x10, 0x10, 0x10, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x10, 0x20, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, // .
	0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, // /
	0x38, 0x44, 0x8a, 0x92, 0xa2, 0x44, 0x38, 0x00, // 0
	0x08, 0x18, 0x28, 0x08, 0x08, 0x08, 0x18, 0x00, // 1
	0x3c, 0x42, 0x64, 0x08, 0x10, 0x22, 0x7e, 0x00, // 2
	0x3e, 0x44, 0x08, 0x1c, 0x42, 0x42, 0x3c, 0x00, // 3
	0x10, 0x24, 0x24, 0x44, 0x7e, 0x04, 0x0e, 0x00, // 4
	0x3e, 0x22, 0x70, 0x0c, 0x42, 0x42, 0x3c, 0x00, // 5
	0x08, 0x10, 0x20, 0x5c, 0x62, 0x42, 0x3c, 0x00, // 6
	0x3e, 0x42, 0x04, 0x1c, 0x08, 0x10, 0x10, 0x00, // 7
	0x18, 0x24, 0x18, 0x24, 0x42, 0x42, 0x3c, 0x00, // 8
	0x3c, 0x42, 0x46, 0x3a, 0x04, 0x08, 0x10, 0x00, // 9
	0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x00, // :
	0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x10, 0x20, // ;
	0x00, 0x00, 0x04, 0x08, 0x10, 0x08, 0x04, 0x00, // <
	0x00, 0x00, 0x00, 0x3e, 0x00, 0x3e, 0x00, 0x00, // =
	0x00, 0x00, 0x10, 0x08, 0x04, 0x08, 0x10, 0x00, // >
	0x3c, 0x22, 0x42, 0x0c, 0x10, 0x00, 0x18, 0x00, // ?
	0x38, 0x44, 0x9a, 0xaa, 0x9e, 0x40, 0x3c, 0x00, // @
	0x30, 0x10, 0x28, 0x28, 0x7c, 0x44, 0xc2, 0x02, // A
	0xf8, 0x44, 0x44, 0xfc, 0x42, 0x42, 0xfc, 0x00, // B
	0x1c, 0x22, 0x40, 0x40, 0x40, 0x22, 0x1c, 0x00, // C
	0xf8, 0x44, 0x42, 0x42, 0x42, 0x44, 0xf8, 0x00, // D
	0x7e, 0x22, 0x20, 0x7c, 0x20, 0x22, 0x7e, 0x00, // E
	0x7e, 0x22, 0x20, 0x7c, 0x20, 0x20, 0x70, 0x20, // F
	0x1c, 0x22, 0x40, 0x4e, 0x42, 0x26, 0x1a, 0x02, // G
	0x42, 0x42, 0x42, 0x7e, 0x42, 0x42, 0x42, 0x00, // H
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x38, 0x00, // I
	0x38, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x20, // J
	0xe6, 0x44, 0x48, 0xf0, 0x48, 0x44, 0xe6, 0x00, // K
	0x70, 0x20, 0x20, 0x20, 0x20, 0x22, 0x7e, 0x00, // L
	0xfe, 0x92, 0x92, 0x92, 0x92, 0x92, 0xd6, 0x10, // M
	0xc7, 0x62, 0x52, 0x4a, 0x46, 0x42, 0xe2, 0x02, // N
	0x38, 0x54, 0x92, 0xfe, 0x92, 0x54, 0x38, 0x00, // O
	0x7c, 0x22, 0x22, 0x7c, 0x20, 0x20, 0x70, 0x00, // P
	0x38, 0x44, 0x82, 0x82, 0x92, 0x54, 0x38, 0x10, // Q
	0xf8, 0x44, 0x44, 0xf8, 0x50, 0x48, 0xe4, 0x02, // R
	0x3c, 0x44, 0x20, 0x18, 0x04, 0x42, 0x7c, 0x00, // S
	0xfe, 0x92, 0x10, 0x10, 0x10, 0x10, 0x38, 0x10, // T
	0xe7, 0x42, 0x42, 0x42, 0x42, 0x24, 0x18, 0x00, // U
	0xe7, 0x42, 0x42, 0x24, 0x24, 0x18, 0x18, 0x00, // V
	0xc6, 0x82, 0x92, 0x92, 0x6c, 0x44, 0x44, 0x00, // W
	0xc6, 0x44, 0x28, 0x10, 0x28, 0x44, 0xc6, 0x00, // X
	0xc6, 0x44, 0x28, 0x10, 0x10, 0x38, 0x10, 0x10, // Y
	0xfe, 0x84, 0x08, 0x10, 0x20, 0x42, 0xfe, 0x00, // Z
	0x7c, 0x24, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x00, // [
	0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x02, // \
	0x7c, 0x48, 0x08, 0x08, 0x08, 0x08, 0x7c, 0x00, // ]
	0x10, 0x38, 0x54, 0x10, 0x10, 0x10, 0x10, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x1c, 0x12, 0x20, 0xfc, 0x20, 0xc2, 0xfc, 0x00, // £
	0x00, 0x00, 0x74, 0x8c, 0x84, 0x8c, 0x76, 0x00, // a
	0x40, 0xc0, 0x5c, 0x62, 0x42, 0x42, 0x7c, 0x00, // b
	0x00, 0x00, 0x3c, 0x42, 0x40, 0x42, 0x3c, 0x00, // c
	0x04, 0x06, 0x74, 0x8c, 0x84, 0x84, 0x7c, 0x00, // d
	0x00, 0x00, 0x3c, 0x44, 0x48, 0x50, 0x3e, 0x00, // e
	0x0c, 0x12, 0x10, 0x7e, 0x10, 0x10, 0x38, 0x10, // f
	0x00, 0x00, 0x3a, 0x44, 0x44, 0x38, 0x42, 0x7c, // g
	0x40, 0xc0, 0x5c, 0x62, 0x42, 0x42, 0x42, 0x40, // h
	0x08, 0x00, 0x18, 0x08, 0x08, 0x08, 0x18, 0x00, // i
	0x08, 0x00, 0x18, 0x08, 0x08, 0x08, 0x08, 0x10, // j
	0x60, 0x20, 0x22, 0x24, 0x28, 0x24, 0x66, 0x00, // k
	0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x18, 0x00, // l
	0x00, 0x00, 0xfe, 0x92, 0x92, 0x92, 0xd6, 0x10, // m
	0x00, 0x00, 0xdc, 0x62, 0x42, 0x42, 0x42, 0x02, // n
	0x00, 0x00, 0x3c, 0x42, 0x42, 0x42, 0x3c, 0x00, // o
	0x00, 0x00, 0xdc, 0x62, 0x42, 0x7c, 0x40, 0x60, // p
	0x00, 0x00, 0x74, 0x8c, 0x84, 0x7c, 0x04, 0x06, // q
	0x00, 0x00, 0xcc, 0x72, 0x40, 0x40, 0xc0, 0x00, // r
	0x00, 0x00, 0x38, 0x40, 0x3c, 0x02, 0x3c, 0x00, // s
	0x30, 0x10, 0x7c, 0x10, 0x10, 0x10, 0x10, 0x10, // t
	0x00, 0x00, 0xc4, 0x84, 0x84, 0x8c, 0x76, 0x00, // u
	0x00, 0x00, 0xc6, 0x44, 0x28, 0x10, 0x10, 0x00, // v
	0x00, 0x00, 0xc6, 0x54, 0x54, 0x28, 0x28, 0x00, // w
	0x00, 0x00, 0x46, 0x24, 0x18, 0x24, 0x62, 0x00, // x
	0x00, 0x00, 0xc6, 0x44, 0x28, 0x10, 0x10, 0x10, // y
	0x00, 0x00, 0x3e, 0x44, 0x18, 0x22, 0x7e, 0x00, // z
	0x1c, 0x10, 0x10, 0x60, 0x10, 0x10, 0x1c, 0x00, // {
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // |
	0x70, 0x10, 0x10, 0x0c, 0x10, 0x10, 0x70, 0x00, // }
	0x00, 0x14, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x3c, 0x42, 0x99, 0xa5, 0xa1, 0x99, 0x42, 0x3c, // ©
};