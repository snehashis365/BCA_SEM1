//Program 27: Program to print the series 1^1-3^2+5^4+7^6......upto n terms
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
	int n,val,sum=0,j;
	printf("Enter n\n");
	scanf("%d",&n);
	for(j=1,val=1;j<=n;val+=2,j++)
		sum+=(j%2!=0)?(int)power(val,val-1):(int)-power(val,val-1);
	printf("Series sum is:  %d\n",sum);
}
/*
Output:
Enter n
5
Series sum is:  42929688
*/


