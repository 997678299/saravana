#include<stdio.h>
#include<conio.h>
int main()
{
char a[15];
int i,j;
printf("enter the string");
for(i=0;i<=15;i++)
{
scanf("%d",&a[i]);
}
for(j=0;a[j]!='\0';j++)
{
if(a[j]==' ')
{
count++;
}
}
printf("words is %d",count+1);
return 0;
getch();
}
