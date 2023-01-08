#include <stdio.h>

struct Student{
	char name[100];
	int age;
	float marks;
};

void displayStudentContents(struct Student *display)
{
	static int count = 1;
	printf ("\nStudent %d's Profile:\n", count);
	printf ("\n\tName: %s\n", display->name);
	printf ("\tAge: %d\n", display->age);
	printf ("\tMarks: %.2f\n\n", display->marks);
	
	++count;
}

int main()
{
	struct Student s1 = {"Shannen", 20, 88.1};
	struct Student s2 = {"Clint", 20, 90.3};
	
	displayStudentContents(&s1);
	displayStudentContents(&s2);
}

/*									
										STRUCTURE VARIABLE VS STRUCTURE MEMBER
										
Example struct:

struct student
{
	int age;
}s1;


Structure variable in the given example: s1
Stucture member in the given example: s1.age


	If structure variable is passed, the formal parameters of that other function
	should be of the same struct type (declare struct nameOfStruct *newVariable or struct nameOfStruct newVariable)
		Example if on the other function:
					void display(struct student *ptr)
	
	If structure member is passed, the formal parameters especially the data type,
	data type should NOT be struct type (data_type nameOfVariable or data_name *nameOfVariable)
		Example if on the other function:
					void display (int *ageOfStudent)
	
*/