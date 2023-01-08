#include <stdio.h>

int main()
{
	int rows, cols;
	printf ("Input number of rows: ");
	scanf ("%d", &rows);
	printf ("Input number of columns: ");
	scanf ("%d", &cols);
	
	int arr[rows][cols];
	int i, j, oneCount, zeroCount;
	i = j = oneCount = zeroCount = 0;
	
	printf ("Input %d elements in the matrix:\n", rows*cols);
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
		input:
			printf ("element - [%d],[%d]: ", i, j);
			scanf ("%d", &arr[i][j]);
			
			if (arr[i][j] != 0 && arr[i][j] != 1)
			{
				printf ("Input invalid. Try again.\n");
				goto input;
			}
		}
	}	
	
	printf ("\nThe matrix is:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%d  ", arr[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\n");
	
	//checking the count
	
	for (i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			if(arr[i][j]==1)
			{
				oneCount++;
			}
		}
	}
	
	zeroCount = (rows*cols) - oneCount;
	
	//test statement: printf("\nOne: %d, Zero: %d", oneCount, zeroCount);
	
	int flag = 1;
	int c0, c1;
	c0 = c1 = 0;
	if (oneCount<zeroCount)
	{
		for (i=0; i<rows; i++)
		{
			for(j=0; j<cols; j++)
			{
				if(i==j)
				{
					if (arr[i][j] == 1) 
					{
						c1++;
						continue;
					}
					
					else
					{
						flag = 0;
					}
				}
			}
		}
		
		if (flag == 0)
		{
			flag = 1;
			j = 0;
			for(i=0; i<rows && j < cols; i++)
			{
				if(arr[i][j]==1)
				{
					flag = 1;
					c1++;
				}
				else
				{
					flag = 0;
				}
				--j;
			}
		}
	}

	if(flag==0)
	{
		printf ("\nMatrix is not an identity matrix.");
	}
	
	else
	{
		if(oneCount == c1)
		{
			printf ("\nMatrix is an identity matrix.");
		}
		else
		{
			printf ("\nMatrix is not an identity matrix.");
		}
	}
		
	return 0;
}