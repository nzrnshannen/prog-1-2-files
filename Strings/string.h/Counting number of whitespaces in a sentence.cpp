#include <stdio.h>
#include <conio.h>

int main()
{
	char string1[100], c;
	int i, spaceCount = 0;
	
	printf ("Enter a string: ");
	
	while((c=getchar())!='\n')
	{
		string1[i] = c;
		i++;
	}
	string1[i] = '\0';
	
	char *ptr = string1;
	
	while(*ptr!=NULL)
	{
		if(*ptr == ' ')
		{
			spaceCount++;
		}
		ptr++;
	}
	
	printf ("\nThe number of whitespace/s in the string '%s' is/are: %d", string1, spaceCount);
	
	return 0;
}