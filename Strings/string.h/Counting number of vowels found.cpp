#include <stdio.h>
#include <ctype.h>

int main()
{
	char string1[100], ch;
	int count, i;
	i = count = 0;
	printf ("COUNTING NUMBER OF VOWELS\n");
	printf ("\nEnter a string: ");
	
	while((ch=getchar())!='\n')
	{
		string1[i] = ch;
		
		if (tolower(string1[i])=='a' || tolower(string1[i]) == 'e'||tolower(string1[i]) == 'i'|| tolower(string1[i]) == 'o' || tolower(string1[i]) == 'u')
		{
			count++;
		}
		i++;
	}
	string1[i] = '\0';
	
	printf ("\nIn the string '%s', there are over %d vowels found.", string1, count);
	
	return 0;
}