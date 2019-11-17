//Program 63: Program to calculate ⁿcᵣ
#include <stdio.h>
int fact(int n)
{
  if(n>0)
    return n*fact(n-1);
  else
    return 1;
}
float nCr(int n,int r)
{
  if(r>0)
    return (float)fact(n)/(fact(r)*fact(n-r));
  else
    return 1;
}
void main()
{
  int n,r;
  printf("Enter n=");
  scanf("%d",&n);
  printf("Enter r=");
  scanf("%d",&r);
  if(n>=r && r>=0)
    printf("ⁿcᵣ=%f\n",nCr(n,r));
  else
    printf("please enter n ≥ r ≥ 0 \n");
}

/*

Output:

Enter n=8
Enter r=2
ⁿcᵣ=28.000000

*/
