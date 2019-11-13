//Program 59: Find the no. of vowels of a string
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
int isVowel(char ch)
{
  if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    return 1;
  else
    return 0;
}
int vowelCount(char str[],int l)
{
  int i=0;
  int count=0;
  for(i=0;i<l;i++)
  {
    if(isVowel(str[i]))
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
  int count=vowelCount(s,l);
  printf("Vowet count: %d\n",count);
}

/*

Output:

Enter string: The quick brown fox jumped over the lazy dog
Vowet count: 12

*/
