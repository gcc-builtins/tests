#include <assert.h>
#include <stdint.h>

int main() {
  volatile uint16_t value = 0x1122;
  assert(__builtin_bswap16(value) == 0x2211);
  value = 0;
  assert(__builtin_bswap16(value) == 0);
  value = -1;
  assert(__builtin_bswap16(value) == (uint16_t)-1);
  value = 0x8765;
  assert(__builtin_bswap16(value) == (uint16_t)0x6587);
  value = 0x0011;
  assert(__builtin_bswap16(value) == (uint16_t)0x1100);
  return 0;
}
