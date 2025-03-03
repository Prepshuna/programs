#include<stdio.h>
#include<conio.h>
#include<string.h>
void rev(char[]);
void main()
{
	char txt1[100],txt2[100];
	
	printf("Enter a string: ");
	gets(txt1);
 	strcpy(txt2,txt1);
	rev(txt1);
	//printf("the reverse character is %s",txt1);
	if(strcmp(txt1,txt2)==0)
	printf("The string is  palindrome");
	else
	printf("The string is not palindrome ");
	getch();
}
void rev(char txt1[100])
{
	char temp;
	int i,len;
	for(len=0;txt1[len]!=0;len++);
	for(i=0;i<len/2;i++)
	{
		temp=txt1[i];
		txt1[i]=txt1[len-i-1];
		txt1[len-i-1]=temp;
	}
	txt1[len]='\0';
}
