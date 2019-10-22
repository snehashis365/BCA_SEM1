//Program 21: Program to check armstrong number without math.h
#include <stdio.h>
float power(int base,int powr)
{
	int val=1,i;
	if(power>0)
	{

		for(i=1;i<=powr;i++)
		{
			val*=(float)base;
		}
		return val;
	}
	else
		return (1.0/power(base,-powr));
}
main()
{
	int num,sum=0;
	printf("Enter number\n");
	scanf("%d",&num);
	int temp=num;
	while(temp>0)
	{
		sum+=(int)power(temp%10,3);
		temp/=10;
	}
	if(num==sum)
		printf("Armstrong Number\n");
	else
		printf("Not Armstrong\n");
}
/*
Output:
Enter number
153
Armstrong Number
*/


