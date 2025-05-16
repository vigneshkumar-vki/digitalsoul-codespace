#include<stdio.h>
#include<string.h>
typedef struct stud_details{
	char name[20];
	int age;
}std;
int main()
{
	std s1,s2;
	strcpy(s1.name,"vignesh");
	s1.age=24;
	strcpy(s2.name,"kumar");
	s2.age=21;
	printf("name : %s\n",s1.name);
	printf("age : %d\n",s1.age);
	printf("name : %s\n",s2.name);
	printf("age : %d\n",s2.age);
	return 0;
	
}