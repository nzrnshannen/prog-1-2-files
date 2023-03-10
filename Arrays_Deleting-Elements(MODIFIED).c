/******************************************************************************************

Program: Delete an Element in an Array

Description: This is just the modified version that I have created about deleting
an array element.

Author: Shannen Nazareno

*******************************************************************************************/

#include <stdio.h>
#include <ctype.h>

//3 function prototypes
void printArray(int[], int);
int* deleteElement(int[], int*, int);
int messageBox();

int main()
{
	
start:
	int pos, n, i;

//program will ask for the number of elements
	printf ("Enter number of elements: ");
	scanf ("%d", &n);
	
	int arr[n];
	
	printf("Input %d elements in the array:\n", n);
	for(i=0; i<n; i++)
	{
		enterElement: 
		printf ("Element - %d: ", i);
		scanf("%d", &arr[i]);
	}
	
	printf ("\nGiven array: ");
	printArray(arr, n);
	
input:
	printf ("\nEnter the position of the element to be deleted: ");
	scanf ("%d", &pos);
	if (pos>=n)
	{
		//upon entering a position, it must be between 0 and number_of_elements-1, otherwise, if position is >= to number_of_elements, program will make the user enter again
		//program will ask the user to enter an appropriate position
		printf ("Element at position %d cannot be found. Try again.\n", pos);
		goto input;
	}
	
	int *ptr = deleteElement(arr, &n, pos);
	
	printf ("\nNew array: ");
	printArray(ptr, n);
	
	int result = messageBox();
	
	if (result == 1)
	{
		goto start;
	}
	
	else
	{
		printf ("\n\aBye-bye!");
	}
	
	return 0;
}

void printArray(int arr[], int n)
{
	for(int i =0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	
	printf ("\n");
}

int* deleteElement(int arr[], int *n, int pos)
{
	int i, j;
	
	for(i=0;i<*n; i++)
	{
		if (i==pos)
		{
			for(j=pos; j<*n;j++)
			{
				arr[j] = arr[j+1];
			}
			
			if (j==*n)
			{
				break;
			}
		}
	}
	
	(*n)--;
	
	return arr;
}

int messageBox()
{
	char choice;
	
enterChoice:
	printf ("\nWould you like to use the program again?\n\t[Y] Yes\t[N] No\n");
	printf ("Choice: ");
	scanf(" %c", &choice);
	
	printf ("\n");
	
	if(isalpha(choice))
	{
		if (tolower(choice) == 'y')
			return (1);
		else if (tolower(choice) == 'n')
			return (0);
		else
		{
			printf ("\n\n\tWrong input. Try again.\n");
			goto enterChoice;
		}
	}
	else
	{
		printf ("\n\n\tWrong input. Try again.\n");
		goto enterChoice;
	}
}