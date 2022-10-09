//prog1-- basic
/*
#include <stdio.h>

int main()
{
int a= 12;
int b= 78;
float c= 8.5;
printf("sum of a and b %d \n",a+b);
printf("sum of a and c %f \n",a+c);
return 0; //0 means success for operating sys.
}
/*
(%d or %f or.. means format specifier
&a --> it means address of a)
*/

  // prog2-- user input

#include <stdio.h>  
int main()
{
int a,b,c;
printf("enter a\n");
scanf("%d",&a);
printf("enter b\n");
scanf("%d",&b);
printf("sum is.%d\n",a+b);
}

