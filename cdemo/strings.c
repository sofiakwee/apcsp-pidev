#include <stdio.h>
#include <string.h>

int main()
{

  char* str1 = "abcdefghijklmnopqrstuvwxyz";

  printf("str1 : %s\n", str1);

  char str2[27];
  for(int i = 0; i < 26; i++)
    str2[i] = 'a' + i;
  str2[26] = '\0';

  printf("str2 : %s\n", str2);


  int result;
  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);
    
  for (int i = 0; i < 26; i++)
    str2[i] = str2[i] - 32;

  printf("str2 : %s\n", str2);
  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);
  


  char str3[53];
  strcpy(str3, str1);
  strcat(str3, str2);
  printf("%s\n", str3);

}
