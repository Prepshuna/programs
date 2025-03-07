#include<stdio.h>
#include<conio.h>
void main()
{
	int mat[10][10],m,n,sum=0,i,j;
	printf("Enter order: ");
	scanf("%d %d",&m,&n);
	printf("Enter %dX%d matrix elements: ",m,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",*(mat+i)+j);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+*(*(mat+i)+j);
		}
	}
	printf("Sum = %d",sum);
	getch();
}