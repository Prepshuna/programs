// 1
// 12
// 123
// 1234
// 12345

#include<stdio.h>

void main()
{
	int i,j=5;
	for(i=1;i<=5;i++)
	{
	 	for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
	
		printf("\n");
	}
}
