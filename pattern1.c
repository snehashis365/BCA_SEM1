//Program 30: Print the 1st pattern
#include <stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
}
/*

Output:
*
**
***
****
*****

*/
