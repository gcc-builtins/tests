#include <math.h>
#include <float.h>
#include <assert.h>

int main() {
  volatile float inf = __builtin_inff();
  assert(isinff(inf) && inf >= FLT_MAX);
}
