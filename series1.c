//Program 14: Program to print sum of series 1-2+3-4+5-6+7-8.........upto n terms
#include <stdio.h>
main()
{
	int i,n,sum=0;
	printf("Enter n th term: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum+=(i%2!=0)?i:-i;
	printf("Series sum is: %d\n",sum);
}
/*
Output: 
Enter n th term: 11
Series sum is: 6
*/
