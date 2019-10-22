//Program 41: Print the 12th pattern
#include <stdio.h>
#include <math.h>
void main()
{
	int i,j,p=1;
	for(i=1;i<=7;i+=2)
	{
		for(j=1;j<=p;j++)
		{
			int val=pow(i,j);
			printf("%d ",val);
		}
		printf("\n");
		p++;
	}
}
/*

Output:

1
3 9
5 25 125
7 49 343 2401

*/
