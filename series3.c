//Program 26: Program to print the series 1 + 3/2! + 5/4! + 7/6! + 9/8! .....n/(n-1)!
#include <stdio.h>
int fact(int num)
{
	int f=1,i;
	for(i=1;i<=num;i++)
		f*=i;
	return f;
}
main()
{
	int n,i;
	float sum=0.0;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		sum+=(float)(i/fact(i-1));
	}
	printf("Series sum is: %f\n",sum);
}
/*
Output:
Enter n: 7
Series sum is: 2.000000
*/

