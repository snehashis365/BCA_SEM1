//Program 44: Print the 15th pattern
#include <stdio.h>
void main()
{
        int i,j,n=5,k=1,l;
        for(i=n;i>=1;i--)
        {
                for(j=1;j<=n-i;j++)
                {
                        printf(" ");
                }
                for(j=1;j<=i;j++)
                {
                        printf("%d",j);
                }
                for(j=j-2;j>0;j--)
                {
                        printf("%d",j);
                }
                k+=2;
                printf("\n");
        }
}
/*

Output:

123454321
 1234321
  12321
   121
    1

*/

