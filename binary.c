//Program 48: Program to convert decimal to binary
#include <stdio.h>
void binary(int dec)
{
	int rem=0,p=0,result=0;
	if(dec>0)
	{
		rem=dec%2;
		binary(dec/2);
		printf("%d",rem);
	}
}


void main()
{
	int num;
	printf("Enter Decimal Numer: ");
	scanf("%d",&num);
	printf("Binary: ");
	binary(num);
	printf("\n");
}
/*

Ouput:

Enter Decimal Numer: 74
Binary: 1001010

*/
