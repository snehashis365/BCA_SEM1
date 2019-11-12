//Program 55: Transpose of a matrix
#include <stdio.h>
void main()
{
  int i,j,m,n;
	printf("Enter no. of rows: ");
	scanf("%d",&m);
  printf("Enter no. of columns: ");
  scanf("%d",&n);
	int arr[m][n];
	printf("Enter elements:\n");
	for(i=0;i<m;i++)
	{
    for(j=0;j<n;j++)
    {
      scanf("%d",&arr[i][j]);
    }
	}
  printf("Entered Matrix: \n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  printf("Transpose is:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      printf("%d ",arr[j][i]);
    }
    printf("\n");
  }
}

/*

Output :

Enter no. of rows: 3
Enter no. of columns: 2
Enter elements:
1
2
3
4
5
6
Entered Matrix:
1 2
3 4
5 6
Transpose is:
1 3 5
2 4 6 

*/
