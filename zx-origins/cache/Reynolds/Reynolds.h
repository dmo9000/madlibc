// Reynolds font from https://damieng.com/zx-origins
static const uint8_t FONT_REYNOLDS_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x08, 0x08, 0x10, 0x00, 0x10, 0x30, 0x00, // !
	0x00, 0x24, 0x24, 0x48, 0x00, 0x00, 0x00, 0x00, // "
	0x00, 0x24, 0x7e, 0x24, 0x48, 0xfc, 0x48, 0x00, // #
	0x08, 0x3c, 0x48, 0x7e, 0x12, 0x7c, 0x10, 0x00, // $
	0x00, 0x34, 0x54, 0x68, 0x16, 0x2a, 0x2c, 0x00, // %
	0x00, 0x1c, 0x24, 0x44, 0x36, 0x44, 0x7e, 0x00, // &
	0x00, 0x08, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x00, 0x3c, 0x20, 0x20, 0x20, 0x10, 0x0c, 0x00, // (
	0x00, 0x3c, 0x04, 0x04, 0x04, 0x08, 0x30, 0x00, // )
	0x00, 0x10, 0x54, 0x38, 0x54, 0x10, 0x00, 0x00, // *
	0x00, 0x10, 0x10, 0x7c, 0x10, 0x10, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x30, 0x00, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, // .
	0x00, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x00, // /
	0x00, 0x1e, 0x22, 0x42, 0x42, 0x42, 0x7e, 0x00, // 0
	0x00, 0x30, 0x10, 0x10, 0x10, 0x10, 0x38, 0x00, // 1
	0x00, 0x7e, 0x42, 0x06, 0x18, 0x60, 0x7e, 0x00, // 2
	0x00, 0x7e, 0x42, 0x1e, 0x02, 0x44, 0x78, 0x00, // 3
	0x00, 0x04, 0x24, 0x44, 0x7e, 0x04, 0x04, 0x00, // 4
	0x00, 0x7e, 0x40, 0x7e, 0x02, 0x44, 0x78, 0x00, // 5
	0x00, 0x7e, 0x40, 0x7e, 0x42, 0x44, 0x78, 0x00, // 6
	0x00, 0x78, 0x44, 0x02, 0x02, 0x02, 0x02, 0x00, // 7
	0x00, 0x7e, 0x42, 0x3c, 0x42, 0x44, 0x78, 0x00, // 8
	0x00, 0x1e, 0x22, 0x42, 0x7e, 0x02, 0x7c, 0x00, // 9
	0x00, 0x00, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, // :
	0x00, 0x00, 0x10, 0x10, 0x00, 0x10, 0x30, 0x00, // ;
	0x00, 0x08, 0x10, 0x20, 0x10, 0x08, 0x00, 0x00, // <
	0x00, 0x00, 0x7c, 0x00, 0x7c, 0x00, 0x00, 0x00, // =
	0x00, 0x10, 0x08, 0x04, 0x08, 0x10, 0x00, 0x00, // >
	0x00, 0x7e, 0x02, 0x1c, 0x00, 0x10, 0x30, 0x00, // ?
	0x00, 0x1e, 0x22, 0x4e, 0x52, 0x4e, 0x40, 0x7e, // @
	0x00, 0x1e, 0x22, 0x42, 0x7e, 0x42, 0x42, 0x00, // A
	0x00, 0x78, 0x44, 0x7e, 0x42, 0x42, 0x7e, 0x00, // B
	0x00, 0x78, 0x44, 0x40, 0x40, 0x42, 0x7e, 0x00, // C
	0x00, 0x78, 0x44, 0x42, 0x42, 0x42, 0x7e, 0x00, // D
	0x00, 0x7e, 0x42, 0x78, 0x40, 0x22, 0x1e, 0x00, // E
	0x00, 0x1e, 0x22, 0x40, 0x78, 0x40, 0x40, 0x00, // F
	0x00, 0x1e, 0x22, 0x40, 0x4e, 0x42, 0x7e, 0x00, // G
	0x00, 0x42, 0x42, 0x7e, 0x42, 0x42, 0x42, 0x00, // H
	0x00, 0x7c, 0x10, 0x10, 0x10, 0x10, 0x7c, 0x00, // I
	0x00, 0x06, 0x02, 0x02, 0x02, 0x44, 0x78, 0x00, // J
	0x00, 0x42, 0x44, 0x78, 0x44, 0x42, 0x42, 0x00, // K
	0x00, 0x60, 0x40, 0x40, 0x40, 0x22, 0x1e, 0x00, // L
	0x00, 0xf8, 0x94, 0x92, 0x92, 0x92, 0x92, 0x00, // M
	0x00, 0x78, 0x44, 0x42, 0x42, 0x42, 0x42, 0x00, // N
	0x00, 0x1e, 0x22, 0x42, 0x42, 0x42, 0x7e, 0x00, // O
	0x00, 0x78, 0x44, 0x42, 0x7e, 0x40, 0x40, 0x00, // P
	0x00, 0x7e, 0x42, 0x42, 0x4a, 0x44, 0x7a, 0x00, // Q
	0x00, 0x78, 0x44, 0x42, 0x7e, 0x44, 0x42, 0x00, // R
	0x00, 0x7c, 0x40, 0x7e, 0x02, 0x44, 0x78, 0x00, // S
	0x00, 0x7c, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // T
	0x00, 0x42, 0x42, 0x42, 0x42, 0x22, 0x1e, 0x00, // U
	0x00, 0x42, 0x42, 0x42, 0x44, 0x28, 0x10, 0x00, // V
	0x00, 0x92, 0x92, 0x92, 0x92, 0x52, 0x3e, 0x00, // W
	0x00, 0x42, 0x24, 0x18, 0x24, 0x42, 0x42, 0x00, // X
	0x00, 0x42, 0x42, 0x22, 0x1e, 0x02, 0x7e, 0x00, // Y
	0x00, 0x7e, 0x04, 0x08, 0x10, 0x22, 0x7e, 0x00, // Z
	0x00, 0x3c, 0x20, 0x20, 0x20, 0x20, 0x3c, 0x00, // [
	0x00, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00, // \
	0x00, 0x3c, 0x04, 0x04, 0x04, 0x04, 0x3c, 0x00, // ]
	0x00, 0x10, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x00, 0x0e, 0x12, 0x20, 0x78, 0x20, 0x3e, 0x00, // £
	0x00, 0x00, 0x38, 0x04, 0x7e, 0x42, 0x7e, 0x00, // a
	0x00, 0x40, 0x78, 0x44, 0x42, 0x42, 0x7e, 0x00, // b
	0x00, 0x00, 0x1e, 0x22, 0x40, 0x40, 0x7e, 0x00, // c
	0x00, 0x02, 0x1e, 0x22, 0x42, 0x42, 0x7e, 0x00, // d
	0x00, 0x00, 0x7e, 0x42, 0x5e, 0x20, 0x1e, 0x00, // e
	0x00, 0x0e, 0x12, 0x20, 0x78, 0x20, 0x20, 0x00, // f
	0x00, 0x00, 0x1e, 0x22, 0x42, 0x7e, 0x02, 0x7e, // g
	0x00, 0x40, 0x4e, 0x52, 0x62, 0x42, 0x42, 0x00, // h
	0x00, 0x10, 0x00, 0x10, 0x10, 0x10, 0x10, 0x00, // i
	0x00, 0x02, 0x00, 0x02, 0x02, 0x44, 0x78, 0x00, // j
	0x00, 0x40, 0x44, 0x48, 0x78, 0x44, 0x42, 0x00, // k
	0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // l
	0x00, 0x00, 0xf8, 0x94, 0x92, 0x92, 0x92, 0x00, // m
	0x00, 0x00, 0x4e, 0x52, 0x62, 0x42, 0x42, 0x00, // n
	0x00, 0x00, 0x1e, 0x22, 0x42, 0x42, 0x7e, 0x00, // o
	0x00, 0x00, 0x7e, 0x42, 0x42, 0x44, 0x78, 0x40, // p
	0x00, 0x00, 0x7e, 0x42, 0x42, 0x22, 0x1e, 0x02, // q
	0x00, 0x00, 0x5e, 0x62, 0x40, 0x40, 0x40, 0x00, // r
	0x00, 0x00, 0x3c, 0x40, 0x7e, 0x02, 0x7c, 0x00, // s
	0x00, 0x20, 0x70, 0x20, 0x20, 0x12, 0x0e, 0x00, // t
	0x00, 0x00, 0x42, 0x42, 0x42, 0x22, 0x1e, 0x00, // u
	0x00, 0x00, 0x42, 0x42, 0x44, 0x48, 0x70, 0x00, // v
	0x00, 0x00, 0x92, 0x92, 0x92, 0x94, 0xf8, 0x00, // w
	0x00, 0x00, 0x42, 0x24, 0x18, 0x24, 0x42, 0x00, // x
	0x00, 0x00, 0x42, 0x42, 0x7e, 0x02, 0x44, 0x78, // y
	0x00, 0x00, 0x3e, 0x44, 0x18, 0x22, 0x7c, 0x00, // z
	0x00, 0x1e, 0x10, 0x70, 0x10, 0x08, 0x06, 0x00, // {
	0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // |
	0x00, 0x78, 0x08, 0x0e, 0x08, 0x10, 0x60, 0x00, // }
	0x00, 0x60, 0x54, 0x0c, 0x00, 0x00, 0x00, 0x00, // ~
	0x1f, 0x21, 0x4d, 0x95, 0xa1, 0xbd, 0x81, 0xff, // ©
};