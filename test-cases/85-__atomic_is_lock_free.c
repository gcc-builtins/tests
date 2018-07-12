#include <stdbool.h>
#include <stdio.h>

int main() {
  volatile bool result = __atomic_is_lock_free(sizeof(int), NULL);
  result = __atomic_is_lock_free(sizeof(long), NULL);
  return 0;
}
