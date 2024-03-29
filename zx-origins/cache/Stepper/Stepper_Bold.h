// Stepper Bold font from https://damieng.com/zx-origins
static const uint8_t FONT_STEPPER_BOLD_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x18, 0x18, 0x18, 0x18, 0x00, 0x3c, 0x00, // !
	0x00, 0x77, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x00, 0x36, 0x7f, 0x36, 0x7f, 0x36, 0x00, 0x00, // #
	0x00, 0x0c, 0x7f, 0x6c, 0x3e, 0x1b, 0x7f, 0x18, // $
	0x00, 0x6c, 0x6c, 0x18, 0x18, 0x36, 0x36, 0x00, // %
	0x00, 0x3c, 0x30, 0x3b, 0x66, 0x66, 0x7f, 0x00, // &
	0x00, 0x1c, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x00, 0x0e, 0x18, 0x30, 0x30, 0x18, 0x0e, 0x00, // (
	0x00, 0x38, 0x0c, 0x06, 0x06, 0x0c, 0x38, 0x00, // )
	0x00, 0x08, 0x7f, 0x3e, 0x7f, 0x08, 0x00, 0x00, // *
	0x00, 0x18, 0x18, 0x7e, 0x18, 0x18, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x30, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, // .
	0x00, 0x0c, 0x0c, 0x18, 0x18, 0x30, 0x30, 0x00, // /
	0x00, 0x1c, 0x36, 0x6b, 0x6b, 0x36, 0x1c, 0x00, // 0
	0x00, 0x78, 0x18, 0x18, 0x18, 0x18, 0x7e, 0x00, // 1
	0x00, 0x7f, 0x43, 0x0e, 0x38, 0x60, 0x7f, 0x00, // 2
	0x00, 0x7f, 0x63, 0x1e, 0x06, 0x63, 0x7f, 0x00, // 3
	0x00, 0x06, 0x36, 0x36, 0x66, 0x7f, 0x06, 0x00, // 4
	0x00, 0x7f, 0x63, 0x78, 0x0e, 0x03, 0x7f, 0x00, // 5
	0x00, 0x1e, 0x30, 0x6f, 0x7b, 0x63, 0x7f, 0x00, // 6
	0x00, 0x7f, 0x63, 0x06, 0x1e, 0x0c, 0x0c, 0x00, // 7
	0x00, 0x7f, 0x63, 0x3e, 0x36, 0x63, 0x7f, 0x00, // 8
	0x00, 0x7f, 0x63, 0x6f, 0x7b, 0x06, 0x3c, 0x00, // 9
	0x00, 0x00, 0x1c, 0x00, 0x00, 0x1c, 0x00, 0x00, // :
	0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x30, // ;
	0x00, 0x0c, 0x18, 0x30, 0x30, 0x18, 0x0c, 0x00, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, // =
	0x00, 0x30, 0x18, 0x0c, 0x0c, 0x18, 0x30, 0x00, // >
	0x00, 0x7f, 0x63, 0x07, 0x1c, 0x00, 0x38, 0x00, // ?
	0x0f, 0x31, 0x4d, 0x5d, 0xae, 0xbc, 0x83, 0xfc, // @
	0x00, 0x1c, 0x1c, 0x36, 0x36, 0x7f, 0x63, 0x00, // A
	0x00, 0x7f, 0x63, 0x6e, 0x76, 0x63, 0x7f, 0x00, // B
	0x00, 0x1f, 0x30, 0x60, 0x60, 0x30, 0x1f, 0x00, // C
	0x00, 0x7f, 0x63, 0x63, 0x63, 0x66, 0x7c, 0x00, // D
	0x00, 0x7e, 0x60, 0x7e, 0x60, 0x60, 0x7e, 0x00, // E
	0x00, 0x7e, 0x60, 0x7e, 0x60, 0x60, 0x60, 0x00, // F
	0x00, 0x1f, 0x30, 0x67, 0x63, 0x33, 0x1f, 0x00, // G
	0x00, 0x63, 0x63, 0x7f, 0x63, 0x63, 0x63, 0x00, // H
	0x00, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x7e, 0x00, // I
	0x00, 0x07, 0x03, 0x03, 0x03, 0x66, 0x7c, 0x00, // J
	0x00, 0x63, 0x66, 0x6c, 0x7c, 0x66, 0x63, 0x00, // K
	0x00, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7e, 0x00, // L
	0x00, 0x63, 0x77, 0x77, 0x7f, 0x6b, 0x6b, 0x00, // M
	0x00, 0x63, 0x73, 0x7b, 0x6f, 0x67, 0x63, 0x00, // N
	0x00, 0x1c, 0x36, 0x63, 0x63, 0x36, 0x1c, 0x00, // O
	0x00, 0x7f, 0x63, 0x6e, 0x78, 0x60, 0x60, 0x00, // P
	0x00, 0x1c, 0x36, 0x63, 0x6b, 0x36, 0x1f, 0x00, // Q
	0x00, 0x7f, 0x63, 0x6e, 0x78, 0x6e, 0x63, 0x00, // R
	0x00, 0x7f, 0x60, 0x38, 0x0e, 0x03, 0x7f, 0x00, // S
	0x00, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // T
	0x00, 0x63, 0x63, 0x63, 0x63, 0x63, 0x3f, 0x00, // U
	0x00, 0x63, 0x63, 0x36, 0x36, 0x1c, 0x1c, 0x00, // V
	0x00, 0x63, 0x6b, 0x6b, 0x7f, 0x77, 0x63, 0x00, // W
	0x00, 0x63, 0x36, 0x1c, 0x1c, 0x36, 0x63, 0x00, // X
	0x00, 0x63, 0x63, 0x6f, 0x7b, 0x03, 0x7f, 0x00, // Y
	0x00, 0x7f, 0x03, 0x0e, 0x38, 0x60, 0x7f, 0x00, // Z
	0x00, 0x3e, 0x30, 0x30, 0x30, 0x30, 0x3e, 0x00, // [
	0x00, 0x30, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x00, // \
	0x00, 0x3e, 0x06, 0x06, 0x06, 0x06, 0x3e, 0x00, // ]
	0x00, 0x1c, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x00, 0x7f, 0x63, 0x78, 0xe0, 0x63, 0x7f, 0x00, // £
	0x00, 0x00, 0x7f, 0x63, 0x63, 0x6f, 0x7b, 0x00, // a
	0x60, 0x60, 0x6f, 0x7b, 0x63, 0x63, 0x7f, 0x00, // b
	0x00, 0x00, 0x7f, 0x63, 0x60, 0x63, 0x7f, 0x00, // c
	0x03, 0x03, 0x7b, 0x6f, 0x63, 0x63, 0x7f, 0x00, // d
	0x00, 0x00, 0x7f, 0x63, 0x6e, 0x78, 0x7f, 0x00, // e
	0x3f, 0x33, 0x30, 0x3c, 0x78, 0x30, 0x30, 0x30, // f
	0x00, 0x00, 0x7f, 0x63, 0x6f, 0x7b, 0x03, 0x7f, // g
	0x60, 0x60, 0x6f, 0x7b, 0x63, 0x63, 0x63, 0x00, // h
	0x18, 0x00, 0x38, 0x18, 0x18, 0x18, 0x1c, 0x00, // i
	0x06, 0x00, 0x06, 0x06, 0x06, 0x06, 0x6e, 0x78, // j
	0x60, 0x60, 0x67, 0x7c, 0x70, 0x7c, 0x67, 0x00, // k
	0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3c, 0x00, // l
	0x00, 0x00, 0x63, 0x77, 0x7f, 0x6b, 0x6b, 0x00, // m
	0x00, 0x00, 0x6f, 0x7b, 0x63, 0x63, 0x63, 0x00, // n
	0x00, 0x00, 0x7f, 0x63, 0x63, 0x63, 0x7f, 0x00, // o
	0x00, 0x00, 0x7f, 0x63, 0x6e, 0x78, 0x60, 0x60, // p
	0x00, 0x00, 0x7f, 0x63, 0x3b, 0x0f, 0x03, 0x03, // q
	0x00, 0x00, 0x6f, 0x7b, 0x60, 0x60, 0x60, 0x00, // r
	0x00, 0x00, 0x7f, 0x33, 0x1c, 0x06, 0x7f, 0x00, // s
	0x30, 0x30, 0x3e, 0x78, 0x30, 0x33, 0x3f, 0x00, // t
	0x00, 0x00, 0x63, 0x63, 0x63, 0x6f, 0x7b, 0x00, // u
	0x00, 0x00, 0x63, 0x36, 0x36, 0x1c, 0x1c, 0x00, // v
	0x00, 0x00, 0x6b, 0x6b, 0x7f, 0x77, 0x63, 0x00, // w
	0x00, 0x00, 0x63, 0x36, 0x1c, 0x36, 0x63, 0x00, // x
	0x00, 0x00, 0x63, 0x63, 0x6f, 0x7b, 0x03, 0x7f, // y
	0x00, 0x00, 0x7f, 0x66, 0x1c, 0x30, 0x7f, 0x00, // z
	0x00, 0x1f, 0x18, 0x18, 0x78, 0x0c, 0x07, 0x00, // {
	0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // |
	0x00, 0x7c, 0x0c, 0x0c, 0x0f, 0x18, 0x70, 0x00, // }
	0x00, 0x71, 0x7f, 0x47, 0x00, 0x00, 0x00, 0x00, // ~
	0x1f, 0x21, 0x4d, 0x9d, 0xb1, 0xbd, 0x81, 0xff, // ©
};