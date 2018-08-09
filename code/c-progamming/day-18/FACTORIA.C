#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,fact=1;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
fact=fact*i;
}
printf("factorial is %d",fact);
getch();
}