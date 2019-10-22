//Program 20: To check prime
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
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	if(prime(n))
		printf("Prime\n");
	else
		printf("Not Prime\n");
}
/*
Output 1:
Enter number: 23
Prime

Output 2:
Enter number: 15
Not Prime
*/
			
