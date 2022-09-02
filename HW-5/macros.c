#include <stdio.h>

#define SETBIT(mask,bit) (mask |= (1 << (bit)))
#define CLEARBIT(mask,bit) (mask &= ~(1 << (bit)))
#define FLIPBIT(mask,bit) (mask ^= (1 << (bit)))
#define CHECKBIT(mask,bit) (mask & (1 << (bit)))
#define INVERSEBIT(mask,bit) (mask ~ (1 << (bit)))
#define MAX(x,y,z) (x>y?(x>z? x:z):(y>z? y:z))
#define MIN(x,y,z) (x<y?(x<z? x:z):(y<z? y:z))
#define SWAP(x,y) (x = x + y; y = x - y; x = x - y;)

