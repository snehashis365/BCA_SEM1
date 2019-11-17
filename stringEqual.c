//Program 62: Program to check equality of two strings irrespective of case
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isEqual(char a[],char b[])
{
  if(strlen(a)==strlen(b))
  {
    int i,f=1;
    for(i=0;i<strlen(a);i++)
    {
      if(toupper(a[i])!=toupper(b[i]))
      {
        f=0;
        break;
      }
    }
    if(f)
    return 1;
    else
    return 0;
  }
  else
  return 0;
}
void main()
{
  char a[50],b[50];
  printf("Enter 1st string: ");
  gets(a);
  printf("Enter 2nd string: ");
  gets(b);
  if(isEqual(a,b))
    printf("Equal\n");
  else
    printf("Not Equal\n");
}

/*

Output:

*1st case:*

Enter 1st string: Hello World
Enter 2nd string: HELLO WorlD
Equal

*2nd case*

Enter 1st string: Hello World
Enter 2nd string: HELLO WrlD
Not Equal

*/
