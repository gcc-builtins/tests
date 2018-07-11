#include <assert.h>

int main() {
  volatile int result = 1;
  __atomic_thread_fence(__ATOMIC_RELAXED);
  assert(result == 1);
}
