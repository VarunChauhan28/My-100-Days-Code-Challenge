#include<stdio.h>
#include<conio.h>
void main()
{
int r,n,i=1,b=0,var;
clrscr();

printf("enter the no : ");
scanf("%d",&n);
var=n;
while(n>0)
{
r=n%2;
b=b+(r*i);
n=n/2;
i=i*10;
}
printf("binary of %d is : %d",var,b);
getch();
}