#include <stdio.h>
void findFact (int, int*);

int main()
{
	int n, fact = 1;
	printf ("Input number: ");
	scanf ("%d", &n);
	findFact (n, &fact); //call by value and reference 
	
	printf ("The factorial of %d is: %d", n, fact);
	return 0;
}

void findFact (int n, int *f) //*f poitns to fact from main
{
	int i;
	
	for (i=1; i<=n; i++) //n is the limit, i is the one to be incremented
	{
		*f = *f * i; //every loop, fact from main will keep on changing its value
	}
}