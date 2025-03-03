#include<stdio.h>
#include<conio.h>
int findlength(char[]);
void main()
{
	char ch[100];
	int len;
	printf("Enter a string: ");
	scanf("%s",&ch);
	len=findlength(ch);
	printf("The length is: %d",len);
}
int findlength(char ch[100])
{
	int i;
	for(i=0;ch[i]!='\0';i++);
	return i;
}