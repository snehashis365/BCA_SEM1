//Program 23: To print all prime numbers from 1 to n
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
	int n,val;
	printf("Enter n: ");
	scanf("%d",&n);
	for(val=1;val<=n;val++)
	{
		if(prime(val))
			printf("%d ",val);
	}
	printf("\n");
}
/*
Output 1:
Enter n: 100
1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/
			
