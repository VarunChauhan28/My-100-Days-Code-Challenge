#include<string.h>
#include<stdio.h>
#include<conio.h>
void main()
{
char str1[10],str2[20];
printf("enter the first string");
scanf("%s",&str1);
printf("enter the second string");
gets(str2);
if(strcmp(str1,str2)==0)
{
printf("equal");
}
else
{
printf("not equal");
}
getch();
}