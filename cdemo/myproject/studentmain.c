#include <stdio.h>
#include <string.h>
#include "student.h"

 int main()
{
  struct Student studentArr[50];

  int y;
  int i;

  printf("How many students?");
  scanf("%d",&y);

  for (int i = 0; i<y; i++)
  {

    printf("Enter student's first name");
    scanf("%s", studentArr[i].firstname);
    printf("Enter student's last name");
    scanf("%s", studentArr[i].lastname);
    printf("Enter student's age");
    scanf("%d", &studentArr[i].age);
    printf("Enter student id");
    scanf("%d", &studentArr[i].studentid);

    printStudentByVal(studentArr[i]);
  }
}

