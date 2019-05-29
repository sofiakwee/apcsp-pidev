  #include <stdio.h>

  float areaOfCircle(float radius)

  {
  float area;
  area = 3.14 * radius * radius;
  return area;
  }

  int main ()
  {
  float a;
  float b;
  char input[30];
  int c;

  {

  printf("what is the radius\n");
  fgets(input, 30, stdin);
  sscanf(input, "&d", &c);

  a = areaofcircle(c);
  printf("The area is %f\n",a);
  }
  }





