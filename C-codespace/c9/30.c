#include<stdio.h>
#include<string.h>
struct stud
{
	int age;
	char name[50];
}s;
int main()
{
	strcpy(s.name,"vignesh");
	printf("Name :%s\n",s.name);
	s.age=27;
	printf("Age : %d\n",s.age);
	return 0;
}
