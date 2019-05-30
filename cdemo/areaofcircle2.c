#include <stdio.h>

  float areaOfCircle(float radius)

  {
  float area = 3.14 * (radius *radius );
  return area;
  }

  int main ()
  {
  char input[64];
  int d;
  float c;
  float radius;


  printf("what is the radius\n");
  fgets(input, 64, stdin);
  sscanf(input, "%d", &d);

  c = areaOfCircle(d);
  printf("The area is %f\n", c);
  }





