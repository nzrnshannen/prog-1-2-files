#include <stdio.h>
#include <ctype.h>

int main()
{
	char string1[100], ch;
	int countVowel, countConso, i;
	i = countVowel = countConso = 0;
	printf ("COUNTING NUMBER OF VOWELS AND CONSONANTS\n");
	printf ("\nEnter a string: ");
	
	while((ch=getchar())!='\n')
	{
		string1[i] = ch;
		
		if (tolower(string1[i])=='a' || tolower(string1[i]) == 'e'||tolower(string1[i]) == 'i'|| tolower(string1[i]) == 'o' || tolower(string1[i]) == 'u')
		{
			countVowel++;
		}
		else if (!(isspace(string1[i])) && !(ispunct(string1[i])))
		{
			countConso++;
		}
		
		i++;
	}
	string1[i] = '\0';
	
	printf ("\nString: %s\n", string1);
	printf ("Number of vowels: %d\n", countVowel);
	printf ("Number of consonants: %d\n", countConso);
	
	return 0;
}