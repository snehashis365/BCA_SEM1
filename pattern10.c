//Program 39: Print the 10th pattern
#include <stdio.h>
void main()
{
        int i,j,k=1,l;
        for(i=4;i>0;i--)
        {
                for(j=1;j<=k;j++)
                {
                        printf(" ");
                }
                for(j=1;j<=i;j++)
                {
			int p=j+64;
                        printf("%c",p);
                }
                for(j=j-2;j>0;j--)
                {
			int p=j+64;
                        printf("%c",p);
                }
                k++;
                printf("\n");
        }
}
/*

Output:

 ABCDCBA
  ABCBA
   ABA
    A

*/

