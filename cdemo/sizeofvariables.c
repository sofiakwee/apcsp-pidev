#include<stdio.h>

int main()
{
  int a = 545;
  float j = 1.23;
  char k = 'c';
  double d = 123;
  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("float value: %f and size %f bytes\n", j, sizeof(j));
  printf("char value: %c and size %c bytes\n", k, sizeof(k));
  printf("double value: %lf and size %lf bytes\n", d, sizeof(d));
}

