#include <stdio.h>

void addArray();
void main()
{
  int arr[100];
  for (int a = 0; a < 100; a++)
  {
     arr[a] = a*a;
     printf("%d\n", arr[a]);
}
 printf("\n");
 addArray(arr, 100, 1);
}

void addArray(int* arr, int s, int n)
{
  for (int x = 0; x < s; x++)
{
arr[x]+ arr[x] + n;
printf("%d\n", arr[x]);
}
}
