#include <stdio.h>

int cubeOfNum(int n)
{
	int i, result = 1;
	for(i=0; i<3; i++)
	{
		result *=n;
	}
	
	return result;
}

int main()
{
	int i, rem, temp, num, result = 0, sum = 0;
	printf ("Enter a number: ");
	scanf ("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		temp = i;
		while(temp!=0)
		{
			rem = temp%10;
			sum+=cubeOfNum(rem);
			result += sum;
			sum = 0;
			temp = temp/10;
		}
		
		if (result == i)
		{
			printf ("%d ", i);
		}
		
		result = 0;
	}
	
	return 0;
}
