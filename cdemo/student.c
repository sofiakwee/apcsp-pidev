#include <stdio.h>

  struct student {
	char firstname[50];
	char lastname[50];
	int age;
	int studentid;
   void printStudent(struct Students* student);
   int main()
{
   int studentid;
   int studentid2;
   int age;
   int age2;
   char input[64];
   char firstname[256]
   char firstname2[256]
   char lastname[256]
   char lastname2[256]
   struct Students student1;
   struct Students student2;

  printf("what is your student's first name?");
  fgets(input, 256, stdin);
  sscan(input, "%s", firstname);
  strcpy(student1.firstname
  printf("what is your student's last name?");
  fgets(input, 256, stdin);
  sscan(input, "%s", lastname);
  printf("what is you student's age?");
  fgets(input, 256, stdin);
  sscan(input, "%d", &age);
  print("What is your student's student id?");
  fgets(input, 256, stdin);
  sscan(input, "%d", &studentid);

