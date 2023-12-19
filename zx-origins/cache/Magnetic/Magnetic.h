// Magnetic font from https://damieng.com/zx-origins
static const uint8_t FONT_MAGNETIC_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x10, 0x10, 0x18, 0x18, 0x18, 0x00, 0x18, 0x00, // !
	0x6c, 0x6c, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x00, 0x34, 0x7e, 0x34, 0x2c, 0x7e, 0x2c, 0x00, // #
	0x00, 0x10, 0x7c, 0x40, 0x7c, 0x0c, 0x7c, 0x10, // $
	0xe2, 0xae, 0xe8, 0x78, 0xee, 0xce, 0xce, 0x00, // %
	0x7c, 0x44, 0x6c, 0x38, 0x6e, 0x64, 0x7e, 0x00, // &
	0x18, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x08, 0x10, 0x20, 0x20, 0x20, 0x10, 0x08, 0x00, // (
	0x20, 0x10, 0x08, 0x08, 0x08, 0x10, 0x20, 0x00, // )
	0x00, 0x10, 0x7c, 0x38, 0x7c, 0x10, 0x00, 0x00, // *
	0x00, 0x10, 0x10, 0x7e, 0x18, 0x18, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x08, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, // .
	0x02, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x60, 0x00, // /
	0x7e, 0x42, 0x42, 0x42, 0x42, 0x42, 0x7e, 0x00, // 0
	0x30, 0x10, 0x10, 0x10, 0x3c, 0x3c, 0x3c, 0x00, // 1
	0x3c, 0x04, 0x04, 0x3c, 0x20, 0x20, 0x3c, 0x00, // 2
	0x78, 0x08, 0x08, 0x3c, 0x0c, 0x0c, 0x7c, 0x00, // 3
	0x60, 0x60, 0x60, 0x6c, 0x7c, 0x0c, 0x0c, 0x00, // 4
	0x7c, 0x40, 0x40, 0x7c, 0x04, 0x04, 0x7c, 0x00, // 5
	0x70, 0x50, 0x40, 0x40, 0x7c, 0x44, 0x7c, 0x00, // 6
	0x7c, 0x44, 0x04, 0x08, 0x10, 0x10, 0x10, 0x00, // 7
	0x3c, 0x24, 0x24, 0x7e, 0x66, 0x66, 0x7e, 0x00, // 8
	0x7c, 0x44, 0x44, 0x7c, 0x0c, 0x0c, 0x0c, 0x00, // 9
	0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x00, // :
	0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x08, // ;
	0x00, 0x08, 0x10, 0x60, 0x30, 0x18, 0x18, 0x00, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, // =
	0x00, 0x10, 0x08, 0x06, 0x0c, 0x18, 0x18, 0x00, // >
	0x7e, 0x42, 0x02, 0x1e, 0x18, 0x00, 0x18, 0x00, // ?
	0xfe, 0x82, 0x9e, 0xd2, 0xde, 0xc0, 0xfe, 0x00, // @
	0x3c, 0x24, 0x24, 0x7e, 0x66, 0x66, 0x66, 0x00, // A
	0x7c, 0x44, 0x44, 0x7e, 0x66, 0x66, 0x7e, 0x00, // B
	0x78, 0x48, 0x40, 0x60, 0x64, 0x64, 0x7c, 0x00, // C
	0x78, 0x44, 0x44, 0x64, 0x64, 0x64, 0x78, 0x00, // D
	0x3c, 0x20, 0x20, 0x78, 0x60, 0x60, 0x7c, 0x00, // E
	0x3c, 0x20, 0x20, 0x78, 0x60, 0x60, 0x60, 0x00, // F
	0x78, 0x48, 0x40, 0x4e, 0x46, 0x46, 0x7e, 0x00, // G
	0x44, 0x44, 0x44, 0x7c, 0x64, 0x64, 0x64, 0x00, // H
	0x10, 0x10, 0x10, 0x18, 0x18, 0x18, 0x18, 0x00, // I
	0x04, 0x04, 0x04, 0x0c, 0x0c, 0x4c, 0x7c, 0x00, // J
	0x4c, 0x4c, 0x4c, 0x7e, 0x42, 0x42, 0x42, 0x00, // K
	0x40, 0x40, 0x40, 0x60, 0x60, 0x60, 0x7c, 0x00, // L
	0x7e, 0x52, 0x52, 0xc6, 0xc6, 0xc6, 0xc6, 0x00, // M
	0x7c, 0x44, 0x44, 0x64, 0x64, 0x64, 0x64, 0x00, // N
	0x7e, 0x62, 0x62, 0x62, 0x42, 0x42, 0x7e, 0x00, // O
	0x7c, 0x44, 0x44, 0x7c, 0x60, 0x60, 0x60, 0x00, // P
	0x7e, 0x42, 0x42, 0x46, 0x46, 0x46, 0x7e, 0x00, // Q
	0x7c, 0x44, 0x44, 0x7c, 0x46, 0x46, 0x46, 0x00, // R
	0x7e, 0x60, 0x60, 0x7e, 0x06, 0x06, 0x7e, 0x00, // S
	0x7e, 0x10, 0x10, 0x18, 0x18, 0x18, 0x18, 0x00, // T
	0x44, 0x44, 0x44, 0x64, 0x64, 0x64, 0x78, 0x00, // U
	0x42, 0x42, 0x42, 0x66, 0x2c, 0x2c, 0x3c, 0x00, // V
	0xc6, 0xc6, 0xc6, 0xd6, 0x54, 0x54, 0x6c, 0x00, // W
	0xcc, 0xcc, 0xcc, 0x78, 0xc4, 0xc4, 0xc4, 0x00, // X
	0x44, 0x44, 0x44, 0x7c, 0x0c, 0x0c, 0x7c, 0x00, // Y
	0x7c, 0x04, 0x04, 0x7c, 0x60, 0x60, 0x7c, 0x00, // Z
	0x3c, 0x20, 0x20, 0x30, 0x30, 0x30, 0x3c, 0x00, // [
	0x40, 0x60, 0x30, 0x18, 0x0c, 0x0c, 0x0c, 0x00, // \
	0x3c, 0x04, 0x04, 0x0c, 0x0c, 0x0c, 0x3c, 0x00, // ]
	0x10, 0x10, 0x7c, 0x64, 0x64, 0x00, 0x00, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x1c, 0x14, 0x10, 0x7e, 0x30, 0x30, 0x7e, 0x00, // £
	0x00, 0x00, 0x3e, 0x02, 0x7e, 0x62, 0x7e, 0x00, // a
	0x40, 0x40, 0x40, 0x7e, 0x46, 0x46, 0x7e, 0x00, // b
	0x00, 0x00, 0x7e, 0x40, 0x60, 0x60, 0x7e, 0x00, // c
	0x02, 0x02, 0x02, 0x7e, 0x62, 0x62, 0x7e, 0x00, // d
	0x00, 0x00, 0x7e, 0x46, 0x7e, 0x40, 0x7e, 0x00, // e
	0x1e, 0x12, 0x10, 0x7e, 0x18, 0x18, 0x18, 0x00, // f
	0x00, 0x00, 0x7e, 0x62, 0x62, 0x7e, 0x02, 0x7e, // g
	0x40, 0x40, 0x40, 0x7e, 0x46, 0x46, 0x46, 0x00, // h
	0x08, 0x00, 0x08, 0x08, 0x18, 0x18, 0x18, 0x00, // i
	0x04, 0x00, 0x04, 0x04, 0x0c, 0x0c, 0x4c, 0x7c, // j
	0x40, 0x48, 0x48, 0x7e, 0x46, 0x46, 0x46, 0x00, // k
	0x18, 0x08, 0x08, 0x08, 0x18, 0x18, 0x18, 0x00, // l
	0x00, 0x00, 0x7e, 0x52, 0x56, 0x56, 0x56, 0x00, // m
	0x00, 0x00, 0x7e, 0x42, 0x46, 0x46, 0x46, 0x00, // n
	0x00, 0x00, 0x7e, 0x62, 0x62, 0x42, 0x7e, 0x00, // o
	0x00, 0x00, 0x7e, 0x42, 0x42, 0x7e, 0x60, 0x60, // p
	0x00, 0x00, 0x7e, 0x42, 0x42, 0x7e, 0x06, 0x06, // q
	0x00, 0x00, 0x7e, 0x42, 0x60, 0x60, 0x60, 0x00, // r
	0x00, 0x00, 0x7e, 0x40, 0x7e, 0x06, 0x7e, 0x00, // s
	0x20, 0x20, 0x78, 0x20, 0x30, 0x32, 0x3e, 0x00, // t
	0x00, 0x00, 0x42, 0x42, 0x46, 0x46, 0x7e, 0x00, // u
	0x00, 0x00, 0x42, 0x42, 0x76, 0x34, 0x3c, 0x00, // v
	0x00, 0x00, 0x42, 0x42, 0x6a, 0x6a, 0x7e, 0x00, // w
	0x00, 0x00, 0x66, 0x26, 0x3c, 0x64, 0x66, 0x00, // x
	0x00, 0x00, 0x42, 0x42, 0x42, 0x7e, 0x06, 0x7e, // y
	0x00, 0x00, 0x7e, 0x04, 0x18, 0x20, 0x7e, 0x00, // z
	0x1e, 0x10, 0x10, 0x78, 0x18, 0x18, 0x1e, 0x00, // {
	0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00, // |
	0x78, 0x08, 0x08, 0x1e, 0x18, 0x18, 0x78, 0x00, // }
	0x74, 0x5c, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0xff, 0x81, 0xbd, 0xa1, 0xb1, 0xbd, 0x81, 0xff, // ©
};