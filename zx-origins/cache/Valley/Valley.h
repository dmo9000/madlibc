// Valley font from https://damieng.com/zx-origins
static const uint8_t FONT_VALLEY_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x08, 0x08, 0x10, 0x10, 0x00, 0x20, 0x20, 0x00, // !
	0x12, 0x36, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x24, 0x24, 0x7e, 0x24, 0x7e, 0x24, 0x24, 0x00, // #
	0x08, 0x1e, 0x28, 0x3c, 0x14, 0x78, 0x10, 0x00, // $
	0x32, 0x34, 0x08, 0x10, 0x10, 0x2c, 0x4c, 0x00, // %
	0x0c, 0x10, 0x21, 0x2e, 0x24, 0x44, 0x7a, 0x00, // &
	0x08, 0x18, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x04, 0x08, 0x10, 0x20, 0x20, 0x20, 0x18, 0x00, // (
	0x18, 0x04, 0x04, 0x04, 0x08, 0x10, 0x20, 0x00, // )
	0x00, 0x14, 0x18, 0x66, 0x18, 0x28, 0x00, 0x00, // *
	0x00, 0x08, 0x08, 0x7e, 0x10, 0x10, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x30, 0x40, // ,
	0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x00, // .
	0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, // /
	0x1c, 0x22, 0x26, 0x5a, 0x64, 0x44, 0x38, 0x00, // 0
	0x04, 0x0c, 0x18, 0x08, 0x08, 0x10, 0x10, 0x00, // 1
	0x1c, 0x22, 0x22, 0x0c, 0x30, 0x40, 0x7c, 0x00, // 2
	0x1e, 0x22, 0x04, 0x18, 0x04, 0x44, 0x38, 0x00, // 3
	0x10, 0x12, 0x24, 0x44, 0x7c, 0x08, 0x08, 0x00, // 4
	0x1e, 0x10, 0x20, 0x38, 0x04, 0x04, 0x78, 0x00, // 5
	0x0c, 0x10, 0x20, 0x3c, 0x44, 0x44, 0x78, 0x00, // 6
	0x3e, 0x22, 0x04, 0x08, 0x08, 0x10, 0x10, 0x00, // 7
	0x1c, 0x22, 0x24, 0x18, 0x24, 0x44, 0x38, 0x00, // 8
	0x0e, 0x12, 0x22, 0x3c, 0x04, 0x08, 0x30, 0x00, // 9
	0x00, 0x00, 0x10, 0x10, 0x00, 0x20, 0x20, 0x00, // :
	0x00, 0x00, 0x08, 0x08, 0x00, 0x10, 0x30, 0x40, // ;
	0x04, 0x08, 0x10, 0x20, 0x20, 0x10, 0x10, 0x00, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, // =
	0x08, 0x08, 0x04, 0x04, 0x08, 0x10, 0x20, 0x00, // >
	0x3c, 0x22, 0x04, 0x08, 0x10, 0x00, 0x30, 0x00, // ?
	0x1e, 0x22, 0x2e, 0x52, 0x5c, 0x40, 0x7c, 0x00, // @
	0x06, 0x06, 0x0a, 0x72, 0x1a, 0x26, 0x42, 0x00, // A
	0x3c, 0x12, 0x22, 0x2c, 0x24, 0x44, 0xf8, 0x00, // B
	0x1c, 0x22, 0x22, 0x20, 0x44, 0x44, 0x38, 0x00, // C
	0x3c, 0x12, 0x22, 0x22, 0x44, 0x44, 0xf8, 0x00, // D
	0x1e, 0x22, 0x20, 0x38, 0x40, 0x44, 0x78, 0x00, // E
	0x7f, 0x89, 0x88, 0x3c, 0x10, 0x10, 0x60, 0x00, // F
	0x3e, 0x22, 0x20, 0x46, 0x4a, 0x34, 0x04, 0x78, // G
	0x62, 0x22, 0x22, 0xfc, 0x44, 0x44, 0x44, 0x00, // H
	0x3c, 0x44, 0x44, 0x08, 0x08, 0x08, 0x30, 0x00, // I
	0x3c, 0x44, 0x44, 0x44, 0x08, 0x08, 0x08, 0x70, // J
	0x31, 0x12, 0x14, 0x78, 0x24, 0x24, 0x43, 0x00, // K
	0x0c, 0x10, 0x10, 0x10, 0x22, 0x22, 0x7c, 0x00, // L
	0xf6, 0x49, 0x49, 0x49, 0x92, 0x92, 0x92, 0x00, // M
	0x7c, 0x22, 0x22, 0x22, 0x44, 0x44, 0x44, 0x00, // N
	0x1c, 0x22, 0x22, 0x42, 0x44, 0x44, 0x38, 0x00, // O
	0x7c, 0x02, 0x22, 0x24, 0x78, 0x40, 0x80, 0x00, // P
	0x1c, 0x22, 0x02, 0x22, 0x54, 0x38, 0x10, 0x0c, // Q
	0x7c, 0x02, 0x22, 0x24, 0x78, 0x48, 0x84, 0x00, // R
	0x0e, 0x12, 0x20, 0x18, 0x04, 0x04, 0x78, 0x00, // S
	0x3f, 0x48, 0x48, 0x08, 0x10, 0x10, 0x60, 0x00, // T
	0x62, 0x22, 0x22, 0x44, 0x44, 0x44, 0x38, 0x00, // U
	0x66, 0x22, 0x24, 0x48, 0x48, 0x50, 0x60, 0x00, // V
	0xc1, 0x49, 0x49, 0x92, 0x92, 0x92, 0xec, 0x00, // W
	0x22, 0x24, 0x18, 0x10, 0x30, 0x48, 0x88, 0x00, // X
	0x21, 0x22, 0x24, 0x18, 0x10, 0x20, 0xc0, 0x00, // Y
	0x1e, 0x22, 0x04, 0x08, 0x10, 0x22, 0x7c, 0x00, // Z
	0x1c, 0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x70, // [
	0x10, 0x10, 0x10, 0x10, 0x08, 0x08, 0x08, 0x08, // \
	0x1c, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x70, // ]
	0x08, 0x1c, 0x2a, 0x08, 0x10, 0x10, 0x10, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x0e, 0x12, 0x20, 0x78, 0x20, 0x62, 0x5c, 0x00, // £
	0x00, 0x00, 0x00, 0x3e, 0x44, 0x4c, 0x74, 0x00, // a
	0x10, 0x10, 0x20, 0x3c, 0x44, 0x44, 0x78, 0x00, // b
	0x00, 0x00, 0x00, 0x3c, 0x44, 0x40, 0x78, 0x00, // c
	0x02, 0x02, 0x04, 0x3c, 0x44, 0x44, 0x78, 0x00, // d
	0x00, 0x00, 0x00, 0x3c, 0x48, 0x50, 0x7c, 0x00, // e
	0x06, 0x08, 0x10, 0x7c, 0x10, 0x20, 0x20, 0xc0, // f
	0x00, 0x00, 0x00, 0x1e, 0x22, 0x3c, 0x04, 0x78, // g
	0x10, 0x10, 0x20, 0x3c, 0x44, 0x44, 0x48, 0x00, // h
	0x04, 0x04, 0x00, 0x18, 0x08, 0x10, 0x18, 0x00, // i
	0x02, 0x02, 0x00, 0x04, 0x08, 0x08, 0x08, 0x70, // j
	0x10, 0x10, 0x20, 0x2c, 0x50, 0x48, 0x44, 0x00, // k
	0x18, 0x04, 0x08, 0x08, 0x10, 0x10, 0x0c, 0x00, // l
	0x00, 0x00, 0x00, 0x7c, 0x52, 0x94, 0xa4, 0x00, // m
	0x00, 0x00, 0x00, 0x3c, 0x24, 0x44, 0x48, 0x00, // n
	0x00, 0x00, 0x00, 0x3c, 0x44, 0x44, 0x78, 0x00, // o
	0x00, 0x00, 0x00, 0x3e, 0x22, 0x3c, 0x40, 0x40, // p
	0x00, 0x00, 0x00, 0x3e, 0x42, 0x7c, 0x04, 0x06, // q
	0x00, 0x00, 0x00, 0x3c, 0x24, 0x40, 0x40, 0x00, // r
	0x00, 0x00, 0x00, 0x0e, 0x10, 0x08, 0x78, 0x00, // s
	0x08, 0x08, 0x10, 0x1c, 0x20, 0x20, 0x3c, 0x00, // t
	0x00, 0x00, 0x00, 0x24, 0x44, 0x48, 0x78, 0x00, // u
	0x00, 0x00, 0x00, 0x44, 0x48, 0x50, 0x60, 0x00, // v
	0x00, 0x00, 0x00, 0x82, 0x84, 0xb4, 0xd8, 0x00, // w
	0x00, 0x00, 0x00, 0x24, 0x18, 0x30, 0x48, 0x00, // x
	0x00, 0x00, 0x00, 0x12, 0x22, 0x3c, 0x04, 0x78, // y
	0x00, 0x00, 0x00, 0x1c, 0x08, 0x10, 0x3c, 0x00, // z
	0x0c, 0x08, 0x18, 0x60, 0x10, 0x20, 0x20, 0x30, // {
	0x08, 0x08, 0x08, 0x08, 0x10, 0x10, 0x10, 0x10, // |
	0x0c, 0x04, 0x08, 0x06, 0x08, 0x10, 0x10, 0x30, // }
	0x00, 0x14, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x1e, 0x21, 0x2d, 0x51, 0x5a, 0x42, 0x7c, 0x00, // ©
};