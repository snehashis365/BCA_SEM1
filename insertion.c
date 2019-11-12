//Program 53: Insertion sort
#include <stdio.h>
int *sort(int arr[],int l)
{
  int i,j,temp;
  for(i=1;i<l;i++)
  {
    temp=arr[i];
    for(j=i-1;j>=0;j--)
    {
      if(arr[j]>temp)
      {
        arr[j+1]=arr[j];
      }
      else
        break;
    }
    arr[j+1]=temp;
  }
  return arr;
}
void main()
{
  int i,l;
	printf("Enter length: ");
	scanf("%d",&l);
	int arr[l];
	printf("Enter elements:\n");
	for(i=0;i<l;i++)
	{
		scanf(" %d",&arr[i]);
	}
  int *sorted=sort(arr,l);
  printf("Sorted array:\n");
  for(i=0;i<l;i++)
	{
		printf("%d\n",sorted[i]);
	}
}
/*

Output :

Enter length: 10
Enter elements:
87
54
24
78
45
15
66
37
90
50
Sorted array:
15
24
37
45
50
54
66
78
87
90

*/
