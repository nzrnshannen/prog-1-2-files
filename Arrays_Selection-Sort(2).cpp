#include <stdio.h>
int main()
{
	int a[] = {5, 9, 7, 6, 4, 0, 2, 3, 8, 1};
	int n = sizeof(a)/sizeof(a[0]);
	
	int i, j;
	
	for (i=0; i<n-1; i++)
	{
		int min_pos = i;
		for (j=i+1; j<n; j++)
		{
			if (a[j]<a[min_pos])
			{
				min_pos = j;
			}
		}
		
		int temp = a[i];
		a[i] = a[min_pos];
		a[min_pos] = temp;
	
	}
	
	printf ("\n");
	
	for(i=0; i<n; i++)
	{
		printf ("a[%d]: %d\n", i, a[i]);
	}
	
	return 0;
}