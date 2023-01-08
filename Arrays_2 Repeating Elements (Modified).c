#include <stdio.h>
int main()
{
	int n, i, c= 0, flag = 1;
	printf ("Enter n: ");
	scanf ("%d", &n);
	
	int arr[n];
	printf ("Input %d elements in the array:\n", n);
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\nGiven array: ");
	for(i=0; i<n; i++)
	{
		printf ("%4d", arr[i]);
	}
	printf ("\n");
	
	printf ("\nRepeating elements: ");
	for(i=0; i<n; i++)
	{
		for(int j = i+1; j<n; j++)
		{
			if(arr[i]==arr[j] && arr[i]!=-1 && arr[j]!= -1)
			{
				arr[j] = -1;
				flag =1;
			}
		}
		
		if (flag == 1 && c!=2)
		{
			printf("[%d] ", arr[i]);
			arr[i] = -1;
			c++;
		}
		
		else if (c==2)
		{
			break;
		}
		
		flag = 0;
		c = 0;
		
	}
}