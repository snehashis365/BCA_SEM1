//Program 25: Program to print the series 1^1+2^2+3^3+4^4......n^n
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
	int n,val,sum=0;
	printf("Enter n\n");
	scanf("%d",&n);
	for(val=1;val<=n;val++)
		sum+=(int)power(val,val);
	printf("Series sum is:  %d\n",sum);
}
/*
Output:
Enter n
4
Series sum is:  288
*/


