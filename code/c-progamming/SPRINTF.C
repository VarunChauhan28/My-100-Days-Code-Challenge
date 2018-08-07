#include<stdio.h>
#include<conio.h>
void main()
{
char str[30];
char name[]={"suresh"};
int m1=89,m2=78,m3=80;
float per=(m1+m2+m3)/3.0;
char grade='A';
sprintf(str,"result -%s%d%d%d%f%c",name,m1,m2,m3,per,grade);
printf("the string result is:\n");
puts(str);
getch();
}