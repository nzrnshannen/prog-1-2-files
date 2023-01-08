#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	char string1[100], string2[100], c, flag = 0;
	int i = 0, n1, n2;
	n1 = n2 = 0;
	printf ("Input the 1st string: ");
	
	while ((c=getchar())!='\n')
	{
		string1[i] = c;
		i++;
		n1++;
	}
	
	string1[i] = '\0';
	
	i =0;
	
	printf ("Input the 2nd string: ");
	while ((c=getchar())!='\n')
	{
		string2[i] = c;
		i++;
		n2++;
	}
	
	string2[i] = '\0';
	
	printf ("\nString1: %s", string1);
	printf ("\nString2: %s", string2);
	
	printf ("\n\n");
	
	char *ptr1, *ptr2;
	ptr1 = string1;
	ptr2 = string2;
	
	if (n1!=n2)
	{
		printf("Strings are not equal.");
		exit(1);
	}
	
	while (*ptr1!=NULL && *ptr2 != NULL)
	{
		
		if (*ptr1!=*ptr2)
		{
			flag = 1;
			break;
		}
		
		ptr1++;
		ptr2++;
	}
	
	if (flag==0)
	{
		printf("Strings are equal.");
	}
	else
	{
		printf ("Strings are not equal.");
	}
	
}