//Program 6: Program to swap two variable values using a third variable
#include <stdio.h>
main()
{
	int a,b;
	printf("Enter 1st variable: ");
	scanf("%d",&a);
	printf("Enter 2nd variable: ");
	scanf("%d",&b);
	printf("Values before swapping: \n a=%d \n b=%d \n",a,b);
	int temp=a;
	a=b;
	b=temp;
	printf("Values after swapping: \n a=%d \n b=%d \n",a,b);
}
/*
Output:
Enter 1st variable: 100
Enter 2nd variable: 300
Values before swapping: 
 a=100 
 b=300 
Values after swapping: 
 a=300 
 b=100 
*/
