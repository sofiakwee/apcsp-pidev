#include <stdio.h>

float areaOfCircle(float radius)

{
char input[265], name[265];
float area;
area = 3.14 * radius * radius;
return area;
}

int main ()
{

for (float i=3.5; i<13; i++)
 {
float area = areaOfCircle(i);
printf("The area is %f\n", area);
}
}





