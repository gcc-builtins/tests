#include <assert.h>

int main() {
  volatile unsigned value = -1;
  assert(__builtin_ffs(value) == 1);

  value = 0;
  assert(__builtin_ffs(value) == 0);

  value = 0x100;
  assert(__builtin_ffs(value) == 9);

  value = 0x4321100;
  assert(__builtin_ffs(value) == 9);

  value = 0x43211f0;
  assert(__builtin_ffs(value) == 5);
}
