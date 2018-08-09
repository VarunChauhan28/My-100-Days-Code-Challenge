#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
int a[100];
printf("enter the number");
scanf("%d",&n);

for(i=1;i<n;i++)
{
if(n%i==0)
  {
  printf("numbers is %d:",i);
  }
}

getch();
}
