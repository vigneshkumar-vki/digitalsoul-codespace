#include<stdio.h>
struct vignesh
{
	int a;
	char b;
	float c;
};
int main()
{
	struct vignesh s1;
	struct vignesh s2;
	s1.a=5;
	s1.b='b';
	s1.c=5.4;
	
	s2.a=3;
	s2.b='a';
	s2.c=3.2;
	printf("a is %d \n",s1.a);
	printf("b is %c \n",s1.b);
	printf("c is %f \n",s1.c);
	printf("a is %d \n",s2.a);
	printf("b is %c \n",s2.b);
	printf("c is %f \n",s2.c);
	return 0;
}