//Program 3: Program to convert temperature in fahrenheit to celsius
#include <stdio.h>
main()
{
	float f;
	printf("Enter temperature in fahrenheit: ");
	scanf("%f",&f);
	float c=(f-32)*(5.0/9.0);
	printf("Temperature in celsius: %f \n",c);
}
/*
Output:
Enter temperature in fahrenheit: 100
Temperature in celsius: 37.777779 
*/
