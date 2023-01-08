#include <stdio.h>

int cubeOfNum(int);

int main()
{
	int num, temp, rem, result = 0, sum = 0;
	
	printf ("Enter a number: ");
	scanf ("%d", &num);
	
	temp = num;
	
	while(temp!=0)
	{
		rem=temp%10;
		sum+=cubeOfNum(rem);
		result+=sum;
		
		temp = temp/10;
		sum = 0;
	}
	
	if (result==num)
	{
		printf ("The number %d is an armstrong number.", num);
	}
	else
	{
		printf ("The number %d is not an armstrong number.", num);
	}
}

int cubeOfNum(int n)
{
	int i, result = 1;
	for(i=0; i<3; i++)
	{
		result*=n;
	}
	
	return result;
}