#include<stdio.h>
#include<conio.h>
int sum(int num);
void main()
{
int num,k;
clrscr();
printf("enter the number");
scanf("%d",&num);
printf("sum of digits is :%d",sum(num));
getch();
}
int sum(int num)
{
int r,s=0;
while(num>0)
{
r=num%10;
s=s+r;
num=num/10;
}
return s;
}
