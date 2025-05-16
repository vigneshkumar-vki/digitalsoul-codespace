#include<stdio.h>
int main()
{
	float a;
	char c;
	printf("Enter your marks :");
	scanf("%f",&a);
	if (a<25)
	{
		c='F';
	}
	else if((a>=25) && (a<45))
	{
		c='E';
	}
	else if((a>=45) && (a<60))
	{
		c='D';
	}
	else if((a>=60) && (a<75))
	{
		c='C';
	}
	else if((a>=75) && (a<80))
	{
		c='B';
	}
	else if((a>=80) && (a<100))
	{
		c='A';
	}
	printf("Your grade is %c",c);
	return 0;
}