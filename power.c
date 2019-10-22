//Program 18: Program to find a to the power b without using pow() function
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
	int a,b;
	printf("Enter base and then power\n");
	scanf("%d %d",&a,&b);
	printf("Result is %f\n",power(a,b));
}
/*
Output:
Enter base and then power
5
3
Result is 125.000000
*/


