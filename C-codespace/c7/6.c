#include<stdio.h>
int main()
{ 
	char a[]="systech";
	char b[]={'s','y','s','t','e','c','h'};
	printf("Size of string before giving null terminating character\n");
	printf("Size of a is %lu\n",sizeof(a));
	printf("Size of b is %lu\n",sizeof(b));
	char c[]={'s','y','s','t','e','c','h','\0'};
	printf("Size of string after giving null terminating character\n");
	printf("size of a is %lu \n",sizeof(a));
	printf("size of a is %lu \n",sizeof(c));
	return 0;
}