#include<stdio.h>
#include<string.h>
struct emp{
	char emp_id[5];
	char emp_name[50];
	int salary;
	int exp;
};
int main()
{
	struct emp e1={"e01","vignesh",20000,10};
	struct emp e2={"e02","kumar",2000,1};
	struct emp e3={"e03","vinayak",40000,20};
	printf("employee Details :\n");
	printf("Emp_Id : %s\t Emp_Name :%s\t Salary :%d\t\t Experience:%d\n ",e1.emp_id, e1.emp_name, e1.salary, e1.salary);
	printf("Emp_Id : %s\t Emp_Name :%s\t Salary :%d\t\t Experience:%d\n ",e2.emp_id, e2.emp_name, e2.salary, e2.salary);
	printf("Emp_Id : %s\t Emp_Name :%s\t Salary :%d\t\t Experience:%d\n ",e3.emp_id, e3.emp_name, e3.salary, e3.salary);
	return 0;
}