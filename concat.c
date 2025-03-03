#include<stdio.h>
#include<conio.h>
void concat(char[],char[]);
void main()
{
	char txt1[100],txt2[100];
	printf("Enter first string: ");
	gets(txt1);
	printf("Enter second string: ");
	gets(txt2);
	concat(txt1,txt2);
	printf("The copied string is: %s",txt1);
	getch();
}
void concat(char txt1[100],char txt2[100])
{
	int len,i;
	for(len=0;txt1[len]!='\0';len++);
	for(i=0;txt2[i]!='\0';i++)
	{
		txt1[len+i]=txt2[i];
	}
	txt1[len+i]='\0';
}