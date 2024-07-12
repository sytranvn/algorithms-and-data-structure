#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv) {
  int a, b;
  if (argc != 3) {
    printf("gcd <a> <b>\n");
    exit(1);
  }

  a = atoi(argv[1]);
  b = atoi(argv[2]);

  printf("GCD of %d and %d is ", a, b);
  while (a - b) {
    if (a > b)
      a = a - b;
    else
      b = b - a;
  }
  printf("%d\n", a);
  return 0;
}
