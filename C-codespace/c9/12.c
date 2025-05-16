#include<stdio.h>
struct program
{
	int a;
	char b;
	float c;
}s1,s2;
int main()
{
	s1.a=3;
	s1.b='d';
	s1.c=7.22;
	s2.a=9;
	s2.b='p';
	s2.c=2.1;
	printf("a is %d \n",s1.a);
	printf("b is %c \n",s1.b);
	printf("c is %f \n",s1.c);
	printf("a is %d \n",s2.a);
	printf("b is %c \n",s2.b);
	printf("c is %f \n",s2.c);
	return 0;
}