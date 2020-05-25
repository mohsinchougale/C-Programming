#include<stdio.h>
int fact(int n);
void num_sum(int x, int y);
int main()
{
 int n,r;
 printf("Enter number of variables");
 scanf("%d",&n);
 printf("Enter sum of the variables");
 scanf("%d",&r);
 num_sol(n,r);
 return 0;
}

void num_sum(int x, int y)
{
 int a,b,c,k;
 a=fact(x+y-1);
 b=fact(y);
 c=fact(x-1);
 k=p/(q*r);
 printf("Number of solutions=%d",k);
}

int fact(int n)
{
 if(n==0)
 return 1;
 
 else
 return n*fact(n-1);
 
 }     
  
 
 
   

