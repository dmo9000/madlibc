// Orbiter font from https://damieng.com/zx-origins
static const uint8_t FONT_ORBITER_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x10, 0x10, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, // !
	0x24, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x00, 0x28, 0x7c, 0x28, 0x7c, 0x28, 0x00, 0x00, // #
	0x08, 0x3e, 0x40, 0x3c, 0x02, 0x7c, 0x10, 0x00, // $
	0x40, 0xa4, 0x48, 0x10, 0x24, 0x4a, 0x04, 0x00, // %
	0x30, 0x48, 0x48, 0x30, 0x4a, 0x4c, 0x32, 0x00, // &
	0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x08, 0x10, 0x20, 0x20, 0x20, 0x10, 0x08, 0x00, // (
	0x20, 0x10, 0x08, 0x08, 0x08, 0x10, 0x20, 0x00, // )
	0x00, 0x10, 0x54, 0x38, 0x54, 0x10, 0x00, 0x00, // *
	0x00, 0x10, 0x10, 0x7c, 0x10, 0x10, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, // .
	0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, // /
	0x18, 0x24, 0x42, 0x42, 0x42, 0x24, 0x18, 0x00, // 0
	0x30, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, // 1
	0x7c, 0x02, 0x02, 0x0c, 0x30, 0x40, 0x7e, 0x00, // 2
	0x7c, 0x02, 0x02, 0x3c, 0x02, 0x02, 0x7c, 0x00, // 3
	0x0c, 0x12, 0x22, 0x42, 0x3e, 0x02, 0x02, 0x00, // 4
	0x7e, 0x40, 0x40, 0x7c, 0x02, 0x02, 0x7c, 0x00, // 5
	0x3e, 0x40, 0x40, 0x7c, 0x42, 0x42, 0x3c, 0x00, // 6
	0x7c, 0x02, 0x02, 0x04, 0x08, 0x10, 0x20, 0x00, // 7
	0x3c, 0x42, 0x42, 0x3c, 0x42, 0x42, 0x3c, 0x00, // 8
	0x3c, 0x42, 0x42, 0x3e, 0x02, 0x02, 0x7c, 0x00, // 9
	0x00, 0x00, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, // :
	0x00, 0x00, 0x10, 0x10, 0x00, 0x10, 0x10, 0x10, // ;
	0x04, 0x08, 0x10, 0x20, 0x10, 0x08, 0x04, 0x00, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, // =
	0x20, 0x10, 0x08, 0x04, 0x08, 0x10, 0x20, 0x00, // >
	0x7c, 0x02, 0x02, 0x1c, 0x00, 0x10, 0x10, 0x00, // ?
	0x1c, 0x22, 0x4e, 0x52, 0x4c, 0x20, 0x1e, 0x00, // @
	0x18, 0x18, 0x24, 0x24, 0x42, 0x42, 0x42, 0x00, // A
	0x7c, 0x42, 0x42, 0x7c, 0x42, 0x42, 0x7c, 0x00, // B
	0x3e, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3e, 0x00, // C
	0x78, 0x44, 0x42, 0x42, 0x42, 0x44, 0x78, 0x00, // D
	0x3e, 0x40, 0x40, 0x3e, 0x40, 0x40, 0x3e, 0x00, // E
	0x3e, 0x40, 0x40, 0x7e, 0x40, 0x40, 0x40, 0x00, // F
	0x3c, 0x42, 0x40, 0x5c, 0x42, 0x42, 0x3c, 0x00, // G
	0x42, 0x42, 0x42, 0x7e, 0x42, 0x42, 0x42, 0x00, // H
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // I
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x7c, 0x00, // J
	0x42, 0x42, 0x44, 0x78, 0x44, 0x42, 0x42, 0x00, // K
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3e, 0x00, // L
	0x44, 0xaa, 0xaa, 0x92, 0x92, 0x82, 0x82, 0x00, // M
	0x62, 0x92, 0x92, 0x92, 0x92, 0x92, 0x8c, 0x00, // N
	0x3c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x00, // O
	0x7c, 0x02, 0x02, 0x7c, 0x40, 0x40, 0x40, 0x00, // P
	0x3c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x08, // Q
	0x7c, 0x02, 0x02, 0x7c, 0x44, 0x42, 0x42, 0x00, // R
	0x3e, 0x40, 0x40, 0x3c, 0x02, 0x02, 0x7c, 0x00, // S
	0xfe, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // T
	0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x00, // U
	0x42, 0x42, 0x42, 0x24, 0x24, 0x18, 0x18, 0x00, // V
	0x82, 0x82, 0x92, 0x92, 0xaa, 0xaa, 0x44, 0x00, // W
	0x42, 0x24, 0x18, 0x18, 0x18, 0x24, 0x42, 0x00, // X
	0x82, 0x82, 0x44, 0x38, 0x10, 0x10, 0x10, 0x00, // Y
	0x7e, 0x04, 0x08, 0x10, 0x20, 0x40, 0x7e, 0x00, // Z
	0x3c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3c, // [
	0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00, // \
	0x3c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x3c, // ]
	0x18, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x3c, 0x42, 0x40, 0x78, 0x40, 0x40, 0x7e, 0x00, // £
	0x00, 0x7c, 0x02, 0x3e, 0x42, 0x42, 0x3e, 0x00, // a
	0x40, 0x7c, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x00, // b
	0x00, 0x3e, 0x40, 0x40, 0x40, 0x40, 0x3e, 0x00, // c
	0x02, 0x3e, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x00, // d
	0x00, 0x3c, 0x42, 0x42, 0x7c, 0x40, 0x3e, 0x00, // e
	0x1c, 0x20, 0x20, 0x78, 0x20, 0x20, 0x20, 0x00, // f
	0x00, 0x3c, 0x42, 0x42, 0x42, 0x3e, 0x02, 0x7c, // g
	0x40, 0x7c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00, // h
	0x10, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // i
	0x08, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x70, // j
	0x40, 0x40, 0x42, 0x4c, 0x70, 0x4c, 0x42, 0x00, // k
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // l
	0x00, 0x6c, 0x92, 0x92, 0x92, 0x92, 0x82, 0x00, // m
	0x00, 0x3c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00, // n
	0x00, 0x3c, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x00, // o
	0x00, 0x7c, 0x42, 0x42, 0x42, 0x7c, 0x40, 0x40, // p
	0x00, 0x3e, 0x42, 0x42, 0x42, 0x3e, 0x02, 0x02, // q
	0x00, 0x3c, 0x42, 0x40, 0x40, 0x40, 0x40, 0x00, // r
	0x00, 0x3e, 0x40, 0x3c, 0x02, 0x02, 0x7c, 0x00, // s
	0x20, 0x7c, 0x20, 0x20, 0x20, 0x20, 0x1e, 0x00, // t
	0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x00, // u
	0x00, 0x42, 0x42, 0x42, 0x42, 0x24, 0x18, 0x00, // v
	0x00, 0x82, 0x92, 0x92, 0x92, 0x92, 0x6c, 0x00, // w
	0x00, 0x42, 0x24, 0x18, 0x18, 0x24, 0x42, 0x00, // x
	0x00, 0x42, 0x42, 0x42, 0x24, 0x1c, 0x08, 0x70, // y
	0x00, 0x7e, 0x04, 0x08, 0x10, 0x20, 0x7e, 0x00, // z
	0x08, 0x08, 0x10, 0x60, 0x10, 0x08, 0x08, 0x00, // {
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // |
	0x20, 0x20, 0x10, 0x0c, 0x10, 0x20, 0x20, 0x00, // }
	0x62, 0x92, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x3c, 0x42, 0x9d, 0xa1, 0xa1, 0x9d, 0x42, 0x3c, // ©
};