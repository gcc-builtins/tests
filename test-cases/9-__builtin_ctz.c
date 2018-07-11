#include <assert.h>

int main() {
  volatile unsigned value = -1;
  assert(__builtin_ctz(value) == 0);

  value = 0x100;
  assert(__builtin_ctz(value) == 8);

  value = 0x4321100;
  assert(__builtin_ctz(value) == 8);

  value = 0x43211f0;
  assert(__builtin_ctz(value) == 4);
}
