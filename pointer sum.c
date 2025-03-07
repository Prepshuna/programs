#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],n,sum=0,i;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
	for(i=0;i<n;i++)
	{
		sum=sum+*(a+i);
	}
	printf("sum=%d",sum);
	getch();
}