#include <assert.h>

int main() {
  volatile unsigned long value = -1;
  assert(__builtin_ctzl(value) == 0);

  if (sizeof(unsigned long) >= 8) {
    value = 0x10000000000LL;
    assert(__builtin_ctzl(value) == 40);

    value = 0x43211000000LL;
    assert(__builtin_ctzl(value) == 24);
  }

  value = 0x43211f0;
  assert(__builtin_ctzl(value) == 4);
  return 0;
}
