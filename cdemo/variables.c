#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);

 int d = 4;
 a = d;
 c = a;
 d = c;
 printf("%d and %d\n", a, c);
}
