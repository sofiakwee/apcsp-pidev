#include <stdio.h>
#include <string.h>

struct Student {
  char firstname[256];
  char lastname[256];
  int age;
  int studentid;
};


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
