#include <stdio.h>
int main()
{
	int num;
	printf ("Enter a number: ");
	scanf ("%d", &num);
	
	int temp, flag = 0, i, rem, result;
	int seen[10];
	
	for(i=0; i<10; i++)
	{
		seen[i] = -1;
	}
	i = 0;
	temp = num;
	
	while(temp!=0)
	{
		rem = temp%10;
		if (seen[rem]==rem)
		{
			flag = 1;
			break;
		}
		else
		{
			seen[rem] = rem;
		}
		
		temp/=10;
	}
	
	if (flag==1)
	{
		printf ("There are repeating digits.");
	}
	else
	{
		printf ("There are no repeating digits.");
	}
}