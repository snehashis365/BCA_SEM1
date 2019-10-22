//Program 36: Print the 6th pattern
#include <stdio.h>
void main()
{
        int i,j,n=4,k=1,l;
        for(i=1;i<=n;i++)
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

    1
   121
  12321
 1234321

*/

