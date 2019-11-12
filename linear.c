//Program 50: Linear search
void search(int arr[],int l,int item)
{
  int i,count=0;
  for(i=0;i<l;i++)
  {
    if(arr[i]==item)
    {
      printf("Found at index: %d\n",i);
      count++;
    }
  }
  if(count>0)
    printf("Found %d match\n",count);
  else
    printf("No match\n");
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
  printf("Enter search item: ");
  int item;
  scanf("%d",&item);
  search(arr,l,item);
}

/*

Ouput :

Enter array length: 10
Enter array elements:
65
81
22
5
46
9
5
22
8
22
Enter search item: 22
Found at index: 2
Found at index: 7
Found at index: 9
Found 3 match

*/
