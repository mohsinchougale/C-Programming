// Print an asterix in front of every prime number from 1 to 100


#include<stdio.h>
int isprime(int num);
void main()
{

	int n;

	for(n=1;n<=100;n++)
	{
	  printf("%d",n);
	  if(isprime(n)==1)
	  printf("*");
	  if(n%10==0)	  
	  printf("\n");
	  else
	  printf("\t");
	  
	}
	
	
}

int isprime(int num)
{
	int j, fact=0;
	{
	 for(j=1;j<=num;j++)
	{
		if(num%j==0)
		{
		 fact++;
		}	
	}
	
	 if(fact==2)
	 return 1;
	 else
	 return 0;
	 
	
	
	
	
	}




}
