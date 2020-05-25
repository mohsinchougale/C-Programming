#include<stdio.h>
int sort();
int find();
int main()
{

	int n,total,number;
	printf("Enter size of array: ");
	scanf("%d",&total);
	
	int b[total];
	
	for(n=0;n<total;n++)
	{
	  printf("Enter a  number: ");
	  scanf("%d",&b[n]);
	}

	sort(total,b);
	
	printf("Enter a number to be found: ");
	scanf("%d",&number);
	
	find(number,b,total);
	
	
	
return 0;


}

int sort(int size,int a[])
{

	int i,j,temp;

	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
	
	 	  if(a[i]>a[j])
	 	  {
	  	   temp=a[i];
	  	   a[i]=a[j];
	  	   a[j]=temp;
	  
	  	  }
	
		}



	}

printf("Sorted array is: ");
for(i=0;i<size;i++)
printf("%d ",a[i]);
printf("\n");
return 0;
}


int find(int num,int c[], int size)
{

int M,L=0,H=size-1;
M=(L+H)/2;

for(int count=0; count<size;count++)
{

	if(num>c[M])
	{
	
	  L=M+1;
	  M=(L+H)/2;
		
	}
	
	
	else if(num<c[M])
	{
	
	  H=M-1;
	  M=(L+H)/2;
		
	}
	
	
	
	else if(num==c[M])
	{printf("The number is present at index no. %d \n",M);
	 return 0;
	}
	
}

printf("This number is NOT  present\n");
return 0;
}










