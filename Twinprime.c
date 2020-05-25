/*Twin primes are consecutive odd numbers, both of which are prime numbers. Write a prgram which inputs two positive integers a and b and the output will be all twin primes in the range a to b.*/

#include<stdio.h>

void main()
{

 int n,a,b;
 printf("Enter starting range.\n");
 scanf("%d",&a);
 printf("Enter starting range.\n");
 scanf("%d",&b);

 if(a%2==0)
 n=a+1;
 else 
 n=a;

printf("The twin prime numbers are:  \n");


while((n+2)<=b)
{
       int f=0;

       for(int i=1; i<=n; i++)
	{if(n%i==0)
          f++;
          }


       int m;
       m=n+2;

       int f1=0;

	if(f==2)
	 {
             for(int j=1; j<=m; j++)
              { if(m%j==0)
                 {f1++;

}




}



if(f1==2)
printf("%d   %d \t ",n,m);
 


} 

n=n+2;





}

}














