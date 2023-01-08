#include <stdio.h>

typedef struct{
	char name[50];
	int age;
	char sex;
	float cgpa;
}Student;

int main()
{
	int n;
	printf ("Indicate the number of students: ");
	scanf ("%d", &n);
	printf ("\n");
	
	Student std[n];
	Student *ptr = std;
	int i;
	
	fflush(stdin);
	
	for (i=0; i<n; i++)
	{
		printf ("Enter student %d's name: ", i+1);
		gets(std[i].name);
		printf ("Sex: ");
		scanf ("%c", &std[i].sex);
		printf ("Age: ");
		scanf ("%d", &std[i].age);
		printf ("CGPA: ");
		scanf ("%f", &std[i].cgpa);
		
		printf ("\n");
	    
		fflush(stdin);
	}
	
	printf ("\n");
	
	for (i=0; i<n; i++)
	{
		printf ("\t\tSTUDENT %d \n", i+1);
		printf ("Name: %s\nAge: %d\nSex: %c\nCGPA: %.2f", ptr->name, ptr->age, ptr->sex, ptr->cgpa);
		printf ("\n\n");
	}	
	
	return 0;
}