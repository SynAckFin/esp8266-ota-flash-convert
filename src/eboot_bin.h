unsigned char eboot_bin[] __attribute__((aligned(4))) = {
  0xe9, 0x01, 0x02, 0x40, 0x9c, 0xf2, 0x10, 0x40, 0x00, 0xf0, 0x10, 0x40,
  0x68, 0x05, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x50, 0xf5, 0x10, 0x40,
  0x1c, 0x4b, 0x00, 0x40, 0xcc, 0x24, 0x00, 0x40, 0xff, 0xff, 0xff, 0x3f,
  0xff, 0xff, 0x0f, 0x40, 0xff, 0x7f, 0x10, 0x40, 0xff, 0xff, 0xff, 0x5f,
  0xf0, 0xff, 0xff, 0x3f, 0x00, 0x10, 0x00, 0x00, 0x1c, 0xe2, 0x00, 0x40,
  0x00, 0x4a, 0x00, 0x40, 0x4c, 0x4a, 0x00, 0x40, 0x00, 0x07, 0x00, 0x60,
  0x00, 0x00, 0x00, 0x80, 0xe8, 0x2b, 0x00, 0x40, 0xf0, 0x30, 0x00, 0x40,
  0xa0, 0x2f, 0x00, 0x40, 0xb7, 0x1d, 0xc1, 0x04, 0x00, 0x12, 0x00, 0x60,
  0x00, 0x10, 0x00, 0xeb, 0x7c, 0x12, 0x00, 0x60, 0x12, 0xc1, 0xd0, 0x09,
  0xb1, 0xf9, 0xa1, 0xfd, 0x01, 0x29, 0x4f, 0x38, 0x4f, 0x21, 0xe6, 0xff,
  0x2a, 0x23, 0x4b, 0x3f, 0x0c, 0x44, 0x01, 0xe6, 0xff, 0xc0, 0x00, 0x00,
  0x8c, 0x52, 0x0c, 0x12, 0x86, 0x07, 0x00, 0x00, 0x00, 0x21, 0xe1, 0xff,
  0x29, 0x0f, 0x28, 0x0f, 0x28, 0x02, 0x29, 0x2f, 0x28, 0x0f, 0x28, 0x12,
  0x29, 0x3f, 0x38, 0x1f, 0x8b, 0x2f, 0x01, 0xde, 0xff, 0xc0, 0x00, 0x00,
  0x0c, 0x02, 0x1d, 0x0f, 0x08, 0xb1, 0xf8, 0xa1, 0x12, 0xc1, 0x30, 0x0d,
  0xf0, 0x00, 0x00, 0x00, 0x12, 0xc1, 0xc0, 0x09, 0xf1, 0xf9, 0xe1, 0xfd,
  0x01, 0x29, 0x8f, 0x28, 0x8f, 0x22, 0xd2, 0x10, 0x29, 0x0f, 0x32, 0xcf,
  0x10, 0x28, 0x0f, 0x42, 0xa0, 0x08, 0x01, 0xd1, 0xff, 0xc0, 0x00, 0x00,
  0x8c, 0x42, 0x0c, 0x12, 0x46, 0x2e, 0x00, 0x00, 0x28, 0x0f, 0x8b, 0x22,
  0x29, 0x0f, 0x0c, 0x02, 0x29, 0x1f, 0x06, 0x25, 0x00, 0x0c, 0x02, 0x29,
  0x6f, 0x0c, 0x02, 0x29, 0x7f, 0x32, 0xcf, 0x18, 0x28, 0x0f, 0x0c, 0x84,
  0x01, 0xc7, 0xff, 0xc0, 0x00, 0x00, 0x8c, 0x32, 0x0c, 0x22, 0xc6, 0x23,
  0x00, 0x28, 0x0f, 0x8b, 0x22, 0x29, 0x0f, 0x28, 0x6f, 0x29, 0x3f, 0x0c,
  0x02, 0x22, 0x4f, 0x08, 0x28, 0x3f, 0x31, 0xc1, 0xff, 0x27, 0x33, 0x04,
  0x0c, 0x12, 0x22, 0x4f, 0x08, 0x28, 0x3f, 0x31, 0xbf, 0xff, 0x27, 0xb3,
  0x0c, 0x28, 0x3f, 0x31, 0xbe, 0xff, 0x27, 0x33, 0x04, 0x0c, 0x12, 0x22,
  0x4f, 0x08, 0x28, 0x3f, 0x31, 0xbc, 0xff, 0x27, 0xb3, 0x05, 0x22, 0xa0,
  0x01, 0x22, 0x4f, 0x08, 0x32, 0x0f, 0x08, 0x0c, 0x12, 0x20, 0x23, 0x30,
  0x20, 0x20, 0x74, 0x8c, 0x92, 0x28, 0x7f, 0x38, 0x0f, 0x2a, 0x23, 0x29,
  0x0f, 0xc6, 0x06, 0x00, 0x38, 0x3f, 0x48, 0x7f, 0x28, 0x0f, 0x01, 0xac,
  0xff, 0xc0, 0x00, 0x00, 0x8c, 0x42, 0x0c, 0x32, 0x46, 0x09, 0x00, 0x00,
  0x28, 0x7f, 0x38, 0x0f, 0x2a, 0x23, 0x29, 0x0f, 0x28, 0x1f, 0x1b, 0x22,
  0x29, 0x1f, 0x22, 0x0f, 0x11, 0x38, 0x1f, 0x27, 0xb3, 0x02, 0xc6, 0xd7,
  0xff, 0x11, 0xa8, 0xff, 0x28, 0x5f, 0x3d, 0x02, 0xa0, 0x03, 0x00, 0x0c,
  0x02, 0x1d, 0x0f, 0x08, 0xf1, 0xf8, 0xe1, 0x12, 0xc1, 0x40, 0x0d, 0xf0,
  0x12, 0xc1, 0xb0, 0x02, 0x61, 0x13, 0xc2, 0x61, 0x12, 0xd2, 0x61, 0x11,
  0xe2, 0x61, 0x10, 0xf9, 0xf1, 0xfd, 0x01, 0x29, 0x8f, 0x39, 0x9f, 0x49,
  0xaf, 0x2d, 0x01, 0xed, 0x02, 0x28, 0x8f, 0x20, 0x20, 0x04, 0xcc, 0x62,
  0x28, 0x9f, 0x20, 0x20, 0x04, 0x16, 0x42, 0x00, 0x0c, 0x12, 0x86, 0x2f,
  0x00, 0x21, 0x97, 0xff, 0x29, 0x3f, 0x28, 0x3f, 0x0b, 0x22, 0x29, 0x4f,
  0x28, 0x3f, 0x8d, 0x02, 0x0c, 0x09, 0x80, 0x2d, 0x25, 0xd0, 0xd9, 0x11,
  0xd0, 0xd2, 0x20, 0xd0, 0xc8, 0x11, 0x28, 0x3f, 0x6d, 0x02, 0x0c, 0x07,
  0x60, 0x2d, 0x25, 0xd0, 0xb7, 0x11, 0xb0, 0xb2, 0x20, 0xd0, 0xa6, 0x11,
  0x28, 0x3f, 0xfb, 0x22, 0x20, 0x24, 0x41, 0xc0, 0x22, 0x11, 0x20, 0x11,
  0xc0, 0x2d, 0x01, 0x2d, 0x02, 0x29, 0x5f, 0x38, 0xaf, 0x28, 0x3f, 0x2a,
  0x23, 0x0b, 0x32, 0x28, 0x3f, 0x20, 0x20, 0x60, 0x20, 0x23, 0x10, 0x29,
  0x0f, 0x28, 0x8f, 0x29, 0x1f, 0x28, 0x9f, 0x29, 0x2f, 0x06, 0x16, 0x00,
  0x28, 0x2f, 0x38, 0x3f, 0x01, 0x80, 0xff, 0xc0, 0x00, 0x00, 0x01, 0x7f,
  0xff, 0xc0, 0x00, 0x00, 0x8c, 0x42, 0x0c, 0x22, 0x06, 0x12, 0x00, 0x00,
  0x38, 0x5f, 0x28, 0x1f, 0x48, 0x3f, 0x01, 0x71, 0xff, 0xc0, 0x00, 0x00,
  0x8c, 0x42, 0x0c, 0x32, 0x06, 0x0d, 0x00, 0x00, 0x38, 0x5f, 0x28, 0x2f,
  0x48, 0x3f, 0x01, 0x76, 0xff, 0xc0, 0x00, 0x00, 0x8c, 0x42, 0x0c, 0x42,
  0x06, 0x08, 0x00, 0x00, 0x38, 0x1f, 0x28, 0x3f, 0x2a, 0x23, 0x29, 0x1f,
  0x38, 0x2f, 0x28, 0x3f, 0x2a, 0x23, 0x29, 0x2f, 0x38, 0x0f, 0x28, 0x3f,
  0x20, 0x23, 0xc0, 0x29, 0x0f, 0x28, 0x0f, 0x56, 0x12, 0xfa, 0x0c, 0x02,
  0x1d, 0x0e, 0x1d, 0x0f, 0x02, 0x21, 0x13, 0xc2, 0x21, 0x12, 0xd2, 0x21,
  0x11, 0xe2, 0x21, 0x10, 0xf8, 0xf1, 0x12, 0xc1, 0x50, 0x0d, 0xf0, 0x00,
  0x92, 0xa0, 0xa0, 0x90, 0x11, 0xc0, 0x02, 0x61, 0x27, 0xf2, 0x61, 0x26,
  0x10, 0xf1, 0x20, 0x22, 0xa0, 0x09, 0x29, 0x0f, 0x22, 0xa0, 0x00, 0x45,
  0xda, 0xff, 0x4b, 0x2f, 0xc5, 0x19, 0x00, 0xcc, 0xd2, 0x85, 0x26, 0x00,
  0x4c, 0x02, 0x01, 0x5e, 0xff, 0xc0, 0x00, 0x00, 0x86, 0x04, 0x00, 0x00,
  0x7c, 0xf2, 0x29, 0x2f, 0x0c, 0x02, 0x22, 0x6f, 0x03, 0x22, 0xa0, 0x7e,
  0x01, 0x59, 0xff, 0xc0, 0x00, 0x00, 0x28, 0x2f, 0x66, 0x12, 0x52, 0x22,
  0xa0, 0x63, 0x01, 0x55, 0xff, 0xc0, 0x00, 0x00, 0x22, 0xa0, 0x70, 0x01,
  0x53, 0xff, 0xc0, 0x00, 0x00, 0x3c, 0xa2, 0x01, 0x51, 0xff, 0xc0, 0x00,
  0x00, 0x01, 0x50, 0xff, 0xc0, 0x00, 0x00, 0x28, 0x3f, 0x38, 0x4f, 0x42,
  0x2f, 0x05, 0x85, 0xe8, 0xff, 0x29, 0x0f, 0x01, 0x4d, 0xff, 0xc0, 0x00,
  0x00, 0x28, 0x0f, 0x22, 0xc2, 0x30, 0x01, 0x48, 0xff, 0xc0, 0x00, 0x00,
  0x0c, 0xa2, 0x01, 0x46, 0xff, 0xc0, 0x00, 0x00, 0x28, 0x0f, 0xcc, 0x82,
  0x7c, 0xf2, 0x29, 0x2f, 0x22, 0x2f, 0x04, 0x22, 0x6f, 0x03, 0x28, 0x2f,
  0x66, 0x02, 0x44, 0x22, 0xa0, 0x6c, 0x01, 0x3f, 0xff, 0xc0, 0x00, 0x00,
  0x22, 0xa0, 0x64, 0x01, 0x3d, 0xff, 0xc0, 0x00, 0x00, 0x0c, 0xa2, 0x01,
  0x3b, 0xff, 0xc0, 0x00, 0x00, 0x28, 0x3f, 0x05, 0xd5, 0xff, 0x29, 0x0f,
  0x22, 0xa0, 0x65, 0x01, 0x37, 0xff, 0xc0, 0x00, 0x00, 0x3c, 0xa2, 0x01,
  0x35, 0xff, 0xc0, 0x00, 0x00, 0x28, 0x0f, 0x22, 0xc2, 0x30, 0x01, 0x32,
  0xff, 0xc0, 0x00, 0x00, 0x0c, 0xa2, 0x01, 0x30, 0xff, 0xc0, 0x00, 0x00,
  0x28, 0x0f, 0x9c, 0x62, 0x21, 0x2c, 0xff, 0x31, 0x2b, 0xff, 0xc0, 0x20,
  0x00, 0x42, 0x23, 0x00, 0x31, 0x2a, 0xff, 0x30, 0x34, 0x20, 0xc0, 0x20,
  0x00, 0x32, 0x62, 0x00, 0x06, 0xff, 0xff, 0x00, 0x12, 0xc1, 0xd0, 0xf9,
  0xb1, 0xfd, 0x01, 0x29, 0x4f, 0x39, 0x5f, 0x49, 0x6f, 0xc6, 0x1c, 0x00,
  0x28, 0x5f, 0x1b, 0x32, 0x39, 0x5f, 0x22, 0x02, 0x00, 0x22, 0x4f, 0x05,
  0x22, 0xa0, 0x80, 0x29, 0x0f, 0x86, 0x16, 0x00, 0x00, 0x38, 0x4f, 0x21,
  0x1c, 0xff, 0x20, 0x43, 0x10, 0x0c, 0x13, 0x0c, 0x02, 0x40, 0x23, 0x93,
  0x22, 0x4f, 0x04, 0x32, 0x0f, 0x05, 0x28, 0x0f, 0x20, 0x23, 0x10, 0x9c,
  0xf2, 0x42, 0x0f, 0x04, 0x0c, 0x13, 0x0c, 0x02, 0x40, 0x23, 0x93, 0x20,
  0x30, 0x74, 0x0c, 0x12, 0x20, 0x23, 0x30, 0x20, 0x20, 0x74, 0x22, 0x4f,
  0x04, 0x22, 0x0f, 0x04, 0x20, 0x20, 0x04, 0x22, 0x4f, 0x04, 0x28, 0x4f,
  0xf0, 0x22, 0x11, 0x29, 0x4f, 0x22, 0x0f, 0x04, 0x8c, 0x82, 0x38, 0x4f,
  0x21, 0x0e, 0xff, 0x20, 0x23, 0x30, 0x29, 0x4f, 0x28, 0x0f, 0x20, 0x21,
  0x41, 0x29, 0x0f, 0x28, 0x0f, 0x56, 0x02, 0xfa, 0x28, 0x6f, 0x0b, 0x32,
  0x39, 0x6f, 0x56, 0x22, 0xf8, 0x28, 0x4f, 0x1d, 0x0f, 0xf8, 0xb1, 0x12,
  0xc1, 0x30, 0x0d, 0xf0, 0x12, 0xc1, 0xe0, 0x09, 0x71, 0xf9, 0x61, 0xfd,
  0x01, 0x29, 0x0f, 0x7c, 0xf2, 0x38, 0x0f, 0x42, 0xa0, 0x7c, 0x45, 0xf5,
  0xff, 0x1d, 0x0f, 0x08, 0x71, 0xf8, 0x61, 0x12, 0xc1, 0x20, 0x0d, 0xf0,
  0x12, 0xc1, 0xd0, 0x09, 0xb1, 0xf9, 0xa1, 0xfd, 0x01, 0x29, 0x4f, 0x2c,
  0x02, 0x29, 0x1f, 0x28, 0x4f, 0x29, 0x2f, 0x0c, 0x02, 0x29, 0x0f, 0xc6,
  0x07, 0x00, 0x28, 0x0f, 0xe0, 0x22, 0x11, 0x38, 0x2f, 0x2a, 0x23, 0x38,
  0x0f, 0xe0, 0x43, 0x11, 0x31, 0xf3, 0xfe, 0x3a, 0x34, 0xc0, 0x20, 0x00,
  0x38, 0x03, 0x39, 0x02, 0x28, 0x0f, 0x1b, 0x22, 0x29, 0x0f, 0x38, 0x0f,
  0x28, 0x1f, 0x27, 0x33, 0xd8, 0x28, 0x4f, 0xc5, 0xf9, 0xff, 0x29, 0x3f,
  0x28, 0x4f, 0x28, 0x02, 0x20, 0x20, 0x04, 0xcc, 0x92, 0x28, 0x4f, 0x32,
  0x22, 0x1f, 0x22, 0x2f, 0x03, 0x27, 0x13, 0x04, 0x0c, 0x12, 0x46, 0x00,
  0x00, 0x0c, 0x02, 0x1d, 0x0f, 0x08, 0xb1, 0xf8, 0xa1, 0x12, 0xc1, 0x30,
  0x0d, 0xf0, 0x00, 0x00, 0x12, 0xc1, 0xd0, 0x09, 0xb1, 0xf9, 0xa1, 0xfd,
  0x01, 0x29, 0x4f, 0x28, 0x4f, 0x31, 0xde, 0xfe, 0x39, 0x02, 0x22, 0x2f,
  0x04, 0x85, 0xf5, 0xff, 0x3d, 0x02, 0x28, 0x4f, 0x32, 0x62, 0x1f, 0x2c,
  0x02, 0x29, 0x1f, 0x28, 0x4f, 0x29, 0x2f, 0x0c, 0x02, 0x29, 0x0f, 0xc6,
  0x07, 0x00, 0x28, 0x0f, 0xe0, 0x32, 0x11, 0x21, 0xd4, 0xfe, 0x2a, 0x23,
  0x38, 0x0f, 0xe0, 0x33, 0x11, 0x48, 0x2f, 0x3a, 0x34, 0x38, 0x03, 0xc0,
  0x20, 0x00, 0x39, 0x02, 0x28, 0x0f, 0x1b, 0x22, 0x29, 0x0f, 0x38, 0x0f,
  0x28, 0x1f, 0x27, 0x33, 0xd8, 0x1d, 0x0f, 0x08, 0xb1, 0xf8, 0xa1, 0x12,
  0xc1, 0x30, 0x0d, 0xf0, 0x12, 0xc1, 0xf0, 0xf9, 0x31, 0xfd, 0x01, 0x21,
  0xc7, 0xfe, 0x0c, 0x03, 0xc0, 0x20, 0x00, 0x39, 0x02, 0x21, 0xc6, 0xfe,
  0x0c, 0x03, 0xc0, 0x20, 0x00, 0x39, 0x02, 0x1d, 0x0f, 0xf8, 0x31, 0x12,
  0xc1, 0x10, 0x0d, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x76, 0x25, 0x30, 0x38,
  0x78, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0xf5, 0x10, 0x40,
  0x68, 0xf5, 0x10, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x2d
};
unsigned int eboot_bin_len = 1408;
