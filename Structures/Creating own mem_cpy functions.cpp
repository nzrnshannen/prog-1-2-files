#include <stdio.h>
#include <string.h>

typedef struct{
	char name[256];
	int age;
	double average;
} Student;

void *mem_cpy(void *dest, void *src, int n);

int main()
{
	char src[] = "copy this";
	char dest[100];

	char *dest_ptr = (char*)mem_cpy(dest, src, strlen(src)+1);
	
	printf ("src: %s\n", src);
	printf ("dest: %s\n\n", dest);
	
	printf ("dest_ptr: %p\n", dest_ptr);
	printf ("dest: %p\n\n", dest);
	
	double src_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double dest_array[5];
	
	mem_cpy(dest_array, src_array, sizeof(src_array));
	
	for(int i =0; i<5; i++)
	{
		printf ("dest_array[%d] = %f\n", i, dest_array[i]);
	}
	
	Student student1;
	strcpy(student1.name, "Nen");
	student1.age = 20;
	student1.average = 95.2;
	
	Student student2;

	mem_cpy(&student2, &student1, sizeof(Student));
	printf ("\n\nName: %s\n", student2.name);
	printf ("Age: %d\n", student2.age);
	printf ("Average: %f\n", student2.average);
	
	return 0;
}

void *mem_cpy(void *dest, void *src, int n)
{
	if (dest == NULL)
	{
		return NULL;
	}
//creating 2 new pointer variable
	char *char_dest = (char*) dest;
	char *char_src = (char*) src;
	
	for(int i =0; i<n ; i++)
	{
		char_dest[i] = char_src[i];
	}
	
	return dest;
}