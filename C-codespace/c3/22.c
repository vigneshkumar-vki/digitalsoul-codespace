#include<stdio.h>
int main()
{
	int a,b,c,op;
	printf("Enter a number :");
	scanf("%d",&a);
	printf("Enter a number :");
	scanf("%d",&b);
	printf("1-Add\n");
	printf("2-Sub\n");
	printf("3-Mul\n");
	printf("4-Div\n");
	printf("Enter your choice");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			c=a+b;
			printf("Addition %d",c);
			break;
		case 2:
			c=a-b;
			printf("subtraction %d",c);
			break;
		case 3:
			c=a*b;
			printf("Multiplication %d",c);
			break;
		case 4:
			c=a+b;
			printf("division %d",c);
			break;
		default:
			printf("Enter a valid choice");
		return 0;	
	}
	
	
}