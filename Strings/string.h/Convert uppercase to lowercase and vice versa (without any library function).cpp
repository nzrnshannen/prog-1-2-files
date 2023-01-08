#include <stdio.h>
int main()
{
	char string1[100], c;
	int i, j;
	i = j = 0;
	
	printf ("Enter a string: ");
	
	while((c=getchar())!='\n')
	{
		
		string1[i] = c;
		
		if (string1[i]>=65 && string1[i]<=90)
		{
			string1[i] += 32;
		}
		
		else if (string1[i]>=97 && string1[i]<=122)
		{
			string1[i] -= 32;
		}
		
		i++;
	}
	
	string1[i] = '\0';
	
	printf ("\n\nNew string: %s", string1);
	
	return 0;
}