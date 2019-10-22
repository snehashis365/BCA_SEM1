//Program 8: Program check even/odd
#include <stdio.h>
main()
{
	printf("Enter number to check: ");
	int num;
	scanf("%d",&num);
	if(num%2==0)
		printf("Even \n");
	else
		printf("Odd \n");
}
/*
Output 1:
Enter number to check: 14
Even 
Output 2:
Enter number to check: 25
Odd 
*/
