#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        if(i<=5)
        {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        }
        else 
        {
        for(j=4;j>=i-(4+1);j--)
        {
            printf("*");
        }
        printf("\n");
        }
    }
}