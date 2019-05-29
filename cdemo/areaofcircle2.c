#include <stdio.h>

int main()
{
	char input[256], name[256];
	int age;

	printf("What is your name?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", name);

	printf("hello %s. How old are you?\n", name);
	while (1)
	{
		fgets(input, 256, stdin);
		if (sscanf(input, "%d", &age) == 1) break;
		printf("Not a valid age - try again!\n");
	}
	printf("Hi %s, you look young for %d...\n" name, age);
}

























//float areaOfCircle(float radius)

//{
//char input[265], name[265];
//int main(int argc, char* argv[])

//{

  //int arg = 0;
  //while(arg <argc)
   // {
     //  printf("Arg %d is %s\n", arg, argv[arg]);
      // arg++;
    // }
//}

//float area;
//area = 3.14 * radius * radius;
//return area;
//}

//int main ()
//{

//for (float i=3.5; i<13; i++)
// {
//float area = areaOfCircle(i);
//printf("The area is %f\n", area);
//}
//}





