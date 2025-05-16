#include<stdio.h>
#pragma pack(1)
struct structure
{
	int a;
	char b;
};
int main()
{
	struct structure s1;
	printf("size of structure : %d",sizeof(s1));
	return 0;
}