#include <stdio.h>
#include <conio.h>

int main()
{
	char string1[100], c, letter;
	int flag = 0, i, pos, count=0;
	
	printf ("Enter a string: ");
	
	while((c=getchar())!='\n')
	{
		string1[i] = c;
		i++;
	}
	string1[i] = '\0';
	i = 0;
	
	printf ("String entered: %s", string1);
	char *ptr = string1;
	
	while(*ptr!=NULL)
	{
		if (*ptr>=65 && *ptr<=90)
		{
			letter = *ptr;
			pos = count;
			flag = 1;
			break;
		}
		ptr++;
		count++;
	}
	
	if (flag==1)
	{
		printf ("\nThe first capital letter is: %c located in position %d.\n", letter, pos);
	}
	else
	{
		printf ("\nThere are no capital letters.\n");
	}
	
	return 0;
}