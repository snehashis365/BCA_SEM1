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

Enter no. of rows: 3
Enter no. of columns: 4
Enter elements for 1st matrix:
11
22
33
44
55
66
77
88
99
25
46
79
Entered Matrix:
11 22 33 44
55 66 77 88
99 25 46 79
Enter elements for 2nd matrix:
19
18
17
26
35
24
13
10
0
15
34
11
Entered Matrix:
19 18 17 26
35 24 13 10
0 15 34 11
Result of addition:
30 40 50 70
90 90 90 98
99 40 80 90

*/
