#include <stdio.h>

typedef union{
	char letter;
	int number;
}Practice;

int main()
{
	Practice first, *ptr;
	
	printf ("Enter a letter: ");
	scanf ("%c", &first.letter);
	
	ptr = &first;
	
	printf ("\n\nLetter: %c\nNumber equivalent: %d\nFloat equivalent: %.2f", ptr->letter, ptr->number);
	
	return 0;
}