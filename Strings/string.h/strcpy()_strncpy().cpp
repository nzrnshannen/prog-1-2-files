//strcpy() and strncpy()
#include <stdio.h>
#include <string.h>
int main()
{
	char src[10] = "123456789";
	char dest1[10];
	
	strcpy(dest1, src);
	
	printf ("dest1: %s\n", dest1);
	
//undefined behavior: dest2 has only the size of 5
	char dest2[5];
	strcpy(dest2, src);
	printf("dest2: %s (undefined behavior)\n", dest2); 
	
//using strncpy()
	char dest3[50];
	strncpy(dest3, src, 10); //copies 10 characters including the null
	printf ("dest3: %s\n", dest3);

//undefined behavior: copies 10 characters but dest4 can only accommodate 5 characters
	char dest4[5];
	strncpy(dest4, src, 10); 
	printf ("dest4: %s (undefined behavior)\n", dest4);
	
//will actually work even though src has the length of 10, and in here, 40 characters will be copied from src
	char dest5[50];
	strncpy(dest5, src, 40); //number is larger than the source
	printf ("dest5: %s\n", dest5); 

//Limited number of characters to be copied
	char dest6[5];
	strncpy(dest6, src, 2); //2 characters will be only copied
	
	//the dest6 doesn't have any null terminator at all
	//we should put the null terminator manually by us:
	dest6[2] = '\0';
	
	printf ("dest6: %s\n", dest6); //2 characters will only be printed	
	
	return 0;
}