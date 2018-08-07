#include<conio.h>
#include<stdio.h>
void main()
{
char name[20];
int string;
printf("enter the name");
gets(name);
string=strlen(name);
puts(name);
printf("length of string:%d",string);
getch();
}