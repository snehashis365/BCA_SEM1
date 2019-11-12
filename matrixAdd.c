//Program 56: Addition of elements of 2 matrix
#include <stdio.h>
void main()
{
  int i,j,m,n;
	printf("Enter no. of rows: ");
	scanf("%d",&m);
  printf("Enter no. of columns: ");
  scanf("%d",&n);
	int arr1[m][n];
  int arr2[m][n];
	printf("Enter elements for 1st matrix:\n");
	for(i=0;i<m;i++)
	{
    for(j=0;j<n;j++)
    {
      scanf("%d",&arr1[i][j]);
    }
	}
  printf("Entered Matrix: \n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",arr1[i][j]);
    }
    printf("\n");
  }
  printf("Enter elements for 2nd matrix:\n");
	for(i=0;i<m;i++)
	{
    for(j=0;j<n;j++)
    {
      scanf("%d",&arr2[i][j]);
    }
	}
  printf("Entered Matrix: \n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",arr2[i][j]);
    }
    printf("\n");
  }
  printf("Result of addition:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",arr1[i][j]+arr2[i][j]);
    }
    printf("\n");
  }
}

/*

Output :

Enter no. of rows: 2
Enter no. of columns: 3
Enter elements for 1st matrix:
1
2
3
4
5
6
Entered Matrix: 
1 2 3 
4 5 6 
Enter elements for 2nd matrix:
5
4
3
2
1
0
Entered Matrix: 
5 4 3 
2 1 0 
Result of addition:
6 6 6 
6 6 6 

*/
