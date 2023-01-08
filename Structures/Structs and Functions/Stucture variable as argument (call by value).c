#include <stdio.h>

struct Student{
	int age;
	char name[100];
	float marks;
};

void printContents(struct Student display) //This is like display = s1, meaning variable display will have the same contents as of s1 
{
	printf ("==STRUCTURE VARIABLES AS ARGUMENTS [Pass by Copy]==\n");
	printf ("\nName: %s\n", display.name);
	printf ("Age: %d\n", display.age);
	printf ("Marks: %.1f\n", display.marks);
}

int main()
{
	struct Student s1 = {20, "Shannen Nazareno", 90.5};
	printContents(s1);
	
	return 0;
}