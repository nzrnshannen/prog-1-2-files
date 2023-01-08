#include <stdio.h>

/*
	Formula: admission date (year) - birth date (year) 
*/
struct Student{
	char name[100];
	int rollno;
	
	struct{
		int day;
		int month;
		int year;
	}bday, admission;
};

int main()
{
	struct Student s;
	int calculateAdmission = 0;
	printf ("\nEnter roll number: ");
	scanf ("%d", &s.rollno);
	printf ("Enter name: ");
	scanf (" %[^\n]s", s.name);
	printf ("Enter birth-date [add '-']: ");
	scanf ("%d-%d-%d", &s.bday.day, &s.bday.month, &s.bday.year);
	printf ("Enter admission date [add '-']: ");
	scanf ("%d-%d-%d", &s.admission.day, &s.admission.month, &s.admission.year);
	
	calculateAdmission = s.admission.year - s.bday.year;
	
	printf ("-------------------------------------------\n");
	printf ("\nApproximate age of student at the time of admission: %d years", calculateAdmission);
	
	return 0;
}