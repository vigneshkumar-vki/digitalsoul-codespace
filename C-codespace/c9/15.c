#include<stdio.h>
struct stud_details{
	char name[22];
	int age;
};
int main()
{

struct stud_details s1={"Vignesh",22};
struct stud_details s2;
s2=s1;
printf("Name : %s\n",s1.name);
printf("Age : %d\n",s2.age);
return 0;
}