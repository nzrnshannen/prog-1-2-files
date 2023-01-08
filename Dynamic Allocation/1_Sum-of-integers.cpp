#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int add(int*, int);

int main()
{
	int n, fSize;
	int result;
	printf ("How many integers would you like to input? ");
	scanf ("%d", &n);
	int *ptr;
	ptr = (int*)malloc(n*sizeof(int));
	
	int i;
	printf ("Enter %d integers:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", ptr + i);
	}
	
	printf ("\n");
	printf ("These are your integers: ");
	for (i=0; i<n; i++)
	{
		printf ("%d ", *(ptr + i));
	}
	
	printf ("\n");
	
	char choice;
	printf ("\nWould you like to add more integers? [Y] Yes   [N] No");
	printf ("\n\tChoice: ");
	scanf (" %c", &choice);
	
	
	if (choice == 'y' || choice == 'Y')  
	{
		int nAdd;
		printf ("\nHow many integers would you like to add? ");
		scanf ("%d", &nAdd);
		
		ptr = (int*)realloc(ptr, nAdd*sizeof(int));
		
		for (i=n; i<nAdd+n; i++)
		{
			printf ("element - %d: ", i);
			scanf("%d", ptr + i);
		}
		
		printf ("\nThese are your integers: ");
		fSize = nAdd + n;
		for (i=0; i<fSize; i++)
		{
			printf ("%d ", *(ptr+i));
		}
		
		printf ("\n");
		
		choice2:
		char choice2;
		printf ("\nEnter your choice:\n\t[A] Display sum only\n\t[B] Display both sum and average\n\t\tAnswer: ");
		scanf (" %c", &choice2);
		
		if (choice2 == 'a' || choice2 == 'A')
		{
			result = add(ptr, fSize);
			printf ("\n\nThe sum of all %d integers is: %d", fSize, result);	
		}
		
		else if(choice2 == 'b' || choice2 == 'B')
		{
			float ave;
			result = add(ptr, fSize);
			ave = result/fSize;
			printf ("\n\nThe sum of all %d integers is: %d\nAverage: %.2f", fSize, result, ave);
		}
		else
		{
			printf ("\nInvalid input. Try again.\n");
			goto choice2;
		}
	
	}
	
	else
	{
		fSize = n;		
		choice3:
		char choice3;
		printf ("\nEnter your choice:\n\t[A] Display sum only\n\t[B] Display both sum and average\n\t\tAnswer: ");
		scanf (" %c", &choice3);
		
		
		if (choice3 == 'a' || choice3 == 'A')
		{
			result = add(ptr, fSize);
			printf ("\n\nThe sum of all %d integers is: %d", fSize, result);
		}
		
		else if (choice3 == 'b' || choice3 == 'B')
		{
			float ave2 = 3;
			result = add(ptr, fSize);
			ave2 = result/fSize;
			printf ("\n\nThe sum of %d integers is: %d\nAverage: %.2f", fSize, result, ave2);
			
		}
		
		else
		{
			printf ("\n\nInvalid input. Try again.\n");
			goto choice3;
		}
		
	}
	
	free(ptr);
	ptr = NULL;
	
	return 0;
}

int add(int *ptr, int n)
{
	int i, j;
	char choice;
	
	forSort:
	printf ("\nBefore proceeding, would you like the array to be sorted?\n\t[Y] Yes  [N] No\n\tAnswer: ");
	scanf (" %c", &choice);	
	
	if (choice == 'y' || choice == 'Y')
	{
		char choice2;
		printf ("\nChoose an option: [A] Ascending  [B] Descending\n\tChoice: ");
		scanf (" %c", &choice2);
		
		printf ("\n\n");
		if (choice2 == 'a' || choice == 'A')
		{
			printf ("You chose Ascending. Now using insertion sort to sort your array...\n");
			
			for (i=1; i<n; i++)
			{
				int key = *(ptr+i);
				
				for (j=i-1; *(ptr+j)>=key && j >= 0; j--)
				{
					*((ptr+j)+1) = *(ptr+j);
				}
				
				*((ptr+j)+1) = key;
			}
			
			printf ("\n\nThese are your sorted elements: ");
			
			for (i=0; i<n; i++)
			{
				printf ("%d ", *(ptr+i));
			}
				
		}
		else if (choice2 == 'b' || choice == 'B')
		{
			printf ("You chose Descending. Now using the selection sort to sort your array...\n\n");
			
			for (i=0; i<n; i++)
			{
				int max_pos = i;
				
				for (j=i+1; j<n; j++)
				{
					int temp;
					
					if (*(ptr+j) > *(ptr+max_pos))
					{
						temp = *(ptr+j);
						*(ptr+j) = *(ptr + max_pos);
						*(ptr+max_pos) = temp;
					}
				}
			}
			
			printf ("\n\nThese are your sorted elements: ");
			
			for (i=0; i<n; i++)
			{
				printf ("%d ", *(ptr+i));
			}
		}
		else
		{
			printf ("\n\nInvalid input. Try again.");
			goto forSort;
		}
	}
	
	else
	{
		printf ("You chose No as an answer.\n\n");
	}
	
	int sum = 0;
	
	for (i=0; i<n; i++)
	{
		sum += *(ptr+i);
	}
	
	return sum;
}