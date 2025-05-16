#include<stdio.h>
#include<string.h>
struct stud_details{
	char name [20];
	int age;
};
struct edu_details{				//<----
	char Course[50];			//    \
	char Department[50];		//    \
	struct stud_details stud;	//    \
};								//    \
int main()						//    \
{								//    \
	struct edu_details ed;  //__________
//	struct stud_details stud;
	strcpy(ed.stud.name,"vk");
	ed.stud.age=27;
	strcpy(ed. Course,"MCA");
	strcpy(ed.Department,"computer science");
	printf("name :%s\n",ed.stud.name);
	printf("age :%d\n",ed.stud.age);
	printf("course :%s\n",ed.Course);
	printf("department :%s\n",ed.Department);
	return 0;
	
}