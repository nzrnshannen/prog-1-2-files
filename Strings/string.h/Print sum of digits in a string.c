#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char string1[100], string2[100], c;
	int count, i, j, sum = 0;
	count = i = j = 0;
	
	printf ("Enter a string: ");
	while((c=getchar())!='\n')
	{
		string1[i] = c;
		if (string1[i]>=48 && string1[i]<=57)
		{
			string2[j++] = string1[i];
		}
		i++;
	}
	string1[i] = '\0';
	string2[j] = '\0';
	
	printf ("\n\nString: %s", string1);
	
	int temp, rem = 0;
	temp = atoi(string2);
	
	while(temp>0)
	{
		rem = temp%10;
		sum+=rem;
		temp = temp/10;
	}
	
	printf ("\n\nSum of the digits found in the given string: %d", sum);
	
	return 0;
}