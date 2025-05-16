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
};
//void details (struct edu_details ed); 
void details (struct edu_details ed)
{
	strcpy(ed.stud.name,"vinayak");
	ed.stud.age=27;
	strcpy(ed.course,"B.SC");
	strcpy(ed.department,"computer science");
	printf("name :%s\n",ed.stud.name);
	printf("age :%d\n",ed.stud.age);
	printf("course :%s\n",ed.course);
	printf("department :%s\n",ed.department);
//	return 0;
}
int main()
{
	struct edu_details ed;
	details (ed);
	return 0;
}
