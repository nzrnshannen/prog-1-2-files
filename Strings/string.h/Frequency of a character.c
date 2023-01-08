#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char string1[100], c, input;
	int letterCount = 0, i = 0;
	printf ("Enter a string: ");
	
	while((c=getchar())!='\n')
	{
		string1[i] = c;
		i++;
	}
	string1[i] = '\0';
	
	strlwr(string1);

	
	char *ptr = string1;
	
	printf("Enter a character: ");
	scanf (" %c", &input);
	
	while(*ptr!=NULL)
	{
		if(*ptr==input)
		{
			letterCount++;
		}
		
		ptr++;
	}
	
	printf ("\nCharacter: %c\n", input);
	printf ("Frequency: %d", letterCount);
	
	return 0;
}