#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i;
	printf ("Number of elements: ");
	scanf ("%d", &n);
	
	int *ptr = (int*)malloc(sizeof(int) * n);
	
	printf ("Input %d number of elements:\n", n);
	
	for (i=0; i<n; i++)
	{
		printf ("Number %d: ", i+1);
		scanf ("%d", ptr+i);
	}
	
	printf ("\n");
	
	int lrgNum;
	i = 0;
	lrgNum = *(ptr+i);
	for (i=1; i<n; i++)
	{
		if (*(ptr+i)>lrgNum)
		{
			lrgNum = *(ptr+i);
		}
	}
	
	
	
	printf ("\n\nThe largest element is: %.2f", (float)lrgNum);
	
	return 0;
	
}