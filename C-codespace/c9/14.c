#include<stdio.h>
#include<string.h>
struct stud_details
{
	char name[20];
	int age;
};
int main()
{
	struct stud_details s1={"Vignesh",27};
	s1.age=25;
	printf("Name :%s\n",s1.name);
	printf("Age :%d\n",s1.age);
	return 0;
}