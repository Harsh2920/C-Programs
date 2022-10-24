#include <stdio.h>
int nprime(int n);
int main() {

  int n1, n2, i, p;

  printf("Enter two numbers - ");
  scanf("%d %d", &n1, &n2);
  if (n1 > n2) {
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
  }
  for (i = n1 + 1; i < n2; ++i) {
    p = nprime(i);

    if (p == 1) {
      printf("%d ", i);
    }
  }
  
  return 0;
}
int nprime(int n) {
  int j, p = 1;

  for (j = 2; j <= n / 2; ++j) {

    if (n % j == 0) {
      p = 0;
      break;
    }
  }

  return p;
}

