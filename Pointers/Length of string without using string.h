#include <stdio.h>
int main()
{
	char *string;
	printf ("Input a string: ");
	gets(string);
	
	int c = 0;
	char *ptr = string;
	
	int i;
	
	
	for (i = 0; *(ptr+i)!= '\0'; i++)
	{
		printf ("%c\n", *(ptr+i));
		c++;
		
	}
	
	printf ("\nThe length of the given string \"%s\" is: %d ", string, c);
	
	return 0;
}