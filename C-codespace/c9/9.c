#include<stdio.h>
struct structure
{
	int a;
	char b;
	float c;
};
int main()
{
	struct structure s1;
	s1.a=5;
	s1.b='e';
	s1.c=5.5;
	printf("a is %d\n",s1.a);
	printf("b is %c\n",s1.b);
	printf("c is %f\n",s1.c);
	return 0;
}