#include <assert.h>

int main() {
  assert(__builtin_constant_p(0));
  return 0;
}
