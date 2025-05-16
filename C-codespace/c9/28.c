#include<stdio.h>
struct stud
{
	char name[50];
	int age;
};
struct stud getinfo();
int main()
{
	struct stud s;
	s=getinfo();
	printf("\n student details :\n");
	printf("Name : %s \n",s.name);
	printf("roll num :%d",s.age);
	return 0;
}
struct stud getinfo()
{
	struct stud s1;
	printf("Enter name :");
	scanf("%s",&s1.name);
	printf("Enter age :");
	scanf("%d",&s1.age);
	return s1;
}