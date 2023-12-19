// Protractor font from https://damieng.com/zx-origins
static const uint8_t FONT_PROTRACTOR_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x10, 0x00, // !
	0x24, 0x24, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x08, 0x2c, 0x38, 0x6c, 0x38, 0x68, 0x20, 0x00, // #
	0x08, 0x0c, 0x10, 0x3c, 0x08, 0x30, 0x10, 0x00, // $
	0x00, 0x48, 0x48, 0x10, 0x10, 0x24, 0x24, 0x00, // %
	0x08, 0x10, 0x24, 0x2c, 0x34, 0x24, 0x28, 0x30, // &
	0x08, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x08, 0x10, 0x10, 0x20, 0x20, 0x20, 0x28, 0x10, // (
	0x08, 0x14, 0x04, 0x04, 0x04, 0x08, 0x08, 0x10, // )
	0x00, 0x10, 0x14, 0x58, 0x34, 0x50, 0x10, 0x00, // *
	0x00, 0x10, 0x14, 0x18, 0x30, 0x50, 0x10, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x10, // ,
	0x00, 0x00, 0x04, 0x18, 0x20, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, // .
	0x00, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x00, // /
	0x0c, 0x14, 0x24, 0x24, 0x24, 0x24, 0x28, 0x30, // 0
	0x10, 0x10, 0x30, 0x10, 0x10, 0x10, 0x10, 0x00, // 1
	0x0c, 0x14, 0x24, 0x08, 0x10, 0x24, 0x28, 0x30, // 2
	0x0c, 0x14, 0x24, 0x0c, 0x14, 0x04, 0x08, 0x10, // 3
	0x04, 0x24, 0x24, 0x2c, 0x14, 0x04, 0x04, 0x00, // 4
	0x08, 0x10, 0x20, 0x2c, 0x34, 0x04, 0x08, 0x10, // 5
	0x08, 0x10, 0x20, 0x28, 0x34, 0x24, 0x28, 0x30, // 6
	0x0c, 0x34, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, // 7
	0x0c, 0x14, 0x24, 0x28, 0x14, 0x24, 0x28, 0x30, // 8
	0x0c, 0x14, 0x24, 0x2c, 0x14, 0x04, 0x08, 0x10, // 9
	0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, // :
	0x00, 0x08, 0x08, 0x00, 0x00, 0x08, 0x08, 0x10, // ;
	0x00, 0x08, 0x08, 0x10, 0x30, 0x08, 0x04, 0x00, // <
	0x00, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0x00, 0x00, // =
	0x20, 0x10, 0x08, 0x10, 0x10, 0x20, 0x00, 0x00, // >
	0x0c, 0x34, 0x24, 0x08, 0x10, 0x10, 0x00, 0x10, // ?
	0x0c, 0x14, 0x2c, 0x54, 0x58, 0x54, 0x48, 0x30, // @
	0x0c, 0x14, 0x24, 0x2c, 0x34, 0x24, 0x24, 0x20, // A
	0x0c, 0x14, 0x24, 0x28, 0x34, 0x24, 0x28, 0x30, // B
	0x0c, 0x14, 0x20, 0x20, 0x24, 0x24, 0x28, 0x30, // C
	0x08, 0x14, 0x24, 0x24, 0x24, 0x24, 0x28, 0x30, // D
	0x0c, 0x30, 0x20, 0x2c, 0x30, 0x20, 0x2c, 0x30, // E
	0x0c, 0x30, 0x20, 0x2c, 0x30, 0x20, 0x20, 0x20, // F
	0x0c, 0x14, 0x20, 0x24, 0x2c, 0x24, 0x28, 0x30, // G
	0x04, 0x04, 0x24, 0x2c, 0x34, 0x24, 0x20, 0x20, // H
	0x18, 0x30, 0x10, 0x10, 0x10, 0x10, 0x18, 0x20, // I
	0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x28, 0x30, // J
	0x04, 0x24, 0x28, 0x28, 0x38, 0x24, 0x24, 0x20, // K
	0x00, 0x20, 0x20, 0x20, 0x20, 0x24, 0x28, 0x30, // L
	0x0c, 0x14, 0x34, 0x54, 0x54, 0x54, 0x50, 0x40, // M
	0x0c, 0x14, 0x24, 0x24, 0x24, 0x24, 0x20, 0x20, // N
	0x0c, 0x14, 0x24, 0x24, 0x24, 0x24, 0x28, 0x30, // O
	0x0c, 0x14, 0x24, 0x28, 0x30, 0x20, 0x20, 0x20, // P
	0x0c, 0x14, 0x24, 0x24, 0x2c, 0x26, 0x28, 0x30, // Q
	0x0c, 0x14, 0x24, 0x28, 0x38, 0x24, 0x24, 0x20, // R
	0x0c, 0x10, 0x20, 0x28, 0x14, 0x04, 0x08, 0x30, // S
	0x04, 0x18, 0x70, 0x10, 0x10, 0x10, 0x10, 0x10, // T
	0x04, 0x04, 0x24, 0x24, 0x24, 0x24, 0x28, 0x30, // U
	0x04, 0x04, 0x24, 0x24, 0x24, 0x28, 0x28, 0x10, // V
	0x04, 0x14, 0x54, 0x54, 0x54, 0x58, 0x50, 0x60, // W
	0x04, 0x04, 0x24, 0x28, 0x14, 0x24, 0x20, 0x20, // X
	0x04, 0x24, 0x24, 0x2c, 0x34, 0x04, 0x28, 0x30, // Y
	0x0c, 0x14, 0x24, 0x08, 0x10, 0x24, 0x28, 0x30, // Z
	0x08, 0x10, 0x20, 0x20, 0x20, 0x20, 0x28, 0x30, // [
	0x00, 0x20, 0x20, 0x10, 0x10, 0x08, 0x08, 0x00, // \
	0x0c, 0x14, 0x04, 0x04, 0x04, 0x04, 0x08, 0x10, // ]
	0x10, 0x18, 0x3c, 0x70, 0x10, 0x10, 0x10, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, // _
	0x0c, 0x14, 0x20, 0x28, 0x30, 0x24, 0x28, 0x30, // £
	0x00, 0x00, 0x0c, 0x14, 0x2c, 0x14, 0x2c, 0x30, // a
	0x00, 0x20, 0x2c, 0x34, 0x24, 0x24, 0x28, 0x30, // b
	0x00, 0x00, 0x0c, 0x14, 0x20, 0x24, 0x28, 0x30, // c
	0x04, 0x04, 0x0c, 0x14, 0x24, 0x24, 0x28, 0x30, // d
	0x00, 0x00, 0x0c, 0x14, 0x28, 0x34, 0x28, 0x30, // e
	0x00, 0x0c, 0x10, 0x2c, 0x30, 0x20, 0x20, 0x20, // f
	0x00, 0x00, 0x0c, 0x14, 0x2c, 0x14, 0x08, 0x30, // g
	0x00, 0x20, 0x2c, 0x34, 0x24, 0x24, 0x20, 0x20, // h
	0x00, 0x10, 0x00, 0x10, 0x10, 0x10, 0x10, 0x00, // i
	0x00, 0x04, 0x00, 0x04, 0x04, 0x04, 0x28, 0x30, // j
	0x00, 0x04, 0x24, 0x28, 0x28, 0x34, 0x24, 0x20, // k
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // l
	0x00, 0x06, 0x0a, 0x1a, 0x2a, 0x2a, 0x28, 0x20, // m
	0x00, 0x00, 0x0c, 0x14, 0x24, 0x24, 0x20, 0x20, // n
	0x00, 0x00, 0x0c, 0x14, 0x24, 0x24, 0x28, 0x30, // o
	0x00, 0x0c, 0x14, 0x24, 0x28, 0x30, 0x20, 0x20, // p
	0x00, 0x0c, 0x14, 0x24, 0x2c, 0x34, 0x04, 0x00, // q
	0x00, 0x00, 0x0c, 0x34, 0x20, 0x20, 0x20, 0x20, // r
	0x00, 0x00, 0x0c, 0x10, 0x30, 0x0c, 0x08, 0x30, // s
	0x00, 0x20, 0x20, 0x30, 0x60, 0x24, 0x28, 0x30, // t
	0x00, 0x00, 0x04, 0x04, 0x24, 0x24, 0x28, 0x30, // u
	0x00, 0x00, 0x04, 0x04, 0x24, 0x28, 0x28, 0x10, // v
	0x00, 0x04, 0x14, 0x54, 0x54, 0x58, 0x50, 0x60, // w
	0x00, 0x04, 0x24, 0x28, 0x18, 0x14, 0x24, 0x20, // x
	0x00, 0x04, 0x24, 0x24, 0x2c, 0x14, 0x08, 0x30, // y
	0x00, 0x00, 0x0c, 0x14, 0x28, 0x14, 0x28, 0x30, // z
	0x04, 0x08, 0x10, 0x10, 0x30, 0x50, 0x14, 0x18, // {
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // |
	0x30, 0x50, 0x14, 0x18, 0x10, 0x10, 0x20, 0x40, // }
	0x04, 0x14, 0x28, 0x20, 0x00, 0x00, 0x00, 0x00, // ~
	0x0c, 0x12, 0x2a, 0x52, 0x5a, 0x54, 0x48, 0x30, // ©
};