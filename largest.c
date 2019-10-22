//Program 10: Program to find largest number among 3 numbers
#include <stdio.h>
main()
{
	int a,b,c;
	printf("Enter 3 numbers: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("Largest is: ");
	if(a>b && a>c)
	printf("%d \n",a);
	else if(b>a && b>c)
	printf("%d \n",b);
	else
	printf("%d \n",c);
}
/*
Output:
Enter 3 numbers: 
14
54
33
Largest is: 54 
*/
