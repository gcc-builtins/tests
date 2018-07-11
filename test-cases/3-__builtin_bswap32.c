#include <assert.h>
#include <stdint.h>

int main() {
  volatile uint32_t value = 0x11223344;
  assert(__builtin_bswap32(value) == 0x44332211);
  value = 0;
  assert(__builtin_bswap32(value) == 0);
  value = -1;
  assert(__builtin_bswap32(value) == -1);
  value = 0x87654321;
  assert(__builtin_bswap32(value) == 0x21436587);
  value = 0x00110011;
  assert(__builtin_bswap32(value) == 0x11001100);
}
