#define lobyte(x)  ((uint8_t)((x) & 0x00ffu))

#define hibyte(x)  ((uint8_t)(((x) & 0xff00u) >> 8u))

#define min(a, b)  (((a) < (b)) ? (a) : (b))

#define max(a, b)  (((a) > (b)) ? (a) : (b))
