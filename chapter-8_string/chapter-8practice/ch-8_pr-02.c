#include<stdio.h>
#include<string.h>
int main()
{
  char st1[34];
  char st2[34];
  char c;
  int i=0;
  printf("enter thefirst string\n");
  scanf("%s",st1);
  printf("enter the 2nd string char by char\n");
  while (c!='\n')
  {
   fflush(stdin);
   scanf("%c",&c);
   st2[i]=c;
   i++;
  }
  st2[i-1]='\0'; // dnt know why
  
  printf("1st string %s\n",st1);
  printf("2nd string %s\n",st2);
  printf("strcmp of thesen two %d\n",strcmp(st1,st2));
}
