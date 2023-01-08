//strcmp() and strncmp()

#include <stdio.h>
#include <string.h>
int main()
{

//Feel free to change the characters to check conditions
	char s1[] = "Thia is the way";
	char s2[] = "This is the way";



/*
	We cannot use (s1 == s2).
	It's basically saying that if the memory address of s1 is same with s2.
	Use strcmp() instead to compare strings.
*/
	
//Using strcmp(): s1 is being compared to s2:
	if (strcmp(s1, s2)==0) //returns 0 is strings are equal
	{
		printf("Strings are equal.\n");
	}
	
	else if(strcmp(s1, s2)<0) //returns -1 if s1 is less than s2
	{
		printf ("s1 is less than s2\n"); 
	}
	else if (strcmp(s1, s2)>0) //returns 1 if s1 is greater than s2
	{	
		printf ("s1 is greater than s2\n");
	}
	

//Using strncmp()
	if (strncmp(s1, s2, 2)==0) //only 3 characters of s1 and s2 will be compared
	{
		printf ("Equal");
	}

}