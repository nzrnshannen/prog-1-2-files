#include <stdio.h>
#include <conio.h>

int main()
{
	char string1[100], string2[100], c;
	int i, j, k;
	i = j = 0;
	
	printf ("\t\t\t\t====SWAPPING WITHOUT USING <STRING.H> FUNCTIONS>====\n");
	printf ("Enter string1: ");
	
	while((c=getchar())!='\n')
	{
		string1[i] = c;
		i++;
	}
	string1[i] = '\0';
	
	printf ("Enter string2: ");
	
	while((c=getchar())!='\n')
	{
		string2[j] = c;
		j++;
	}
	string2[j] = '\0';
	
	printf ("\n[Before swapping]\n\tString1: %s\n\tString2: %s\n", string1, string2);
	
	char temp[100], *ptr1;
	ptr1 = string1; 
	
	i = j = 0;
	
	while(*ptr1!=NULL)
	{
		temp[i] = *ptr1;
		i++;
		ptr1++;
	}
	temp[i] = '\0';

	char *ptr2 = string2;
	while (*ptr2!=NULL)
	{
		string1[j] = *ptr2;
		j++;
		ptr2++;
	}
	string1[j] = '\0';

	
	char *ptr3 = temp;
	
	while(*ptr3!=NULL)
	{
		string2[k] = *ptr3;
		k++;
		ptr3++;
	}
	string2[k] = '\0';
	
	printf ("\n[After Swapping]\n\tString1: %s\n\tString2: %s", string1, string2);
	
	return 0;
	
}