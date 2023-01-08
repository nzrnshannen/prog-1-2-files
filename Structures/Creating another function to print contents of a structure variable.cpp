#include <stdio.h>

typedef struct{
	char name[100];
	double price;
}Product;

void printProductInfo(Product p); //we did not use struct Product p since we have named the struct as Product

int main()
{
	Product prdct;
	printf ("Enter name of the product: ");
	scanf ("%s", &prdct.name);
	printf ("Enter price of the product: ");
	scanf ("%lf", &prdct.price);
	
	printProductInfo(prdct); //we can pass the structure variable instead 
}

void printProductInfo(Product p) //creating another struct variable that will print the contents 
{
	printf ("\n\nProduct info:\n");
	printf ("Name of product: %s", p.name); //using p to print name
	printf ("\nPrice of product: %.2lf",p.price); //using p to print price
	
}