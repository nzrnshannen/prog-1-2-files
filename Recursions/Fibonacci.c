#include <stdio.h>
void fibonacci(int, int, int, int, int);

int main()
{
	int t1, t2, nextTerm = 0;
	int num, i = 0;
	printf ("Input number of terms for the series (<20): ");
	scanf ("%d", &num);
	
	t1 = 0;
	t2 = 1;
	nextTerm = t1 + t2;
	printf ("\nFibonacci series:\n");
	
	fibonacci(i, num, t1, t2, nextTerm);
	
	return 0;
}

void fibonacci(int i, int num, int t1, int t2, int nextTerm)
{
	if(i>=num)
	{
		return;
	}
	else
	{
		printf ("%d ", nextTerm);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		
		fibonacci(i+1, num, t1, t2, nextTerm);
	}
}