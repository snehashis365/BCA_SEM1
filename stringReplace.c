//Program 61: Replace a word in a string
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
void substr(char *str,int a,int b,char *sub)
{
	int i,index=0;
	for(i=a;i<b;i++)
	{
		sub[index++]=str[i];
	}
	sub[index]=NULL;
}
void replace(char str[],char target[],char word[])
{
  int i,a=0,l=strlen(str);
  char temp[20],new[100]="",reset[20]="";
  for(i=0;i<=l;i++)
  {
    if(str[i]==' ' || str[i]==NULL)
    {
			substr(str,a,i,temp);
      if(isEqual(temp,target))
      {
        strcat(new,word);
      }
      else
      {
        strcat(new,temp);
      }
			strcat(new," ");
      a=i+1;
      strcpy(temp,reset);//resets the temp to empty string
    }
  }
	printf("Result string:\n");
  puts(new);
}

void main()
{
  char s[100],t[20],r[20];
  printf("Enter string: ");
  gets(s);
  printf("Enter target word: ");
  gets(t);
  printf("Enter word to replace with: ");
  gets(r);
  replace(s,t,r);
}

/*

Output:

Enter string: Hello World this is a new WORLD
Enter target word: world
Enter word to replace with: User
Result string:
Hello User this is a new User 

*/
