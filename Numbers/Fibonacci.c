#include <stdio.h>
int main()
{
	int n;
	printf ("Enter a number: ");
	scanf ("%d", &n);
	
	int t1, t2, nextNum = 0;
	t1 = 0;
	t2 = 1;
	printf ("%d ", t2);
	for(int i=1; i<n; i++)
	{
		nextNum = t1 + t2;
		t1 = t2;
		t2 = nextNum;
		printf ("%d ", nextNum);
	}
}