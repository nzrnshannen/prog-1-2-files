/* 
	Strcat() and strncat()
*/

#include <stdio.h>
#include <string.h>

int main()
{
	
//strcat()
	char dest[20] = "This and "; //should have an enough space to store the src string
	char src[5] = "that";
	
	/*
		If there's no enough space for dest, it may result to some undefined behavior.
			- program may crash
			- program should not work, but if it works, then it is some undefined behavior
			- use strncat instead
	*/
	
	printf ("\tUsing strcat()\n\n");
	char *ptr = strcat(dest, src);
	
	printf ("dest: %s\n", dest);
	printf ("ptr: %s\n", ptr);
	
	/* Printing the addresses
		Both dest and ptr have the same memory addresses.
	*/
	
	printf ("\n");
	printf ("dest address: %p\n", dest);
	printf ("ptr address: %p\n", ptr);
	printf ("\n\n");

//strncat()	

	char dest2[20] = "This and ";
	char src2[5] = "that";
	
	printf ("\tUsing strncat()\n\n");
	strncat(dest2, src2, 2); //2 characters of src will be only concatenated on dest2
	
	printf ("dest2: %s", dest2); 
}