//passing array of structures as argument

#include <stdio.h>

struct Point{
	int x;
	int y;
};

void printFunc(struct Point arr[]) //use this struct Point arr[] because we are passing an array of structures
{
	int i;
	for(i=0; i<2; i++) //loop runs 2 times
	{
		printf ("%d %d\n", arr[i].x, arr[i].y); //printing the values 
		//arr[0].x, arr[0].y
		//arr[1].x, arr[1].y
	}
}

int main()
{
	struct Point arr[2] = {{1, 2}, {3, 4}};
	printFunc(arr); //just use the name of the array
	
	return 0;
}