#include <stdio.h>
#include "student.h"

void printStudentByVal(struct Student student)
{
  printf("my student is -\n");
  printf("  firstname:%s\n", student.firstname);
  printf("  lastname:%s\n", student.lastname);
  printf("  age:%d\n", student.age);
  printf("  studentid:%d\n", student.studentid);
}

  void printStudentByPtr(struct Student* student)
{
  printf("my student is-\n");
  printf("  firstname:%s\n", student->firstname);
  printf("  lastname:%s\n", student->lastname);
  printf("  age:%d\n", student->age);
  printf("  id:%d\n", student->studentid);
}

