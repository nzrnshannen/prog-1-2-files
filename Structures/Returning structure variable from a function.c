#include <stdio.h>

typedef struct{
	int x;
	int y;
}Point;

Point edit(Point p) //returning type is a structure because p is a structure variable
{
//both of these calculations performed will be reflected 
	(p.x)++; 
	p.y = p.y + 5;
	return p; //p is a variable of struct Point
}


void printFunc(Point p)
{
	printf ("%d %d\n", p.x, p.y);
}

int main()
{
	Point p1 = {23, 45};
	Point p2 = {56, 90};
	
	p1 = edit(p1); //passing the copy of p1 to p
	//after that, p1 will now have the values of that p
	p2 = edit(p2); //passing the copy of p2 to p
	//after that, p2 will now have the values of that p
	
	/*
		If it's only edit(p1), edit(p2), such calculations done in the other
		function won't be reflected what's on the main.
		
	*/
	
	printFunc(p1);
	printFunc(p2);
}