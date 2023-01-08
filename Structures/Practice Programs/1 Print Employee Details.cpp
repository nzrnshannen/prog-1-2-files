#include <stdio.h>

struct Employee{
	int id;
	char name[20];
	char designation[20];
	char dept[20];
	int salary;
};

void printDetails(struct Employee p)
{
	printf ("\n[EMPLOYEE DETAILS]\n");
	printf ("ID: %d", p.id);
	printf ("\nName: %s", p.name);
	printf ("\nDesignation: %s", p.designation);
	printf ("\nDepartment: %s", p.dept);
	printf ("\nSalary: %d\n\n", p.salary);
}

int main()
{
	struct Employee a;
	printf ("Enter employee details:\n");
	printf ("ID: ");
	scanf ("%d", &a.id);
	printf ("Name: ");
	scanf("%s", a.name);
	printf("Enter designation: ");
	scanf ("%s", a.designation);
	printf ("Enter department: ");
	scanf ("%s", a.dept);
	printf ("Enter salary: ");
	scanf ("%d", &a.salary);
	
	printf ("\n-----------------------");
	
	printDetails(a);
	
	return 0;
	
}