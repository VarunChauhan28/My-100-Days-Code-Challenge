void main()
{
char str[20];
int num,n;
printf("enter the number: ");
scanf("%s",str);
printf("%d \n",str_to_i(str));
}
int str_to_i(char str[])
{
int i,num=0;
if(str[0]=='-')
i=1;
else
i=0;
while(i<strlen(str))
num=num*10+(str[i++]-48) ;
if(str[0]=='-')
return -num;
else
return num;
}
getch();
}
