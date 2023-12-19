// IoBus Bold font from https://damieng.com/zx-origins
static const uint8_t FONT_IOBUS_BOLD_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x00, 0x1c, 0x00, // !
	0x77, 0x77, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x76, 0x76, 0x7e, 0x76, 0x7e, 0x76, 0x76, 0x00, // #
	0x08, 0x7e, 0x70, 0x7e, 0x0e, 0x7e, 0x10, 0x00, // $
	0x73, 0x77, 0x0e, 0x1c, 0x38, 0x77, 0x67, 0x00, // %
	0x7c, 0x70, 0x76, 0x3e, 0x76, 0x76, 0x7e, 0x00, // &
	0x1c, 0x1c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x1e, 0x38, 0x70, 0x70, 0x70, 0x38, 0x1e, 0x00, // (
	0x78, 0x1c, 0x0e, 0x0e, 0x0e, 0x1c, 0x78, 0x00, // )
	0x00, 0x66, 0x3c, 0x7e, 0x3c, 0x66, 0x00, 0x00, // *
	0x00, 0x1c, 0x1c, 0x7f, 0x1c, 0x1c, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x1c, 0x18, // ,
	0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x1c, 0x00, // .
	0x04, 0x0c, 0x1c, 0x3c, 0x38, 0x30, 0x20, 0x00, // /
	0x7e, 0x76, 0x76, 0x76, 0x76, 0x76, 0x7e, 0x00, // 0
	0x1c, 0x3c, 0x1c, 0x1c, 0x1c, 0x1c, 0x3e, 0x00, // 1
	0x7e, 0x76, 0x06, 0x7e, 0x70, 0x76, 0x7e, 0x00, // 2
	0x7e, 0x0e, 0x0e, 0x3e, 0x0e, 0x0e, 0x7e, 0x00, // 3
	0x1e, 0x3e, 0x6e, 0x6e, 0x7e, 0x0e, 0x0e, 0x00, // 4
	0x7e, 0x60, 0x7e, 0x0e, 0x6e, 0x6e, 0x7e, 0x00, // 5
	0x7e, 0x70, 0x7e, 0x76, 0x76, 0x76, 0x7e, 0x00, // 6
	0x7e, 0x0e, 0x0e, 0x3e, 0x0e, 0x0e, 0x0e, 0x00, // 7
	0x7e, 0x76, 0x3c, 0x6e, 0x6e, 0x6e, 0x7e, 0x00, // 8
	0x7e, 0x6e, 0x6e, 0x6e, 0x7e, 0x0e, 0x7e, 0x00, // 9
	0x00, 0x1c, 0x1c, 0x00, 0x00, 0x1c, 0x1c, 0x00, // :
	0x00, 0x1c, 0x1c, 0x00, 0x00, 0x1c, 0x1c, 0x18, // ;
	0x00, 0x0e, 0x1c, 0x38, 0x1c, 0x0e, 0x00, 0x00, // <
	0x00, 0x00, 0x3e, 0x00, 0x3e, 0x00, 0x00, 0x00, // =
	0x00, 0x70, 0x38, 0x1c, 0x38, 0x70, 0x00, 0x00, // >
	0x7e, 0x6e, 0x0e, 0x1c, 0x1c, 0x00, 0x1c, 0x00, // ?
	0x7e, 0x76, 0x7e, 0x76, 0x7e, 0x70, 0x7e, 0x00, // @
	0x7e, 0x76, 0x76, 0x7e, 0x76, 0x76, 0x76, 0x00, // A
	0x7e, 0x76, 0x76, 0x7c, 0x76, 0x76, 0x7e, 0x00, // B
	0x7e, 0x76, 0x76, 0x70, 0x76, 0x76, 0x7e, 0x00, // C
	0x7c, 0x76, 0x76, 0x76, 0x76, 0x76, 0x7c, 0x00, // D
	0x7e, 0x70, 0x70, 0x7c, 0x70, 0x70, 0x7e, 0x00, // E
	0x7e, 0x70, 0x70, 0x7c, 0x70, 0x70, 0x70, 0x00, // F
	0x7e, 0x70, 0x70, 0x76, 0x76, 0x76, 0x7e, 0x00, // G
	0x76, 0x76, 0x76, 0x7e, 0x76, 0x76, 0x76, 0x00, // H
	0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x00, // I
	0x0e, 0x0e, 0x0e, 0x0e, 0x6e, 0x6e, 0x7e, 0x00, // J
	0x76, 0x76, 0x76, 0x7c, 0x76, 0x76, 0x76, 0x00, // K
	0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x7e, 0x00, // L
	0x7f, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x00, // M
	0x7e, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x00, // N
	0x7e, 0x76, 0x76, 0x76, 0x76, 0x76, 0x7e, 0x00, // O
	0x7e, 0x76, 0x76, 0x7e, 0x70, 0x70, 0x70, 0x00, // P
	0x7e, 0x76, 0x76, 0x76, 0x76, 0x76, 0x7c, 0x0e, // Q
	0x7e, 0x76, 0x76, 0x7c, 0x76, 0x76, 0x76, 0x00, // R
	0x7e, 0x76, 0x70, 0x7e, 0x06, 0x76, 0x7e, 0x00, // S
	0x7f, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x00, // T
	0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x7e, 0x00, // U
	0x76, 0x76, 0x76, 0x76, 0x76, 0x7c, 0x78, 0x00, // V
	0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x7f, 0x00, // W
	0x76, 0x76, 0x76, 0x3c, 0x76, 0x76, 0x76, 0x00, // X
	0x6e, 0x6e, 0x6e, 0x7e, 0x0e, 0x6e, 0x7e, 0x00, // Y
	0x7e, 0x0e, 0x1c, 0x38, 0x70, 0x70, 0x7e, 0x00, // Z
	0x3e, 0x38, 0x38, 0x38, 0x38, 0x38, 0x3e, 0x00, // [
	0x20, 0x30, 0x38, 0x3c, 0x1c, 0x0c, 0x04, 0x00, // \
	0x3e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x3e, 0x00, // ]
	0x18, 0x3c, 0x7e, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, // _
	0x7e, 0x76, 0x70, 0x7c, 0x70, 0x70, 0x7e, 0x00, // £
	0x00, 0x00, 0x7e, 0x0e, 0x7e, 0x6e, 0x7e, 0x00, // a
	0x70, 0x70, 0x7e, 0x76, 0x76, 0x76, 0x7e, 0x00, // b
	0x00, 0x00, 0x7e, 0x76, 0x70, 0x76, 0x7e, 0x00, // c
	0x0e, 0x0e, 0x7e, 0x6e, 0x6e, 0x6e, 0x7e, 0x00, // d
	0x00, 0x00, 0x7e, 0x76, 0x7e, 0x70, 0x7e, 0x00, // e
	0x3f, 0x3b, 0x38, 0x7e, 0x38, 0x38, 0x38, 0x00, // f
	0x00, 0x00, 0x7e, 0x6e, 0x6e, 0x7e, 0x0e, 0x7e, // g
	0x70, 0x70, 0x7e, 0x76, 0x76, 0x76, 0x76, 0x00, // h
	0x1c, 0x00, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x00, // i
	0x0e, 0x00, 0x0e, 0x0e, 0x0e, 0x6e, 0x6e, 0x7e, // j
	0x70, 0x70, 0x76, 0x76, 0x7c, 0x76, 0x76, 0x00, // k
	0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x00, // l
	0x00, 0x00, 0x7f, 0x75, 0x75, 0x75, 0x75, 0x00, // m
	0x00, 0x00, 0x7e, 0x76, 0x76, 0x76, 0x76, 0x00, // n
	0x00, 0x00, 0x7e, 0x76, 0x76, 0x76, 0x7e, 0x00, // o
	0x00, 0x00, 0x7e, 0x76, 0x76, 0x7e, 0x70, 0x70, // p
	0x00, 0x00, 0x7e, 0x6e, 0x6e, 0x7e, 0x0e, 0x0e, // q
	0x00, 0x00, 0x7e, 0x76, 0x70, 0x70, 0x70, 0x00, // r
	0x00, 0x00, 0x7e, 0x70, 0x7e, 0x0e, 0x7e, 0x00, // s
	0x70, 0x70, 0x7c, 0x70, 0x76, 0x76, 0x7e, 0x00, // t
	0x00, 0x00, 0x76, 0x76, 0x76, 0x76, 0x7e, 0x00, // u
	0x00, 0x00, 0x76, 0x76, 0x76, 0x7c, 0x78, 0x00, // v
	0x00, 0x00, 0x75, 0x75, 0x75, 0x75, 0x7f, 0x00, // w
	0x00, 0x00, 0x76, 0x76, 0x3c, 0x76, 0x76, 0x00, // x
	0x00, 0x00, 0x6e, 0x6e, 0x6e, 0x7e, 0x0e, 0x7e, // y
	0x00, 0x00, 0x7e, 0x1c, 0x38, 0x70, 0x7e, 0x00, // z
	0x3e, 0x38, 0x38, 0x70, 0x38, 0x38, 0x3e, 0x00, // {
	0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x00, // |
	0x7c, 0x1c, 0x1c, 0x0e, 0x1c, 0x1c, 0x7c, 0x00, // }
	0x73, 0x6b, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0xff, 0x81, 0xbd, 0xb9, 0xb9, 0xbd, 0x81, 0xff, // ©
};