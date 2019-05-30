#include <stdio.h>
#include <string.h>

struct students {
  char firstname[50];
  char lastname[50];
  int age[30];
  int studentid[1000];
};


void printstudentsByVal(struct students students)
{
  printf("my student is -\n");
  printf("  firstname:%s\n", students.firstname);
  printf("  lastname:%s\n", students.lastname);
  printf("  age:%d\n", students.age);
  printf("  studentid:%d\n", students.studentid);
}

void printstudentsByPtr(struct students* students)
{
  printf("my student is -\n");
  printf("  firstname:%s\n", students->firstname);
  printf("  lastname:%s\n", students->lastname);
  printf("  age:%d\n", students->age);
  printf("  id:%d\n", students->studentid);
}

int main()
{
  struct students students1;
  struct students students2;

  struct students arr[2];
  for (int x = 0; x<2; x++)
{

  printf("Enter student's first name");
  scanf("%s", arr[x].firstname);
  printf("Enter student's last name");
  scanf("%s", arr[x].lastname);
  printf("Enter student's age");
  scanf("%d", arr[x].age);
  printf("Enter student id");
  scanf("%d", arr[x].studentid);
}
  printstudentsByVal(students1);
  printstudentsByPtr(&students1);
}
