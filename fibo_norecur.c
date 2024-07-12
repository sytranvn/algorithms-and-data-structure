#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

long long fib(long long n) {
  int a = 1, b = 0, c = 0;
  assert(n > 0);
  for (long long i = 1; a <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  return c;
}
int main(int argc, const char **argv) {
  if (argc != 2) {
    fprintf(stderr, "fib <n>\n");
    exit(EXIT_FAILURE);
  }

  long long f, n;
  n = atoll(argv[1]);
  if (n > 1000000000) {
    fprintf(stderr, "n is too big and result will be overflow. "
                    "Please input n < 1000000000.\n");
    exit(EXIT_FAILURE);
  }
  f = fib(n);
  printf("%lldth Fibonaci number is %lld\n", n, f);
}
