#include <stdio.h>
int main()
{
	int num;
	printf ("Enter num: ");
	scanf ("%d", &num);
	
	int i, j;
	for(i=1; i<=num; i++)
	{
		printf ("Row %d:\t\t", i);
		for(j=1; j<=i; j++)
		{
			printf ("%4d", j);
		}
		printf ("\n");
	}
	
	return 0;
}