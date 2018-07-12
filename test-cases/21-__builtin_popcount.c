#include <assert.h>

int main() {
  unsigned int value = 0;
  assert(__builtin_popcount(value) == 0);
  value = -1;
  assert(__builtin_popcount(value) == sizeof(int) * 8);
  value = 0xf0f0f0f;
  assert(__builtin_popcount(value) == 16);
  value = 0x11101010;
  assert(__builtin_popcount(value) == 5);
  return 0;
}
