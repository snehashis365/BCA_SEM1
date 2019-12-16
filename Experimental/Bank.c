#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct customer{
	char name[20];
	char acc_type[10];
	float balance;
	long int acc_number;
}customer;
char reset[1];//using this to reset the trailing new line left by scanf
long int acc_num=1000100010001000;
void display(customer this)
{
	printf("Account Details:\nAccount Holder Name: ");
	puts(this.name);
	printf("Account Number: %ld\n",this.acc_number);
	printf("Account Type: ");
	puts(this.acc_type);
	printf("Balance: %f\n",this.balance);
}
void viewBalance(customer this)
{
	printf("Balance: %f\n",this.balance);
}
float deposit(customer this)
{
	int flag;
	float d;
	do
	{
		flag=0;
		printf("Enter Amount: ");
		scanf("%f",&d);
		if(d+this.balance<3000)
		{
			printf("Minimum Balance should be 3000\nTransaction declined plz re-enter\n");
			flag=1;
		}
	}while(flag==1);
	return this.balance+d;
}
float withdraw(customer this)
{
	printf("Enter Amount: ");
	float w;
	scanf("%f",&w);
	if(this.balance-w<3000)
	{
		printf("Minimum account balance should be 3000\nTransaction Declined\n");
		return this.balance;
	}
	else
	{
		this.balance-=w;
		printf("Transaction Sucessful\nRemaining ");
		viewBalance(this);
		return this.balance;
	}
}


customer newAccount()
{
	customer new;
	printf("Enter Name: ");
	gets(reset);
	fflush(stdin);
	gets(new.name);
	int f;
	do
	{
		f=0;
		printf("Select Account type:\nPress 1 for Savings\nPress 2 for current\nEnter Choice: ");
		int ch;
		scanf(" %d",&ch);
		switch(ch)
		{
			case 1 :
			{
				strcpy(new.acc_type,"Savings");
				break;
			}
			case 2 :
			{
				strcpy(new.acc_type,"Current");
				break;
			}
			default :
			{
				printf("Wrong Choice\n");
				f=1;
				break;
			}
		}
	}while(f==1);
	printf("Deposit amount (Minimum 3000)\n");
	new.balance=0.0;
	new.balance=deposit(new);
	new.acc_number=acc_num;
	acc_num+=25;
	printf("Account Number Generated Sucessfully!!\n");
	display(new);
	return new;
}
int search(long int acc,char name[],customer list[],int l)
{
	int i;
	if (acc<1000100010001000)
	{
		for(i=0;i<l;i++)
		{
			if(list[i].acc_number==acc)
			{
				printf("Account found ");
				return i;
			}
			else
			{
				printf("Accont number has no match");
				return -1;
			}
		}
	}
	else if(name!=NULL)
	{
		int count=0;
		for(i=0;i<l;i++)
		{
			if(strcmp(name,list[i].name)==0)
			{
				count++;
				puts(list[i].name);
				puts(list[i].acc_type);
				printf("Accont number: %ld\n",list[i].acc_number);
			}
		}
		if(count>0)
		printf("Total matches: %d\n",count);
		else
		printf("No Match found\n");
		return -1;
	}
	else
	{
		printf("Invalid details\n");
		return -999;
	}
}
customer Banking(customer this)
{
	int flag;
	do {
		flag=0;

		printf("Press 1 to view Balance\nPress 2 to withdraw\nPress 3 to deposit\nPress 4 to return to previous menu\nEnter choice: ");
		int choice;
		scanf(choice);
		switch(choice)
		{
			case 1 :
			{
				viewBalance(this);
				break;
			}
			case 2 :
			{
				this.balance=withdraw(this);
				break;
			}
			case 3 :
			{
				this.balance=deposit(this);
				break;
			}
			case 4 :
			{
				flag = 1;
				break;
			}
			default :
			{
				printf("Wrong Choice!\n");
			}
		}
	}while(flag!=1);
	return this;
}

void main()
{
	int n=0,i,flag;
	customer *list;//=(customer*)malloc(n*sizeof(customer));
	printf("Press 1 for new account\nPress 2 to search for account\nPress 3 to exit\n");
	int ch1;
	printf("Enter choice: ");
	scanf("%d",&ch1);
	do {
		flag=0;
		switch(ch1)
		{
			case 1 :
			{
				list=(customer*)malloc(sizeof(customer));
				list[n]=newAccount();
				n++;
				break;
			}
			case 2 :
			{
				printf("Enter account number if you hace forgot account number enter -1 to search for your account by name\n" );
				long int acn;
				scanf("%ld",&acn);
				if(acn>0)
				{
					int incdex=(int)search(acn,NULL,list,n);
					if(index>0)
					{
						customer temp=Banking(list[index]);
						list[index]=temp;
					}
					else
					{
						printf("Account not found\n");
					}
				}
				else if(index!=-999)
				{
					printf("Enter Name: ");
					char sk[20];
					gets(reset);
					gets(sk);
					int index=search(NULL,sk,list,n);
					printf("Please note down you account number and re-enter");
				}
				else
				{
					printf("Please try again\n");
				}
				break;
			}
			case 3 :
			{
				flag=1;
				break;
			}
			default :
			{
				printf("Wrong Choice\n");
				break;
			}

		}
	}while(flag!=1);
	printf("Thank You\n");
}
