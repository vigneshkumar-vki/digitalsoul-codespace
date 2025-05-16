#include<stdio.h>
int main()
{
	int i=0, j=0;
	int g,h;
	printf("Enter row size :");
	scanf("%d",&g);
	printf("Enter column size :");
	scanf("%d",&h);
	int a[g][h];	
	int b[g][h];
	int c[g][h];
	
	printf("Enter First matrix elements :\n");
	for (i=0; i<g; i++)
	{
		for(j=0; j<h; j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("First Matrix :\n");
	for(i=0; i<g; i++)
	{
		for(j=0; j<h; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}	
		printf("Enter second matrix elements :\n");
	for (i=0; i<g; i++)
	{
		for(j=0; j<h; j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("second Matrix :\n");
	for(i=0; i<g; i++)
	{
		for(j=0; j<h; j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("Addition of two matrix : \n");
	for(i=0; i<g; i++)
	{
		for(j=0; j<h; j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}