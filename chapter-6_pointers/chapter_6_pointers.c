// ***---> pointers 

#include <stdio.h>

int main()
{
 int a=7;
 int *j=&a;// this is a pointer nd it will store the address of a.
 int **k=&j;

printf("1 the value of a is %d\n",a);
printf("2 the value of a is %d\n",*j);
printf("3 the address of a is %u\n",&a);
printf("4 the address of j is %u\n",&j);
printf("5 the value at addr of j is %d\n",*(&j));
printf("6 the value at addr of a is %d\n",*(&a));
printf("7 the value of *j %d\n",**k);
return 0; 
}


//*** call by Value
 /*

#include<stdio.h>

int sum( int a,int b);
int main()
{
int x=4,y=6;

printf("sum is %d",sum(x,y));

}

int sum(int a,int b)
{
 int c=a+b;
 a=90;// this change doesn't gonna affect 
 b=80;// the x nd y value in program
 return c;
}
*/

//***** call by reference
// swapping program
/*
#include<stdio.h>
void wrong_swap(int a,int b);
void swap(int *a,int *b);

int main()
{
int x=5,y=9;
printf("x=%d and y=%d before swap\n",x,y);
wrong_swap(&x,&y);
printf("x=%d and y=%d after swap\n",x,y);

swap(&x,&y);
printf("x=%d and y=%d after swap\n",x,y);
}

void wrong_swap(int a,int b)
{
int temp=a;
    a=b;
    b=temp;
}
void swap(int *a,int *b)
{
int temp=*a;
    *a=*b;
    *b=temp;

}

*/