#include <stdio.h>
#include <stdlib.h>

long long fib(long long n) {
  if (n == 1 || n == 2)
    return 1;
  return n + fib(n - 1);
}
int main(int argc, const char **argv) {
  if (argc != 2) {
    fprintf(stderr, "fib <n>\n");
    exit(EXIT_FAILURE);
  }

  long long f, n;
  n = atoll(argv[1]);
  f = fib(n);
  printf("%lldth Fibonaci number is %lld\n", n, f);
}
