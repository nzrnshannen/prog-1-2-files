#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	char string1[100], string2[100], c;
	char delim[] = " ";
	int i, j, strlen_1, strlen_2, wordCount = 0;
	i = j =0;
	
	printf ("Enter a string: ");
	
	while((c=getchar())!='\n')
	{
		string1[i] = c;
		i++;
	}
	
	string1[i] = '\0';
	
	printf ("Enter a substring: ");
	
	while((c=getchar())!='\n')
	{
		string2[j] = c;
		j++;
	}
	string2[j] = '\0';
	i = j = 0;
	
	strlen_1 = strlen(string1);
	strlen_2 = strlen(string2);
	
	strlwr(string1), strlwr(string2);
	
	char *sub[100];
	
	for(i=0; i<100; i++)
	{
		sub[i] = (char*)malloc(40);
	}
	
	char *tkn = strtok(string1, delim);
	i = 0;
	while(tkn!=NULL)
	{
		wordCount++;
		strcpy(sub[i], tkn);
		tkn = strtok(NULL, delim);
		i++;
	}
	
	printf ("\nNumber of substrings: %d", wordCount);
	
		//removing punctuation marks
	
	int wordLen = 0;
	for(i=0; i<wordCount; i++)
	{
		wordLen = strlen(sub[i]);
		for(j=0; j<wordLen; j++)
		{
			if(ispunct(sub[i][j]))
			{
				sub[i][j] = '\0';
			}
		}
		wordLen = 0;
	}
	
	int count = 0;
	for(i=0; i<wordCount; i++)
	{
		if(strcmp(sub[i], string2)==0)
		{
			count++;
		}
	}
	
	if (count==1)
	{
		printf ("\nThe word '%s' is a substring.", string2);
	}
	else
	{
		printf ("\nThe word '%s' is not a substring.", string2);
	}
	
	return 0;
}