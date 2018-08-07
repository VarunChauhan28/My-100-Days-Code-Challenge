#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
struct{
	char name[10];
	int age;
	float sal;
}emp;
char str[30]="anita 30 8000.0";
sscanf(str,"%s%d%f",emp.name,&emp.age,&emp.sal);
printf("name  :%s\n ",emp.name);
printf("age   :%d\n ",emp.age);
printf("salary  :%f\n",emp.sal);
getch();
}