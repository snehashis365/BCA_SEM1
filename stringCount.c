//Program 60: Find the no. of words and sentences of a string
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
int countWords(char str[],int l)
{
  int i=0,count=0;
  for(i=0;i<l;i++)
  {
    if(str[i]==' '||str[i]=='.'||str[i]==','||str[i]=='!'||str[i]=='?')
      count++;
  }
  return count;
}
int countLine(char str[],int l)
{
  int i;int count=0;
  for(i=0;i<l;i++)
  {
  if(str[i]=='.'||str[i]=='!'||str[i]=='?')
    count++;
  }
  return count;
}
void main()
{
  char s[100];
  printf("Enter string: ");
  gets(s);
  int l=len(s);
  int Wcount=countWords(s,l);
  printf("Word count: %d\n",Wcount);
  int Lcount=countLine(s,l);
  printf("Line count: %d\n",Lcount);
}

/*

Output:

Enter string: Hello World!This is a test sentence,to count words and lines.
Word count: 12
Line count: 2

*/
