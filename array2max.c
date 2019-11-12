//Program 47: Print the 2nd largest of all the elements of an array
#include <stdio.h>
#include <limits.h>
int getMax2(int arr[],int l)
{
  int max=0,max2=INT_MIN,i;
  for(i=1;i<l;i++)
  {
    if(arr[i]>arr[max])
    {
      max2=arr[max];
      max=i;
    }
    else if(arr[i]>max2 && arr[i]<arr[max])
    {
      max2=arr[i];
    }
  }
  return max2;
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
  int max2=getMax2(arr,l);
  printf("2nd Largest element is: %d\n",max2);
}
/*

Output:

Enter array length: 8
Enter array elements:
13
61
84
42
36
94
22
1
Largest element is: 84

*/
