#include<stdio.h> 
#include<conio.h>
int main() 
{ 
 int i, n, d ; 
scanf("%d", &n) ; 
  
scanf("%d", &d) ; 
printf("\nThe numbers divisible by %d are :\n\n", d) ; 
for(i = 1 ; i <= n ; i++) 
if(i % d == 0) 
printf("%d\t", i) ;
getch() ;
return 0;
}
