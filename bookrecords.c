#include<stdio.h>


int main()
{

	FILE *book,*hard,*paper,*both;
	char title[20],author[20],type[20];
	int price,n,i;
	
	printf("Enter number of books:- ");
	scanf("%d",&n);
	
	book=fopen("Books.txt","w");
	hard=fopen("Hard Bound.txt","w");
	paper=fopen("Paper Bound","w");
	both=fopen("BOTH","w");
	
	for(i=1;i<=n;i++)
	{
		printf("Enter title of book no. %d :- ",i);
		scanf(" %[^\n]s ",title);//You have to give space after and before the "".
		printf("\nEnter name of author of the book :- ");
		scanf(" %[^\n]s ",author);
		printf("\nEnter price of the book :- ");
		scanf("%d",&price);
		printf("\nEnter type of the book :- ");
		scanf("%s",type);
		printf("\n");
		
		fprintf(book,"%s \t %s \t %d \t %s \n",title,author,price,type);
		
		
		
	
	}
	
	
	
		while(!feof(book))
		{	
			fscanfvvvv(book,"%s \t %s \t %d \t %s \n",title,author,price,type);
		
			if(strcmp("hard",type)==0)
		 	fprintf(hard,"%s \t %s \t %d \n",title,author,price);
		
	 		else if(strcmp("paper",type)==0)
		 	fprintf(paper,"%s \t %s \t %d \n",title,author,price);
		
		 	else if(strcmp("both",type)==0)
			fprintf(both,"%s \t %s \t %d \n",title,author,price);
		}
		
		
	fclose(book);
	fclose(hard);
	fclose(paper);
	fclose(both);
}
