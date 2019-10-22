//Program 33: Print the 4th pattern
#include <stdio.h>
void main()
{
	int i,j,k=0;
	for(i=9;i>0;i-=2)
	{
		for(j=1;j<=k;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		k++;
		printf("\n");
	}
}
/*

Output:

*********
 *******
  *****
   ***
    *

*/
