#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;
  int temp;
  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);


 temp = c;
 c = a;
 a = temp;

 printf("a is now %d and c is now %d\n", a, c);
}
