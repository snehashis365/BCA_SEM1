//Program 7: Program to swap two variable without values using a third variable
#include <stdio.h>
main()
{
	int a,b;
	printf("Enter 1st variable: ");
	scanf("%d",&a);
	printf("Enter 2nd variable: ");
	scanf("%d",&b);
	printf("Values before swapping: \n a=%d \n b=%d \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Values after swapping: \n a=%d \n b=%d \n",a,b);
}
/*
Output:
Enter 1st variable: 200
Enter 2nd variable: 500
Values before swapping: 
 a=200 
 b=500 
Values after swapping: 
 a=500 
 b=200 
*/
