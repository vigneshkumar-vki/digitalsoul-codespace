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
	printf("Enter Matrix elements :");
	for(i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Display Elements :");
	for(i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf("a[%d][%d] = %d \n",i,j,a[i][j]);
		}
	}
	printf("Matrix:\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}