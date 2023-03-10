/*==========================================================================================================
PROGRAM: A Simple C Program to Display the Element Appearing the (Maximum) Number of Times
Created by: Shannen T. Nazareno
Date: October 18, 2022
=============================================================================================================*/




#include <stdio.h>
int main()
{
	int n;
	printf ("Enter n: ");
	scanf ("%d", &n);
	
	int arr[n], i, j, c, maxCount, maxEle;
	c = maxCount = 0;
	
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
	
	
	for(i=0; i<n ;i++)
	{
		c = 1;
		for(j=i+1; j<n; j++)
		{
			if (arr[i]==arr[j] && arr[i]!= -1 && arr[i]!=-1)
			{
				c++;
				arr[j] = -1;
			}
		}
		
		if(maxCount<c)
		{
			maxCount = c;
			maxEle = arr[i];
		}

	}
	
	
	printf ("\nMaximum element appearing: %d\nFrequency: %d\n", maxEle, maxCount);
	
	return 0;
}