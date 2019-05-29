#include <stdio.h>

  struct student {
	char first name[50];
	char last name[50];
	char age[50];
	char student id[50];

   int printStudent(struct Student* student)
   {
   char input[64];
   int a;
   printf("What is the student's first name?\n");
   fgets(input, 64, stdin);
   sscanf(input, "&d", &c);

