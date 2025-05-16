#include<stdio.h>
struct structure
{
	int a,c;
	char b;
	float d;
//	long double e;
};
int main()
{
	struct structure s1;
	printf( "size of structure : %d",sizeof(s1));
	return 0;
}