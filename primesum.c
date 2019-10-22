//Program 28: To print the sum of all prime numbers from 1 to n
#include <stdio.h>
int prime(int num)
{
	int f=1,i;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			f=0;
			break;
		}
	}
	return f;
}
main()
{
	int n,val,sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	for(val=1;val<=n;val++)
	{
		if(prime(val))
			sum+=val;
	}
	printf("Prime sum is: %d\n",sum);
}
/*
Output 1:
Enter n: 20
Prime sum is: 78
*/
			
