/*
	A C program that prints the first 50 natural numbers using
	recursion.
*/

#include <stdio.h>
void naturalNum(int n);

int main()
{
	int i = 1; 
	naturalNum(i);
	
	return 0;
}

void naturalNum(int num)
{
	if(num<=50)
	{
		printf ("%d ", num);
		naturalNum (num+1);
	}
}