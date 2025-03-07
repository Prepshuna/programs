#include<stdio.h>
#include<conio.h>
void read(int[],int);
void display(int[], int);
void sort(int[],int);
void main()
{
	int a[100],n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("Read %d elements",n);
	read(a,n);
	sort(a,n);
	printf("sorted elements: ");
	display(a,n);
	getch();
}
void read(int a[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
}
void display(int a[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",*(a+i));
	}
}
void sort(int a[100],int n)
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(*(a+j)>*(a+j+1))
			{
				temp=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=temp;
			}
		}
	}
}