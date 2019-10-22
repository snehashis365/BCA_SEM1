//Program 9: Program check positive/negative
#include <stdio.h>
main()
{
	printf("Enter number to check: ");
	int num;
	scanf("%d",&num);
	if(num>0)
		printf("Positive \n");
	else
		printf("Negative \n");
}
/*
Output 1:
Enter number to check: 14
Positive
Output 2:
Enter number to check: -25
Negative 
*/
