#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXSIZE 150

int main()
{
	char inputSentence[MAXSIZE];
	char word[15];
	int sentenceLength;
	int wordLength;
	char delim[] = " ";

	printf ("Enter a sentence: ");
	gets(inputSentence);
	printf ("Enter a word: ");
	scanf ("%s", word);
	
	strlwr(inputSentence), strlwr(word);
	
	char sentence[MAXSIZE];
	strcpy(sentence, inputSentence);
	sentenceLength = strlen(sentence);
	wordLength = strlen(word);
	
	char *subStrings[MAXSIZE];
	int numOfWords = 0;
	int i = 0;
	
	char *tkn = strtok(sentence, delim);
	
	//dynamically allocating memory from the HEAP
	for (int i = 0; i< MAXSIZE; i++) //maxsize(?)
	{
		subStrings[i] = (char*)malloc(40);
	}
	
	
	//counting no. of words & storing the substrings using the strcpy()
	while (tkn!=NULL)
	{
		numOfWords++;
		strcpy(subStrings[i], tkn);
		tkn = strtok(NULL, delim);
		i++;
	}
	printf ("\n\nNumber of substrings: %d", numOfWords);
		
	//removing punctuation marks: 
	int j, sLen = 0;
	for(i=0; i<numOfWords; i++)
	{
		sLen = strlen(subStrings[i]);
		//subStrings[i][sLen-1] = NULL;
		//sLen = 0;
		
		for (j=0; j<sLen;j++)
		{
			if (ispunct(subStrings[i][j]))
			{
				subStrings[i][j] = '\0';
			}
		}
		sLen = 0;
	}

	int count = 0;
	for (i=0; i<numOfWords; i++)
	{
		if (strcmp(subStrings[i], word)==0) //0 -> equal
			count++;
	}
	
	//printf ("\n\nNumber of occurences: %d", count);
	if (count == 0)
		printf ("\nThe word \"%s\" can't be found.", word);
	else
		printf ("\nNumber of occurences: %d", count);
	
	//free(subStrings[i]);
	return 0;
}