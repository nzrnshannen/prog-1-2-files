#include <stdio.h>
#include <string.h>

int main()
{
	char string1[100], n, i;
	printf ("Input a string: ");
	scanf ("%s", string1);
	
	n = strlen(string1);
	i = n-1;
	while(i>=0)
	{
		printf ("%c ", string1[i]);
		i--;
	}
}