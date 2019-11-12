//Program 45: Print the average of all the elements of an array
#include <stdio.h>
float getAvg(int arr[],int l)
{
  int i,sum=0;
  for(i=0;i<l;i++)
  {
    sum+=arr[i];
  }
  float avg=(float)sum/l;
  return avg;
}
void main()
{
  printf("Enter array length: ");
  int l,i;
  scanf("%d",&l);
  int arr[l];
  printf("Enter array elements: \n");
  for (i = 0; i < l; i++)
  {
    scanf("%d",&arr[i]);
  }
  float avg=getAvg(arr,l);
  printf("Average: %f\n",avg);
}
/*

Output:

Enter array length: 6
Enter array elements:
10
54
30
89
7
2
Average: 32.000000


*/
