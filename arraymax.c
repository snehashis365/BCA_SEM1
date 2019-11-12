//Program 46: Print the largest of all the elements of an array
#include <stdio.h>
int getMax(int arr[],int l)
{
  int max=0,i;
  for(i=1;i<l;i++)
  {
    if(arr[i]>arr[max])
    max=i;
  }
  return arr[max];
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
  int max=getMax(arr,l);
  printf("Largest element is: %d\n",max);
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
Largest element is: 94

*/
