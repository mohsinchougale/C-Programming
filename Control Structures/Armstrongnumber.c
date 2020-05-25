#include<stdio.h>
#include<math.h>

void main()
{  int a,b,n=0,s,d,c,i;

printf("Enter your number.\n");
scanf("%d",&a);
c=a;
d=a;


while(a>0)
 { a=a/10;
   n=n+1;
 }

for(i=1; i<=n; i++)
 {
   b=c%10;
   c=c/10;


   s=s+pow(b,n);
 }

if(d==s)
 { 
 printf("The number is Armstrong number");
 }

else
 {
 printf("The number is not Armstrong number");
 }
}
