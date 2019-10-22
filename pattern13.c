//Program 42: Print the 13th pattern
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
		for(j=1;j<=i;j+=2)
		{
			printf("%d",j);
		}
		k++;
		printf("\n");
	}
}
/*

Output:

13579
 1357
  135
   13
    1

*/
