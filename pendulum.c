//Program 5: Program ro find time period of a simple pendulum
#include <stdio.h>
#include <math.h>
main()
{
	float l,t;
	printf("Enter length: ");
	scanf("%f",&l);
	float pie=22.0/7.0;
	float g=9.8;
	t=2.0*pie*(sqrt(l/g));
	printf("Time Period: %f \n",t);
}
/*
Output:
Enter length: 20
Time Period: 8.979591 
*/
