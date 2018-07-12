#include <assert.h>

int main() {
  volatile int result = __builtin_choose_expr(2 == 2, 2, 3);
  assert(result == 2);
  result = __builtin_choose_expr(3 == 2, 2, 3);
  assert(result == 3);
  return 0;
}
