#include <stdio.h>

struct Point{
	int x;
	int y;
};

void print(struct Point arr[]) //struct Point arr[] since we had just passed the struct variable arr
{
	int i;
	for(i=0; i<2; i++)
	{
		printf ("%d %d\n", arr[i].x, arr[i].y);
	}
}

int main()
{
	struct Point arr[2] = {{1, 2}, {3, 4}};
	print(arr);
	
	return 0;
}