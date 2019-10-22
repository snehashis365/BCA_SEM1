//Program 32: Print the 3rd pattern
#include <stdio.h>
void main()
{
	int i,j,n=5,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=1;j<k;j+=2)
		{
			printf("*");
		}
		k+=2;
		printf("\n");
	}
}
/*

Output:
    *
   ***
  *****
 *******
*********

*/
