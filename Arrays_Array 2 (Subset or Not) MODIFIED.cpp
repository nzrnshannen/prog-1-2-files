#include <stdio.h>
int main()
{
	int big_size, n_size;
	printf ("Enter size for the first array: ");
	scanf ("%d", &big_size);
	printf ("Enter size for the second array: ");
	scanf ("%d", &n_size);
	
	int i, j;
	int bigArr[big_size], subsetArr[n_size];
	printf ("\nEnter %d elements for the first array:\n", big_size);
	for(i=0; i<big_size; i++)
	{
		printf ("Element #%d: ", i+1);
		scanf ("%d", &bigArr[i]);
	}
	
	printf ("\nEnter %d elements for the seconed array:\n", n_size);
	for(i=0; i<n_size; i++)
	{
		printf ("Element #%d: ", i+1);
		scanf ("%d", &subsetArr[i]);
	}
	
	printf ("\nFirst array: ");
	for(i=0; i<big_size; i++)
		printf ("%d ", bigArr[i]);
	printf ("\n");
	
	printf ("Second array: ");
	for(i=0; i<n_size; i++)
		printf ("%d ", subsetArr[i]);
	printf ("\n");
	
	i = 0;
	j = 0;
	int flag = 0;
	
	while(i<n_size && j<big_size)
	{
		if (subsetArr[j]==bigArr[i])
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			break;
		}
		
		i++;
		j++;
	}
	
	if (flag == 1)
	{
		printf ("\nThe second array is a subset of first array.\n");
	}
	else
	{
		printf ("\nThe second array is not a subset of the first array.\n");
	}
	
	return 0;
}