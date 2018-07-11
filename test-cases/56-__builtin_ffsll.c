#include <assert.h>

int main() {
  volatile unsigned long long value = -1;
  assert(__builtin_ffsll(value) == 1);

  value = 0;
  assert(__builtin_ffsll(value) == 0);

  value = 0x10000000000000;
  assert(__builtin_ffsll(value) == 53);

  value = 0x432110000000;
  assert(__builtin_ffsll(value) == 29);

  value = 0x43211f0;
  assert(__builtin_ffsll(value) == 5);
}
