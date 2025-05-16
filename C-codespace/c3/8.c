#include<stdio.h>
int main()
{
	int a;
	printf("Enter a symbol :");
	scanf("%c",&a);
	if(a=='+'||a=='-'||a=='*'||a=='/'||a=='%')
	{
		printf("%c is the arithmethic operator",a);
	}
	else
	{
		printf("%c is the special character",a);
	}
	return 0;
}