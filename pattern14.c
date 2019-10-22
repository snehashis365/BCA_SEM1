//Program 43: Print the 14th pattern
#include <stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j>0;j--)
			printf("%d",j);
		printf("\n");
	}
}
/*

Output:

1
21
321
4321
54321

*/
