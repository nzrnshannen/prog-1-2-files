/*==================================================================================
PROGRAM: A Simple C Program To Check if Strings are Anagrams or Not
Created by: Shannen T. Nazareno
Date: 10/19/2022
====================================================================================*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	
input:
	char string1[100], string2[100], c;
	int i, j, string1_length, string2_length;
	
	i = j = string1_length = string2_length = 0;
	
	printf ("Enter string1: ");
	while((c=getchar())!='\n')
	{
		string1[i] = c;
		i++;
		string1_length++;
	}
	string1[i] = '\0';
	
	printf ("String 1: %s\n", string1);
	
	printf ("\nEnter string2: ");
	while((c=getchar())!='\n')
	{
		string2[j] = c;
		j++;
		string2_length++;
	}
	string2[j] = '\0';
	printf ("String 2: %s", string2);
	
	printf ("\n\nLength of string1: %d", string1_length);
	printf ("\nLength of string2: %d\n", string2_length);
	
	char *ptr1, *ptr2;
	ptr1 = string1;
	ptr2 = string2;
	int flag;
	
	i = j = flag =0;
	
	if (string1_length == string2_length)
	{
		for(i=0; i<string1_length; i++)
		{
			for(j=0; j<string2_length; j++)
			{
				if(*(ptr1+i)==*(ptr2+j))
				{
					flag = 1;
				}
			}
			
			if(flag==1)
			{
				continue;
			}
			else
			{
				break;
			}
		}
		
		if (flag==1)
		{
			printf ("\nBoth strings, '%s' and '%s' are anagrams.", string1, string2);
		}
		else
		{
			printf ("\nBoth strings, '%s' and '%s' are not anagrams.", string1, string2);
		}
	}
	
	else
	{
		printf ("\nBoth strings, '%s' and '%s', don't posess the same length. Therefore, they are not considered to be anagrams.", string1, string2);
	}
	
	char choice;	
	printf ("\n=================================================\n");
	printf ("\n\nWould you like to enter new strings?\n");
	printf ("\t[Y] Yes\n\t[N] No\n");
	printf ("Choice: ");
	scanf (" %c", &choice);
	printf ("\n");
	
	if (tolower(choice)=='y')
	{
		fflush(stdin);
		goto input;
	}
	else
	{
		printf ("\nGoodbye!");
		exit(1);
	}
	
	
	return 0;
}