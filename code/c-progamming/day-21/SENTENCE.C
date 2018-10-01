#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a1[25];
int i,j;
clrscr();
printf("enter the string :");
gets(a1);
for(i=0;a1[i];i++)
{
if(a1[i+1]==' '||a1[i+1]=='\0')
{
for(j=i;j>=0&&a1[j]!=' ';j--)
{
printf("%c",a1[j]);
}
printf(" ");
}
}
getch();
}