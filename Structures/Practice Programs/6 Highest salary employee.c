#include <stdio.h>

struct Employee{
	int emp_no;
	char emp_name[100];
	int emp_salary;
};

int main()
{
	int n;
	printf ("Number of employees: ");
	scanf ("%d", &n);
	
	struct Employee emp[n];
	int i, highest =0;
	
	printf ("---------------------------------\n");
	printf ("Enter details for %d employees:\n", n);
	printf ("---------------------------------\n");
	
	for(i=0; i<n; i++)
	{
		printf ("Employee Number: ");
		scanf ("%d", &emp[i].emp_no);
		printf ("Name: ");
		scanf (" %[^\n]s", emp[i].emp_name);
		printf ("Salary: ");
		scanf ("%d", &emp[i].emp_salary);
		printf ("--------------------------------\n");
	}
	
	int empIndex;
	
	for(i=0; i<n ;i++)
	{
		if(emp[i].emp_salary>highest)
		{
			highest = emp[i].emp_salary;
			empIndex = i;
		}
	}
	
	printf ("\n\n--------------------------------------\n");
	printf ("Highest salary employee details:\n");
	printf ("-------------------------------------\n");
	printf ("EMPNO\t\tNAME\t\tSALARY\t\t");
	printf ("\n%d\t\t%s\t\t%d", emp[empIndex].emp_no, emp[empIndex].emp_name, emp[empIndex].emp_salary);
	printf ("\n");
	
	return 0;
}