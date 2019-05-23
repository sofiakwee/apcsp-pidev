#include <stdio.h>

int main()
{
  int a = 0;
  int b= 10;
  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else if (a == b)
  {
     printf("a is equal to b\n");
} 
 else if (a != b)
  {
     printf("a is not equal to b\n");
  }
  else if ( a > b)
{
    printf("a is greater than b\n");
}
   else if (a == 0 || b == 0)
{
    printf("a is equal to 0 or b is equal to 0\n");
}
 else
  {
    printf("a is not 0\n");
  }

}
