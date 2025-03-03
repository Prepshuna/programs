#include<stdio.h>
#include<conio.h>
void copystring(char[],char[]);
void main()
{
	char txt1[100],txt2[100];
	printf("Enter a string: ");
	gets(txt1);
	copystring(txt1,txt2);
	printf("The copied string is: %s",txt2);
	getch();
}
 void copystring(char txt1[100],char txt2[100])
 {
 	int i;
 	for(i=0;txt1[i]!='\0';i++)
 	{
 		txt2[i]=txt1[i];
	 }
	 txt2[i]='\0';
 }