#include <assert.h>
#include <stdint.h>

int main() {
  volatile uint64_t value = 0x1122334455667788;
  assert(__builtin_bswap64(value) == 0x8877665544332211);
  value = 0;
  assert(__builtin_bswap64(value) == 0);
  value = -1;
  assert(__builtin_bswap64(value) == -1);
  value = 0x87654321;
  assert(__builtin_bswap64(value) == 0x2143658700000000);
  value = 0x0011001100110011;
  assert(__builtin_bswap64(value) == 0x1100110011001100);
  return 0;
}
