//Program 58: Find the length of a string
#include <stdio.h>
#include <string.h>
int len(char str[])
{
  int i=0;
  while(str[i]!=NULL)
  {
    i++;
  }
  return i;
}
void main()
{
  char s[100];
  printf("Enter string: ");
  gets(s);
  printf("Length: %d\n",len(s));
}

/*

Output:

Enter string: Hello World
Length: 11

*/
