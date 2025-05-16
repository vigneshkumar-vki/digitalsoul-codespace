#include<stdio.h>
void add(int g,int h)
{
	int c;
	c=g+h;
	printf("Addition is %d\n",c);
}
void sub(int g,int h)
{
	int c1;
	c1=g-h;
	printf("Sub is %d\n",c1);
}
void mul(int g,int h)
{
	int c2=g*h;
	printf("multi is %d\n",c2);
}
void div(int g,int h)
{
	int c3=g/h;
	printf("div is %d\n",c3);
}
int main()
{
	int a,b;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
	return 0;
}