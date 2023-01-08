// A C program about the usage of pointer to structure

#include <stdio.h>
struct EmpAddress
{
	char *ename;
	char stname[20];
	int pincode;
}employee={"John Alter", "Court Street\n", 654134}, *pt = &employee;

int main()
{
	printf ("%s from %s", pt->ename, pt->stname);
// OR printf("%s from %s", (*pt).ename, (*pt).stname);
}