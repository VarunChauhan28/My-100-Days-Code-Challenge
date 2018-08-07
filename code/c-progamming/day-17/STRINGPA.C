#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[10];
int i=0,j,flag;
clrscr();
printf("enter the word: ");
scanf("%s",&str);
j=strlen(str)-1;
while(i<=j)
{
if(str[i]==str[j])
flag=1;
else
{
flag=0;
break;
}
i++;
j--;
}
if(flag==1)
printf("string is palindrome");
else
printf("string is not palindoem");
getch();
}


