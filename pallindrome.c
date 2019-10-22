//Program 17: Program to check if a number is pallindrome or not
#include <stdio.h>
main()
{
	int num,rev=0;
	printf("Enter number: ");
	scanf("%d",&num);
	int temp=num;
	while(temp>0)
	{
		rev=(rev*10)+temp%10;
		temp/=10;
	}
	if(num==rev)
		printf("Pallindrome\n");
	else
		printf("Not Pallindrome\n");
}
/*
Output
Enter number: 12521
Pallindrome
*/

