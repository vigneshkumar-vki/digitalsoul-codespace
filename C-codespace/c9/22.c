#include<stdio.h>
#include<string.h>
struct edu_details
{
	char course[55];
	char department[55];
	struct stud_details
	{
		char name[20];
		int age;
	}stud;
}ed;
int main()
{
	strcpy(ed.stud.name,"vignesh");
	ed.stud.age=24;
	strcpy(ed.course,"MCA");
	strcpy(ed.department,"computer science");
	printf("name :%s\n",ed.stud.name);
	printf("age :%d\n",ed.stud.age);
	printf("course :%s\n",ed.course);
	printf("department :%s\n",ed.department);
	return 0;
}
