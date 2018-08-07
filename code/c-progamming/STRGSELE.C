#include<conio.h>
#include<stdio.h>
#define n 3
#define len 5
void main()
{
char str[n][len]={"red","blue","sky"};
int i,j;
char temp[10];
printf("before sorting");
for(i=0;i<n;i++)
printf("string is :%s",str[i]);
printf("\n");
for(i=0;i<n;i++)
for(j=1;j<=n;j++)
{
if(strcmp(str[i],str[j])>0)
{
strcpy(temp,str[i]);
strcpy(str[i],str[j]);
strcpy(str[j],temp)
}
}
printf("after sorting");
for(i=0;i<n;i++)
printf("string:%s",str[i]);
getch();
}
