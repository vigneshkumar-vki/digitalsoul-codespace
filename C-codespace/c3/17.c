#include<stdio.h>
int main()
{
	int c,a;
	printf("Enter total number of classes  :");
	scanf("%d",&c);
	printf("Enter number of classes attended :");
	scanf("%d",&a);
	
	int Attendance = a*100/c;
	if (a >=75)
	{
		printf("Eligible for writing exams");
	}
	else if(a<0)
	{
		printf("you are not eligible or input  is not correct.");
	}
	else
	{
		printf("Not Eligible for writing exams");
	}
}