//chapter 8 string part 2
// standard library function
/*
#include<stdio.h>
#include<string.h>
//*** strlen (tells string length excluding
// null character

int main()
{
    // char *st="akki";
    char st[25];
    printf("enter the string\n");
    scanf("%s",st);
    //gets(st);    
    int a=strlen(st);
    
    printf("length of string %d\n",a);
    return 0;
}
*/

// strcpy to copy from one to another 
/*
#include<stdio.h>
#include<string.h>
int main ()
{
  char *st="akki";
  char st2[30];
  strcpy(st2,st);
  printf("now strin in st2 is %s \n",st2);
}
*/
// strcat.to concatenate two strings
// without space

// don't know what error
/*
#include<stdio.h>
#include<string.h>

int main ()
{
  // char *st="akki "; // this is not working (u can copy from *st tost1[] bt canot from cr[] to *cr1)
  char st1[20]="akki ";
  char st2[30]="hello";
  strcat (st1,st2); 
  printf("now strin in st is %s \n",st1);
}
*/

// strcmp to compare,it compares ascii value
/*
#include<stdio.h>
#include<string.h>

int main ()
{
  char *st="akki";
  char st2[50]="hello";
  int val= strcmp(st,st2); 
  printf("now strin val is %d \n",val);
}
*/