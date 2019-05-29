  #include <stdio.h>

  float areaOfCircle(float radius)

  {
  float area;
  area = 3.14 * radius * radius;
  return area;
  }

  int main()
  {
  float a;
  float radius;
  char input[64];
  int c;

  {

  printf("what is the radius\n");
  fgets(input, 64, stdin);
  sscanf(input, "&d", &c);

  a = areaOfCircle(c);
  printf("The area is %f\n",a);
  }
  }





