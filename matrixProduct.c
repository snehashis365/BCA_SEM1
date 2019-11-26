//Program 57: Multiplication of elements of 2 matrix
#include <stdio.h>
void main()
{
  int i,j,m1,n1,m2,n2,row,col;
	printf("For 1st matrix\nEnter no. of rows: ");
	scanf("%d",&m1);
  printf("Enter no. of columns: ");
  scanf("%d",&n1);
	int arr1[m1][n1];
	printf("For 2nd matrix\nEnter no. of rows: ");
	scanf("%d",&m2);
	if(n1==m2)
	{
  printf("Enter no. of columns: ");
  scanf("%d",&n2);
  int arr2[m2][n2];
	int m=m1,n=n2;
	int product[m][n];
	printf("Enter elements for 1st matrix:\n");
	for(i=0;i<m1;i++)
	{
	for(j=0;j<n1;j++)
	{
	  scanf("%d",&arr1[i][j]);
	}
	}
  printf("Entered Matrix: \n");
  for(i=0;i<m1;i++)
  {
	for(j=0;j<n1;j++)
	{
	  printf("%d ",arr1[i][j]);
	}
	printf("\n");
  }
  printf("Enter elements for 2nd matrix:\n");
	for(i=0;i<m2;i++)
	{
	for(j=0;j<n2;j++)
	{
	  scanf("%d",&arr2[i][j]);
	}
	}
  printf("Entered Matrix: \n");
  for(i=0;i<m2;i++)
  {
	for(j=0;j<n2;j++)
	{
	  printf("%d ",arr2[i][j]);
	}
	printf("\n");
  }
  //Multiplying
  for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            int sum = 0;
            for(i=0; i<n1; i++)
            {
                sum += arr1[row][i] * arr2[i][col];
            }

            product[row][col] = sum;
        }
    }
  printf("Result of multiplication:\n");
  for(i=0;i<m;i++)
  {
	for(j=0;j<n;j++)
	{
	  printf("%d ",product[i][j]);
	}
	printf("\n");
  }
	}
	else
	{
		printf("The number of columns of the 1st matrix must equal the number of rows of the 2nd matrix.\n");
	}
}

/*
Output :
For 1st matrix
Enter no. of rows: 2
Enter no. of columns: 3
For 2nd matrix
Enter no. of rows: 3
Enter no. of columns: 2
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
7
8
9
10
11
12
Entered Matrix:
7 8
9 10
11 12
Result of multiplication:
58 64
139 154
*/
