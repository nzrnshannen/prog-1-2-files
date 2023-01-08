#include <stdio.h>

struct Favorites{
	char show[100];
	int num;
};

void enterFavorites (char show[100], int *num)
{
	printf ("\nEnter favorite show: ");
	
	char c;
	int i = 0;
	
	while((c=getchar())!='\n')
	{
		show[i] = c;
		i++;
	}
	show[i] = '\0';
	
	printf ("Enter favorite number: ");
	scanf ("%d", num);
}

int main()
{
	struct Favorites person1;
	
	enterFavorites(person1.show, &person1.num);
	
	printf ("\nFavorite show: %s, favorite number: %d\n", person1.show, person1.num);
	
	return 0;
}