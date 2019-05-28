#include <stdio.h>

int main()
{

  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float c = 2.4;
  float* ptrtoc;

  ptrtoc = &c;
  c = 2.5;
  printf("The value of c is %f\n", c);

  *ptrtoc = 7;
  printf("The value of c is %f\n", c);

  printf("the value of ptrtoc is %d\n", ptrtoc);
  printf("It stores the value %d\n", *ptrtoc);
  printf("The adress of c is %d\n", &c);

  float d = 3.7;
  float* ptrtod;
 
  ptrtod = &d;
  c = 3.7;

  printf("the value of d is %f\n and the adress is %d\n", d, ptrtoc);

}

