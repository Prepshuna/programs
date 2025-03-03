#include<stdio.h>
#include<conio.h>
int compare(char[],char[]);
void main()
{
	char txt1[100],txt2[100];
	int d;
	printf("Enter a string: ");
	gets(txt1);
	printf("Enter another string: ");
	gets(txt2);
	d=compare(txt1,txt2);
	if(d==0)
	{
		printf("Both string are same: ");
	}
	else if(d<0)
	{
		printf("Second string is greater");
	}
	else
	printf("first string is greater");
}
int compare(char txt1[100],char txt2[100])
{
	int d,i=0;
	do
	{
		d=txt1[i]-txt2[i];
		if(d!=0)
		break;
		i++;
	}while(txt1[i]!='\0'|| txt2[i]!='\0');
	return d;
	}
	
