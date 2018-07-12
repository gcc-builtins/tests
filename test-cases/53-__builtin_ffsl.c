#include <assert.h>

int main() {
  volatile unsigned long value = -1;
  assert(__builtin_ffsl(value) == 1);

  value = 0;
  assert(__builtin_ffsl(value) == 0);

  if (sizeof(unsigned long) >= 8) {
    value = 0x10000000000000;
    assert(__builtin_ffsl(value) == 53);
    value = 0x432110000000;
    assert(__builtin_ffsl(value) == 29);
  }
  value = 0x43211f0;
  assert(__builtin_ffsl(value) == 5);
  return 0;
}
