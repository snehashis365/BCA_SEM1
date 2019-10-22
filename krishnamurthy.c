//Program 22: Program to check krishnamurthy number
#include <stdio.h>
int fact(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
		f*=i;
	return f;
}
main()
{
	int num,sum=0;
	printf("Enter number\n");
	scanf("%d",&num);
	int temp=num;
	while(temp>0)
	{
		sum+=fact(temp%10);
		temp/=10;
	}
	if(num==sum)
		printf("Krishnamurthy Number\n");
	else
		printf("Not Krishnamurthy number\n");
}
/*
Output:
Enter number
145
Krishnamurthy Number
*/

