#include <stdio.h>
#include <stdbool.h>

int main() {
  volatile bool result = __atomic_is_lock_free(sizeof(int), NULL);
  result = __atomic_is_lock_free(sizeof(long), NULL);
}
