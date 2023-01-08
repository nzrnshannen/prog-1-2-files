#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Student{
	char name[50];
	int rollno;
};

void display(char[], int); //for structure members passing
void show(struct Student); //for structure variable passing

int main()
{
	struct Student Shannen;
	
	strcpy(Shannen.name, "Shannen Nazareno");
	Shannen.rollno = 1234;
	
	display(Shannen.name, Shannen.rollno); //passing structure members
	show(Shannen); //passing structure variable
	
	getch();
	return 0;
}


void display(char name[], int r)
{
	printf ("In display() function:\n");
	printf ("\tName = %s, Rollnumber = %d\n\n", name, r);
}

void show(struct Student s)//s = Shannen
{
	printf ("In show() function:\n");
	printf ("\tName = %s, Rollnumber = %d\n", s.name, s.rollno);
}