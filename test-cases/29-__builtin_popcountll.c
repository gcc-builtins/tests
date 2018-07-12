#include <assert.h>

int main() {
  volatile unsigned long long value = 0;
  assert(__builtin_popcountll(value) == 0);
  value = -1LL;
  assert(__builtin_popcountll(value) == sizeof(long long) * 8);
  value = 0xf0f0f0f0f0f0f0fLL;
  assert(__builtin_popcountll(value) == 32);
  value = 0x11101010LL;
  assert(__builtin_popcountll(value) == 5);
  return 0;
}
