//Program 16: Program to find sum of digits of a number
#include <stdio.h>
main()
{
	int num,sum=0;
	printf("Enter number: ");
	scanf("%d",&num);
	int temp=num;
	while(temp>0)
	{
		sum+=temp%10;
		temp/=10;
	}
	printf("Digit sum of %d is : %d\n",num,sum);
}
/*
Output
Enter number: 645
Digit sum of 645 is : 15
*/

