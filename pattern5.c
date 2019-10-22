//Program 34: Print the 5th pattern
#include <stdio.h>
void main()
{
	int i,j,x=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d",x++);
		printf("\n");
	}
}
/*

Output:

1
23
456
78910

*/
