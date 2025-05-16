#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first person's age :");
	scanf("%d",&a);
	printf("Enter the second person's age :");
	scanf("%d",&b);
	printf("Enter the third person's age :");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("Oldest is first person with %d age",a);
	}
	else if(b>c && b>a)
		{
		printf("Oldest is second person with %d age",b);
	}
	else if(c>b && c>a)
		{
		printf("Oldest is third person with %d age",c);
	}
	else if(a>c && b>c)
		{
		printf("Oldest is first and second person with %d %d age",a, b);
	}
	else if(c>b && a>b)
		{
		printf("Oldest is first and third person with %d %d age",a, c);
	}
	else if(a<b && a<c)
		{
		printf("Oldest is 2nd and third person with %d %d age",b, c);
	}
	else if(a==b && b==a && c==a)
		{
		printf("a and b and c are same age with %d %d %d age",a,b,c);
	}else{
		printf("all are same age");
	}
	return 0;
}