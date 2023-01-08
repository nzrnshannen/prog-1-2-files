/*
	A C program to compare two strings without using the string library functions.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char string1[50], string2[50], count = 0;
	char *ptr1 = string1, *ptr2 = string2;
	
	printf ("Input the first string: ");
	gets(string1);
	printf ("Input the second string: ");
	gets(string2);
	
	printf ("\nString 1: %s\nString 2: %s\n\n", string1, string2);
	
	//determining length of string1
	while (*ptr1!=NULL)
	{
		count++;
		ptr1++;
	}
	
	int string1_length = count;
	count = 0;
	
	//determining length of string2
	while(*ptr2!=NULL)
	{
		count++;
		ptr2++;
	}
	
	int string2_length = count;
	int flag = 0;
	ptr1 = string1, ptr2 = string2;
	
	//testing: printf ("%d %d", string1_length, string2_length);
	
	if (string1_length != string2_length)
	{
		printf ("\nStrings are not equal.");
		exit(1);
	}
	else
	{
		while (*ptr1!=NULL && *ptr2!=NULL)
		{
			if (*ptr1!=*ptr2)
			{
				flag = -1;
				break;
			}
			else
			{
				flag = 0;
				ptr1++, ptr2++;
			}
		}
	}
	
	if (flag == -1)
		printf ("\nStrings are not equal.");
	else
		printf ("\nStrings are equal.");

	return 0;

}