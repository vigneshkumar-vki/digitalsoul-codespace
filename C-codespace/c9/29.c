#include<stdio.h>
#include<string.h>
union stud
{
	int age;
	char name [50];
};
int main()
{
	union stud s;
	strcpy (s.name,"vignesh");
	printf("Name : %s\n",s.name);
	s.age=27;
	printf("age :%d\n",s.age);
	return 0;
}