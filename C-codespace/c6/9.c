#include<stdio.h>
int main()
{
	int i=0,j=0;
	int r,c;
	printf("Enter row size :");
	scanf("%d",&r);
	printf("Enter column size :");
	scanf("%d",&c);
	int a[r][c];
	int b[r][c];
	
	printf("Enter first Matrix elements :");
	for(i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("First matrix :\n");
	for(i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
				printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
		printf("Enter second Matrix elements :");
	for(i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("second matrix :\n");
	for(i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
				printf("%d\t",b[i][j]);
		}
		printf("\n");
	}

	
	return 0;
}