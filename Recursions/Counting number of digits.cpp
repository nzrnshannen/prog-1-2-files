#include <stdio.h>
int countDigit(int);

int main()
{
	int num;
	printf ("Input a number: ");
	scanf ("%d", &num);
	
	printf ("\nCount: %d", countDigit(num));
	
	return 0;
}

int countDigit(int temp)
{
	static int count = 0;
	
	if(temp<=0)
	{
		return 0;
	}
	
	count++;
	
	return 1 + countDigit(temp/10);

}