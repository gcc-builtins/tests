#include <assert.h>

int main() {
  volatile unsigned long value = 0;
  assert(__builtin_popcountl(value) == 0);
  value = -1L;
  assert(__builtin_popcountl(value) == sizeof(long) * 8);
  value = 0xf0f0f0f0f0f0f0fL;
  assert(__builtin_popcountl(value) == 32);
  value = 0x11101010L;
  assert(__builtin_popcountl(value) == 5);
}
