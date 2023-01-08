#include<stdio.h>

struct Point{
	int x;
	int y;
};

struct Point edit(struct Point p) //p = p1, then p = p2 (p copies p1 contents first, then next is p2 contents)
{
	(p.x)++;
	p.y = p.y + 5;
	
	return p; //returning variable p
}

void print (struct Point p)
{
	printf ("%d %d\n", p.x, p.y);
}

int main()
{
	struct Point p1 = {23, 45};
	struct Point p2 = {56, 90};
	
	p1 = edit(p1); //p1 = p after returning variable
	p2 = edit(p2); //p2 = p after returning variable
	
	print(p1);
	print(p2);
	
	return 0;
}

/*
	Since we are returning structure variables,  return type should not be void or any other type except STRUCT
	when we return a structure VARIABLE (not member), return type should always be struct type

*/