//Program 52: Bubble sort
#include <stdio.h>
int *sort(int arr[],int l)
{
  int i,j,temp,flag;
  for(i=0;i<l;i++)
  {
    flag=0;
    for(j=0;j<l-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        flag=1;
      }
    }
    if(flag==0)
      break;
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
89
56
23
78
45
12
67
34
90
50
Sorted array:
12
23
34
45
50
56
67
78
89
90

*/
