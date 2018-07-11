#include <assert.h>

int main() {
  volatile unsigned long long value = -1;
  assert(__builtin_ctzll(value) == 0);

  value = 0x10000000000LL;
  assert(__builtin_ctzll(value) == 40);

  value = 0x43211000000LL;
  assert(__builtin_ctzll(value) == 24);

  value = 0x43211f0;
  assert(__builtin_ctzll(value) == 4);
}
