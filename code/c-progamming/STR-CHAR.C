void main(){
char str[20],ch;
int i,j,k,c,n;
printf("enter the string : ");
scanf("%s",&str);
n=strlen(str);
for(i=0;i<n;i++)
{
 ch=str[i];
 if(ch!=' ')
 {
   c=0;
   for(j=0;j<n;j++)
   {
    if(ch==str[j])
    {
    c++;
    str[j]=' ';
    }
   }
   printf("%c occurs %d times\n",ch,c);
  }
 }
 getch();
 }