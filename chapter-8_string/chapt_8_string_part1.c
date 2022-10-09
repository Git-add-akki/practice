// chapter 8 string part 1

// basic syntax
/*
#include<stdio.h>

int main()
{
char a[]="Akki";
// char a[]={'a','k','k','i'}; 
 for (int i=0;i<4;i++)
{
    printf("%c",a[i]);
 }
 printf("\n");
 printf("%s\n",a);
       return 0;
}

*/
// another way 
/*
#include<stdio.h>

int main()
{
 char a[]="Akki";
 char *ptr=a;
  while(*ptr!='\0')
{
 printf("%c",*ptr);
ptr++;
}
printf("\n");
       return 0;
}
*/


// more convenient
/*
#include<stdio.h>

int main()
{
 char a[]="Akki";   //both correct
 char *ptr ="coool"; // both correct

printf("%s\n",a);
printf("%s\n",ptr);
 
       return 0;
}
*/

// use of scanf
/*

#include<stdio.h>
int main ()
{
 char a[5];
 printf("enter the name\n");
 scanf("%s",a); //or scanf("%s",&a[0]);
 
printf("%s",a);
}
*/

// use of gets() ,it is used to give space 
// in string
/*
#include<stdio.h>
int main ()
{
 char a[20];
 printf("enter the name\n");
 gets(a);
 
printf("%s",a);
}
*/
 // use of puts: it placed the cursor in 
// nxt line
/*
#include<stdio.h>
int main ()
{
 char a[5];
 printf("enter the name ");
 gets(a);
 puts(a);
 
printf("%s",a);
}
*/