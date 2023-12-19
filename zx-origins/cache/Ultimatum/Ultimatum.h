// Ultimatum font from https://damieng.com/zx-origins
static const uint8_t FONT_ULTIMATUM_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x08, 0x08, 0x10, 0x10, 0x00, 0x20, 0x20, 0x00, // !
	0x24, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x14, 0x14, 0x3c, 0x28, 0x78, 0x48, 0x50, 0x00, // #
	0x00, 0x08, 0x1c, 0x30, 0x08, 0x70, 0x20, 0x00, // $
	0x00, 0x64, 0x68, 0x10, 0x2c, 0x4c, 0x00, 0x00, // %
	0x0c, 0x14, 0x20, 0x34, 0x48, 0x58, 0x68, 0x00, // &
	0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x0c, 0x10, 0x20, 0x20, 0x40, 0x40, 0x30, 0x00, // (
	0x18, 0x04, 0x04, 0x04, 0x08, 0x08, 0x30, 0x00, // )
	0x00, 0x08, 0x2a, 0x3c, 0x54, 0x10, 0x00, 0x00, // *
	0x00, 0x08, 0x08, 0x3c, 0x10, 0x10, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x20, // ,
	0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, // .
	0x04, 0x08, 0x08, 0x10, 0x20, 0x20, 0x40, 0x00, // /
	0x0c, 0x14, 0x24, 0x24, 0x48, 0x48, 0x70, 0x00, // 0
	0x08, 0x18, 0x30, 0x10, 0x20, 0x20, 0x20, 0x00, // 1
	0x1c, 0x24, 0x08, 0x10, 0x20, 0x40, 0x78, 0x00, // 2
	0x0c, 0x14, 0x04, 0x18, 0x08, 0x48, 0x70, 0x00, // 3
	0x0c, 0x14, 0x28, 0x28, 0x78, 0x10, 0x20, 0x00, // 4
	0x1c, 0x14, 0x20, 0x38, 0x08, 0x48, 0x70, 0x00, // 5
	0x08, 0x10, 0x20, 0x38, 0x48, 0x48, 0x70, 0x00, // 6
	0x1c, 0x24, 0x08, 0x08, 0x10, 0x10, 0x20, 0x00, // 7
	0x0c, 0x14, 0x24, 0x38, 0x48, 0x48, 0x70, 0x00, // 8
	0x0c, 0x14, 0x24, 0x38, 0x08, 0x10, 0x60, 0x00, // 9
	0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, // :
	0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x10, 0x20, // ;
	0x00, 0x08, 0x10, 0x20, 0x10, 0x08, 0x00, 0x00, // <
	0x00, 0x00, 0x7c, 0x00, 0x7c, 0x00, 0x00, 0x00, // =
	0x00, 0x20, 0x10, 0x08, 0x10, 0x20, 0x00, 0x00, // >
	0x1c, 0x24, 0x08, 0x10, 0x20, 0x00, 0x20, 0x00, // ?
	0x0c, 0x14, 0x2c, 0x34, 0x58, 0x40, 0x30, 0x00, // @
	0x0c, 0x14, 0x24, 0x38, 0x48, 0x48, 0x50, 0x00, // A
	0x1c, 0x14, 0x24, 0x38, 0x48, 0x48, 0x70, 0x00, // B
	0x0c, 0x14, 0x24, 0x20, 0x48, 0x48, 0x70, 0x00, // C
	0x1c, 0x14, 0x24, 0x24, 0x48, 0x48, 0x70, 0x00, // D
	0x0c, 0x14, 0x20, 0x38, 0x40, 0x48, 0x70, 0x00, // E
	0x0c, 0x14, 0x20, 0x38, 0x40, 0x40, 0x40, 0x00, // F
	0x0c, 0x14, 0x20, 0x2c, 0x48, 0x48, 0x70, 0x00, // G
	0x14, 0x14, 0x24, 0x38, 0x48, 0x48, 0x50, 0x00, // H
	0x1c, 0x08, 0x10, 0x10, 0x20, 0x20, 0x70, 0x00, // I
	0x0c, 0x04, 0x04, 0x08, 0x08, 0x48, 0x70, 0x00, // J
	0x14, 0x14, 0x28, 0x30, 0x50, 0x48, 0x48, 0x00, // K
	0x10, 0x10, 0x20, 0x20, 0x40, 0x48, 0x70, 0x00, // L
	0x1e, 0x2a, 0x2a, 0x54, 0x54, 0x44, 0x48, 0x00, // M
	0x0c, 0x14, 0x24, 0x28, 0x48, 0x48, 0x50, 0x00, // N
	0x0c, 0x14, 0x24, 0x24, 0x48, 0x48, 0x70, 0x00, // O
	0x1c, 0x14, 0x24, 0x38, 0x40, 0x40, 0x40, 0x00, // P
	0x0c, 0x14, 0x24, 0x24, 0x48, 0x58, 0x6c, 0x00, // Q
	0x1c, 0x14, 0x24, 0x38, 0x50, 0x50, 0x48, 0x00, // R
	0x0c, 0x14, 0x20, 0x38, 0x08, 0x48, 0x70, 0x00, // S
	0x1c, 0x08, 0x10, 0x10, 0x20, 0x20, 0x20, 0x00, // T
	0x14, 0x24, 0x24, 0x24, 0x48, 0x48, 0x70, 0x00, // U
	0x14, 0x24, 0x24, 0x28, 0x48, 0x50, 0x60, 0x00, // V
	0x12, 0x22, 0x2a, 0x2a, 0x54, 0x54, 0x78, 0x00, // W
	0x14, 0x14, 0x18, 0x10, 0x30, 0x50, 0x50, 0x00, // X
	0x14, 0x14, 0x24, 0x38, 0x08, 0x48, 0x70, 0x00, // Y
	0x1c, 0x24, 0x08, 0x10, 0x20, 0x48, 0x78, 0x00, // Z
	0x1c, 0x10, 0x20, 0x20, 0x40, 0x40, 0x70, 0x00, // [
	0x20, 0x20, 0x10, 0x10, 0x10, 0x08, 0x08, 0x00, // \
	0x1c, 0x04, 0x04, 0x04, 0x08, 0x08, 0x38, 0x00, // ]
	0x08, 0x18, 0x3c, 0x74, 0x10, 0x20, 0x20, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, // _
	0x0c, 0x14, 0x20, 0x78, 0x20, 0x40, 0x78, 0x00, // £
	0x00, 0x00, 0x00, 0x18, 0x18, 0x28, 0x70, 0x00, // a
	0x10, 0x10, 0x20, 0x38, 0x28, 0x48, 0x70, 0x00, // b
	0x00, 0x00, 0x00, 0x18, 0x28, 0x40, 0x70, 0x00, // c
	0x04, 0x04, 0x04, 0x38, 0x28, 0x48, 0x70, 0x00, // d
	0x00, 0x00, 0x00, 0x18, 0x28, 0x50, 0x38, 0x00, // e
	0x00, 0x0c, 0x14, 0x20, 0x38, 0x40, 0x40, 0x40, // f
	0x00, 0x00, 0x00, 0x1c, 0x24, 0x38, 0x08, 0x70, // g
	0x10, 0x10, 0x20, 0x38, 0x28, 0x48, 0x50, 0x00, // h
	0x08, 0x08, 0x00, 0x10, 0x10, 0x20, 0x20, 0x00, // i
	0x04, 0x04, 0x00, 0x08, 0x08, 0x08, 0x50, 0x60, // j
	0x10, 0x10, 0x24, 0x28, 0x30, 0x48, 0x48, 0x00, // k
	0x18, 0x08, 0x10, 0x10, 0x20, 0x20, 0x20, 0x00, // l
	0x00, 0x00, 0x00, 0x3c, 0x2a, 0x54, 0x54, 0x00, // m
	0x00, 0x00, 0x00, 0x38, 0x28, 0x48, 0x50, 0x00, // n
	0x00, 0x00, 0x00, 0x38, 0x28, 0x48, 0x70, 0x00, // o
	0x00, 0x00, 0x00, 0x1c, 0x14, 0x24, 0x38, 0x40, // p
	0x00, 0x00, 0x00, 0x38, 0x28, 0x48, 0x70, 0x10, // q
	0x00, 0x00, 0x00, 0x38, 0x28, 0x40, 0x40, 0x00, // r
	0x00, 0x00, 0x00, 0x1c, 0x30, 0x08, 0x70, 0x00, // s
	0x10, 0x10, 0x20, 0x30, 0x40, 0x40, 0x38, 0x00, // t
	0x00, 0x00, 0x00, 0x28, 0x48, 0x50, 0x70, 0x00, // u
	0x00, 0x00, 0x00, 0x24, 0x28, 0x30, 0x20, 0x00, // v
	0x00, 0x00, 0x00, 0x2a, 0x2a, 0x54, 0x3c, 0x00, // w
	0x00, 0x00, 0x00, 0x14, 0x18, 0x30, 0x50, 0x00, // x
	0x00, 0x00, 0x00, 0x14, 0x24, 0x38, 0x08, 0x70, // y
	0x00, 0x00, 0x00, 0x38, 0x10, 0x20, 0x70, 0x00, // z
	0x0e, 0x08, 0x10, 0x60, 0x20, 0x20, 0x38, 0x00, // {
	0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x20, 0x00, // |
	0x38, 0x08, 0x08, 0x0c, 0x10, 0x10, 0x70, 0x00, // }
	0x00, 0x28, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x1c, 0x22, 0x5d, 0xa5, 0xa1, 0xba, 0x44, 0x38, // ©
};