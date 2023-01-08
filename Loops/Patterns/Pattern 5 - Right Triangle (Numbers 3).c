#include <stdio.h>
int main()
{
	int i, j, num, t = 1, flag = 0;
	printf ("Enter num: ");
	scanf ("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf ("%3d", t++);
		}
		
		printf ("\n");
	}
	
	return 0;
}