#include<stdio.h>
int main(void)
{
int a;
int count=0;
scanf("%d",&a);
while(a!=0)
{
a/=10;
++count;
}
printf("%d",count);
getch() ;
return 0;
}
