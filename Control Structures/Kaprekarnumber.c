/* If there is a number 'n' with 'm'(eg. 279), then it should be such that the sum of the number formed by the last m digits of (number)^2 and the number formed from the remaining digits = number (eg. 279^2=88209; m=3, and 88+209=279)*/

#include<stdio.h>
#include<math.h>


void main()
{
	int number,square,count1=0,a,b,c,n,f,p;
	printf("Enter your number.\n");
	scanf("%d",&number);

square=number*number;
a=square;
n=number;

while(number>0) //This entire process we are doing to find the number of digits.


{
number=number/10;

count1=count1+1;


}



p=pow(10,count1); /*"%" i.e. modular division(eg.18%10=8) and pow operation cannot work simultaneously.
                   Therefore we have to convert pow to an integer*/    

b=a%p;//209                         
f=a/p;//88

c=f+b;



if(c==n)
{
printf("The number satisfies the condition\n");
}

else

{
printf("This number does NOT satisfy the condition\n");
}
}
