#include<stdio.h>
#include<math.h>
int ugly(int num);
int main()
{
  int n;
  
  printf("Enter a number.\n");
  scanf("%d",&n);
  
  
  	if(ugly(n))  
  	return 1;
  
   	else
  	return 0;
} 
  
  
  
int ugly(int num)
{

	int a,b,c,num1,num2,num3,num4,n1,n2,n3;
	num =num1;
	for(a=1; num1%n1!=0; a++)
	  { 
	    n1=pow(2,a);
	    num1=num1/n1;
	    num2=num1;
	  }
	  
	for(b=1; num2%n2!=0; b++)
	  {
	    n2=pow(3,b);
	    num2=num2/n2;
	    num3=num2;
	  }
	
	for(c=1;num3%n3!=0;c++)
	  {
	     n3=pow(5,c);
	     num3=num3/n3;
	     num4=num3;
	  }  
	    
	if(n3==num4)
	{
	 printf("The number is Ugly number.\n");  
  	 return 1;
  	}
  
   	else
   	{
   	 printf("Ths number is NOT an Ugly number.\n");
  	 return 0;
	}
  	
  	return num4;

}

  
  
  
  
