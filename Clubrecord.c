//A men’s sports club keeps elaborate computerized records of all its members. The records contain typical information such as age, address, etc. of each person.But there is also information about whether a member is an active playing members, about whether he is married, and soon; if he is married the record contains information about his wife’s name,the no. of children and their names.Write a program which demonstrates how such a system might be implemented.Show how the names of the wives of all active playing members might be printed.


#include<stdio.h>

struct club
{
	int age, active1,active2,active3;
	char name[20], address[20];
	char wife[20];
	int children;
	struct child { char child_name[20]; } c[20];
};


void main()
{

	struct club C[5];
	struct child c[20];
	int i,j;
	
	for(i=0; i<5; i++)
	{
	
		printf("Enter name of the member \n");
		scanf("%s",C[i].name);

		printf("Enter the address ");
		scanf("%s",C[i].address);

		printf("Enter the age ");
		scanf("%d",&C[i].age);
		
		printf("If member is active enter 1 else 0 :-  ");
		scanf("%d",&C[i].active1);
		
		if(C[i].active1==1)
		{
		printf("Enter 1 if member has a wife. Else type 0 :- ");
		scanf("%d",&C[i].active2);
		printf("\n");

			if(C[i].active2==1)
			{
				printf("Enter name of wife  ");
				scanf("%s",C[i].wife);

			
			
				printf("\nDoes the member have children? (Type 1 for yes and 0 for no)\n");
				scanf("%d",&C[i].active3);
			
			
				if(C[i].active3==1)
				{
			
					printf("Enter number of children ");
					scanf("%d",&C[i].children);
					printf("\n");	
				
					for(int c=0; c<C[i].children; c++)
					{
				
						printf("Enter name of child  ");
						scanf("%s",C[i].c[c].child_name);
						printf("\n");
				
				
					}

			
				}

		
			}
		
	
		}
	
	printf("\n");
	}
	
	
	
	printf("\n\n\n");


	printf("Member info\n\n");
	for(int t=0; t<5; t++)
	{
	
		printf("Member name:  %s",C[t].name);
		
		printf("\nAddress:  %s",C[t].address);
		
		printf("\nAge:  %d",C[t].age);
		
		
		
		
		if(C[t].active2==1)
		{
			printf("\nWife's name: %s ",C[t].wife);
			
				
		}
	
		if(C[t].active3==1)
		{
			for(int d=0, e=0; d<C[t].children, e<C[t].children ; d++,e++)
			{
			
			
				printf("\nName of child:  %s",C[t].c[e].child_name);
				
			}
		
		printf("\n");
		
		
		}
	
	if(C[t].active1==1)
	printf("This member is ACTIVE.\n\n");
	else
	printf("This member is NOT ACTIVE.\n\n");
	

	
	}
	
	printf("\n");
}




/*Enter name of the member 
Naruto
Enter the address Konoha
Enter the age 27
If member is active enter 1 else 0 :-  1
Enter 1 if member has a wife. Else type 0 :- 1

Enter name of wife  Hinata

Does the member have children? (Type 1 for yes and 0 for no)
1
Enter number of children 2

Enter name of child  Boruto

Enter name of child  Himawari


Enter name of the member 
Sasuke
Enter the address Konoha
Enter the age 27
If member is active enter 1 else 0 :-  1
Enter 1 if member has a wife. Else type 0 :- 1

Enter name of wife  Sakura

Does the member have children? (Type 1 for yes and 0 for no)
1
Enter number of children 1

Enter name of child  Sarada


Enter name of the member 
Kakashi
Enter the address Konoha
Enter the age 41
If member is active enter 1 else 0 :-  0

Enter name of the member 
Gaara
Enter the address Sungakure
Enter the age 25
If member is active enter 1 else 0 :-  1
Enter 1 if member has a wife. Else type 0 :- 0


Enter name of the member 
Shikamaru
Enter the address Konoha
Enter the age 28
If member is active enter 1 else 0 :-  1
Enter 1 if member has a wife. Else type 0 :- 1

Enter name of wife  Temari

Does the member have children? (Type 1 for yes and 0 for no)
1
Enter number of children 1

Enter name of child  Shikadai





Member info

Member name:  Naruto
Address:  Konoha
Age:  27
Wife's name: Hinata 
Name of child:  Boruto
Name of child:  Himawari
This member is ACTIVE.
Member name:  Sasuke
Address:  Konoha
Age:  27
Wife's name: Sakura 
Name of child:  Sarada
This member is ACTIVE.
Member name:  Kakashi
Address:  Konoha
Age:  41This member is NOT ACTIVE.
Member name:  Gaara
Address:  Sungakure
Age:  25This member is ACTIVE.
Member name:  Shikamaru
Address:  Konoha
Age:  28
Wife's name: Temari 
Name of child:  Shikadai
This member is ACTIVE.





























