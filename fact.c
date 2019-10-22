//Program 15: Program to find factorial of a number
#include <stdio.h>
main()
{
	int n,f=1,i;
	printf("Enter number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		f*=i;
	printf("Factorial is: %d \n",f);
}
/*
Output:
Enter number: 4
Factorial is: 24 
*/

