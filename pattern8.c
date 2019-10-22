//Program 37: Print the 8th pattern
#include <stdio.h>
void main()
{
	int i,j,x;
	for(i=1;i<=4;i++)
	{
		x=i;
		for(j=1;j<=i;j++)
		{
			int p=(x%2==0)?0:1;
			printf("%d",p);
			x++;
		}
		printf("\n");
	}
}
/*

Output:

1
01
101
0101

*/
