//Program 24: To print fibonacci series upto n terms
#include <stdio.h>
main()
{
	int var1=0,var2=1,n,i,sum=var1+var2;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("%d %d ",var1,var2);
	for(i=1;i<=n;i++)
	{
		printf("%d ",sum);
		var2+=var1;
		var1=var2-var1;
		sum=var1+var2;
	}
	printf("\n");
}
/*
Output: 
Enter n: 10
0 1 1 2 3 5 8 13 21 34 55 89
*/

