#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[20],str2[20];
printf("enter the string");
scanf("%s",&str1);
printf("enter the second string");
scanf("%s",&str2);
strcpy(str1,str2);
printf("first string:%s \t\t second string :%s\n",str1,str2);
strcpy(str1,"delhi");
strcpy(str2,"calcutta");
printf("first string is:%s\t\t second string is:%s\n",str1,str2);
getch();
}
