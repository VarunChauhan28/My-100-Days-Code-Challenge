#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[10],str2[10];
printf("enter the 1st string");
scanf("%s",&str1);
printf("enter the 2nd string");
scanf("%s",&str2);
strcat(str1,str2);
getch();
}