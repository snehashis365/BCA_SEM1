//Program 12: Program to calculate electricity bill as per units consumed
#include <stdio.h>
main()
{
	int units,amount=300;
	printf("Enter units consumed: ");
	scanf("%d",&units);
	if(units>100 && units<=200)
	{
		amount+=5*(units-100);
	}
	else if(units>200 && units<=300)
	{
		amount+=500+(6*(units-200));
	}
	else
	{
		amount+=500+600+(10*(units*300));
	}
	printf("Bill amount is: %d \n",amount);
}
/*
Output:
Enter units consumed: 240
Bill amount is: 1040
*/
