#include <stdio.h>
int main()
{
	int i, j, num;
	printf ("Enter a positive integer: ");
	scanf ("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		{
			printf ("%d ", i);
		}
	}
	
	return 0;
}