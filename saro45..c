#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("the count is %d",count);
getch();
return 0;
}
