#include<stdio.h>
int decreasing(int x,int y);
int increasing(int m,int n);
int main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	
	decreasing(a,a);
	
	
	return 0;

}



int decreasing(int x,int y)

{
	
	printf("%d ",x);
	
	x=x-5;
	
	if(x>0)
	{
	return decreasing(x,y);
	}
	
	
	else
	{
		printf("%d ",x);
		increasing(x,y);
		return 0;
	} 
	
	
}


int increasing(int m, int n)
{
	
	if(m<=n-5)
	{
		printf("%d ", m+5);
		return increasing(m+5,n);
	
	}
	
	else
	return 0;
	
	

}




