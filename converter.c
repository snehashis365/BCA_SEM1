#include <stdio.h>
void convert(int dec,int base)
{
	int rem=0,p=0,result=0;
	if(dec>0)
	{
		rem=dec%base;
		convert(dec/base,base);
		if(rem<10)
		{
			
		//result=rem*pow(10,p++);
			printf("%d",rem);
		}
		else{
			int ch=rem+55;
			printf("%c",ch);
		}
		
		
	}
	
}


void main()
{
	int num;
	do{
	printf("Press 1 for Decimal to Binary \n");
	printf("Press 2 for Decimal to Octal \n");
	printf("Press 3 for Decimal to Hexadecimal \n");
	printf("Press 0 to Exit \n");
	printf("Enrter Choice:");
	int choice;
	scanf("%d",&choice);
	if(choice==0)
		break;
	printf("Enter number:");
	scanf("%d",&num);
	switch(choice)
	{
		case 1:
		{
			convert(num,2);
			break;
		}
		case 2:
		{
			convert(num,8);
			break;
		}
		case 3:
		{
			convert(num,16);
			break;
		}
		default:
		{
			printf("Wrong Choice!!!");
			break;
		}
	}
	printf("\n");
	}while(1);
}

	
