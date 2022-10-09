///*** chapter 5,function nd recursion

// function
/*
#include <stdio.h>
void display (); // fun. prototype

int main()
{
int a;
printf("intializing display\n");

display (); // fun. call

printf("end of diplay fun.\n");

return 0; 
}

void display () // fun. definition
{
printf("this is display\n");
}
*/


// **function inside a fun.
// in this every fun called directly or indirectly in main

/*
#include <stdio.h>
void sehwag ();
void dravid ();
void balaji ();


int main()
{
sehwag ();
return 0; 
}

void sehwag ()
{
printf("best opening batsman\n");
 dravid ();
}

void dravid ()
{
printf("best batsman\n");
 balaji ();
}

void balaji ()
{
printf("best bowler\n");
}
*/

//** 

// sum is a function which takes a nd b as 
// an input nd return int value as an output
 
/*
#include<stdio.h>

int sum(int a, int b); //fun. declaration prtotype
// in this (int sum) us return type &
// int (a nd int b) is parameter
int main ()
{
int c,a,b;
printf("enter 2 values\n");
scanf("%d",&a);
scanf("%d",&b);
c=sum(a,b); // here this a nd b are called 
// arguments.
printf("%d\n",c);
return 0;
}

int sum(int a, int b)
{
int c;//it doesn't matter if we use same 
// variables in this function as main fun.
c=a+b;
return c;
}
*/

//*** use library fun to calc area
/*
#include<stdio.h>
int area(int a);

int main()
{
 int z,a;
printf("enter the no.\n");
scanf("%d",&a);
z=area(a);
printf("area is %d",z);

}
int area(int a)
{
int c=a*a;
return c;

}
*/

// same by using predifined library
/*
#include<stdio.h>
#include<math.h>

int main()
{
int side;
printf("enter the value\n");
scanf("%d",&side);
printf("the value is %f",pow(side,2));
//printf("the value is %d",(int)pow(side,2));
// this is typecasting

//we used %f bcoz pow returns "double"value
return 0;
}
*/