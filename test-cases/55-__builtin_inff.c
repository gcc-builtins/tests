#include <assert.h>
#include <float.h>
#include <math.h>

int main() {
  volatile float inf = __builtin_inff();
  assert(isinff(inf) && inf >= FLT_MAX);
}
