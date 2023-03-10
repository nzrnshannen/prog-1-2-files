/*=======================================================================================
PROGRAM: A Simple C Program that Swaps 2 Strings
Created by: Shannen T. Nazareno
Date: 10/19/2022
=========================================================================================*/

#include <stdio.h>
#include <string.h>

void swapStrings1(char*, char*); //this function is for testing purposes only (which uses string.h functions)
void swapStrings2(char*, char*);

int main()
{
	char string1[100], string2[100], ch;
	int string1_length, string2_length, i, j;
	string1_length = string2_length = i = j = 0;
	
	printf ("Enter string1: ");
	while((ch=getchar())!='\n')
	{
		string1[i] = ch;
		string1_length++;
		i++;
	}
	string1[i] = '\0';
	
	printf ("Enter string2: ");
	while((ch=getchar())!='\n')
	{
		string2[j] = ch;
		string2_length++;
		j++;
	}
	string2[j] = '\0';
	
	printf ("\n\nString1: %s\n\tLength: %d\n", string1, string1_length);
	printf ("String2: %s\n\tLength: %d\n", string2, string2_length);
	
		
	//swapStrings1(string1, string2);
	printf ("\nAfter swapping:\n");
	swapStrings2(string1, string2);
	printf("\nString 1: %s\nString 2: %s\n", string1, string2);
	
	return 0;
}

void swapStrings1(char *ptr1, char *ptr2)
{
	
	/*
		This function is for testing purposes only.
	*/
	
	int i, j;
	char temp[100];
	strcpy(temp, ptr1);
	printf ("\ntemp: %s", temp);
	strcpy(ptr1, ptr2);
	strcpy(ptr2, temp);
	
	printf ("\n\nstring1: %s\nstring2: %s\n", ptr1, ptr2);
	
}

void swapStrings2(char *ptr1, char *ptr2)
{
	char temp[100];
	int i, j, k;
	i = j = k = 0;
	
	while(*(ptr1+i)!=NULL)
	{
		temp[i] = *(ptr1+i);
		i++;
	}
	temp[i] = '\0';
	char *ptr3 = temp;
	//string1 copies string2
	
	while(*(ptr2+j)!=NULL)
	{
		*(ptr1+j) = *(ptr2+j);
		j++;
	}
	*(ptr1+j) = '\0';
	
	
	//string2 copies contents of temp
	
	while(*(ptr3+k)!=NULL)
	{
		*(ptr2+k) = *(ptr3+k);
		k++; 
	}
	*(ptr2+k) = '\0';
}