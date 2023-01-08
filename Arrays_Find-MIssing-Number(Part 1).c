#include <stdio.h>
int main()
{
	int n;
	printf ("Enter number of elements: ");
	scanf ("%d", &n);
	
	int arr1[n], arr2[n], i, t;
	
	printf ("Enter %d elements: (must be in order like 0-7 for instance)\n");
	for (i=0; i<n; i++)
		arr2[i] = 0;
	
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr1[i]);
		
		t = arr1[i];
		
		arr2[t] = arr1[i];
	}
	
	printf ("\n");
	
	int missingNum;
	
	for (i=0; i<n; i++)
	{
		if (arr2[i]==0)
			missingNum = i;
	}
	
	if (missingNum != 0)
		printf ("\n\nThe missing number is: %d", missingNum);
	else
		printf ("\n\nNo missing numbers at all. There are maybe duplicating numbers.");
	
	return 0;
}