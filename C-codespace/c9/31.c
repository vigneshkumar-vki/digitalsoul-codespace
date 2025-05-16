#include<stdio.h>
#include<string.h>
union stud1
{
	int age;
	char name[50];
}d;
struct stud2
{
	int age;
	char name [44];
}d2;
int main()
{
	printf ("size of union is %d\n",sizeof(d));
	printf("size of structure is %d\n",sizeof (d2));
	return 0;
}