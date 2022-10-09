// chapter -7 Arrays 
// basic structure
/*
#include <stdio.h>
int main()
{
int marks[4];

printf("enter the marks 1 ");
scanf("%d",&marks[0]);
printf("enter the marks 2 ");
scanf("%d",&marks[1]);
printf("enter the marks 3 ");
scanf("%d",&marks[2]);
printf("enter the marks 4 ");
scanf("%d",&marks[3]);

printf("%d %d %d %d \n",
marks[0],marks[1],marks[2],marks[3]);
return 0; 
}
*/

// array input using loops
/*
#include<stdio.h>

int main()
{
int marks[4];

for (int i=0;i<5;i++)
{
printf("enter the marks %d \n",i+1);
scanf("%d",&marks[i]);
}

for(int i=0;i<5;i++)
{
printf("Marks of %d is %d \n",i+1,marks[i]);
}
return 0; 
}
*/
/*
//other way of initialisation array

#include<stdio.h>
int main ()
{
int cake[]={23,45,66};

printf("the value of a[0] %d\n",cake[0]);
printf("the value of a[1] %d\n",cake[1]);
printf("the value of a[2] %d\n",cake[2]);

float a[]={2.3,4.5,6.6};

printf("the value of a[0] %.2f\n",a[0]);
printf("the value of a[1] %.2f\n",a[1]);
printf("the value of a[2] %.2f\n",a[2]);

}
*/

// pointer arithmetic, pointer increment
/*
#include<stdio.h>
int main ()
{
int i=44;
int *ptr=&i;

printf("the address of ptr %u \n",ptr);
ptr++; 
ptr++;
printf("the address of ptr %u \n",ptr);

int a=66;
char *r=&a;

printf("the address of ptr %u \n",r);
r++; 
r++;
printf("the address of ptr %u \n",r);

}
*/
// addition nd subtraction of no. to pointer

/*
#include<stdio.h>
int main ()
{
int i=44;
int *ptr=&i;

printf("the address of ptr %u \n",ptr);
ptr=ptr+4; //(Addition)
printf("the address of ptr %u \n",ptr);

int a=66;
char *r=&a;

printf("the address of r %u \n",r);
r=r-6; // (subtraction)
printf("the address of r %u \n",r);

}
*/

// subtraction from one pointer to another pointer 

/*
#include<stdio.h>
int main ()
{
int i=44;
int j=66;
int k=77;
int *ptr=&i;
int *r=&j;
int *q=&k;

printf("the address of ptr %u \n",ptr);
printf("the address of r %u \n",r);
printf("the address of q %u \n",q);

r=ptr-q;
printf("the address of r %u \n",r);
//printf("the valueof r %d \n",r); // not wrking
// *r=*ptr-*q;
// printf("the address of r %d \n",*r);
//answer is 2 bcoz one inter = 4bytes.

//int s; (doubt not clr of this statement)
//s=ptr-r;
//printf("the address of s %u \n",s);

}
*/

// two pointers for same variable

/*
#include<stdio.h>
int main ()
{
int i=44;
int *ptr=&i;
int *r=&i;

printf("the address of ptr %u \n",&i);
printf("the address of ptr %u \n",&ptr);

printf("the address of r %u \n",&r);

printf("the address of ptr %u \n",ptr);

printf("the address of r %u \n",r);

}
*/

// array using pointers
/*

#include<stdio.h>
int main()
{

int marks[4];
int *ptr=&marks[0];
//   ptr=marks; //(it also works same as
// above line)


for(int i=0;i<5;i++)
{
 printf("enter the marks %d \n",i+1);
 scanf("%d",ptr);
 ptr++;

}
for(int i=0;i<5;i++)
{
 printf("the marks of stu. %d is %d\n",i+1,
 marks[i]);
}

}
*/

// just checking sth
/*
#include<stdio.h>
int main()
{

int marks[1]={2};
int *ptr=&marks[0];

printf("%d",*ptr);
}
*/

// passing array to function

/*
#include<stdio.h>
void arraypass(int *ptr,int n)
{
 for(int i=0;i<n;i++)
{
printf("the number %d is %d \n"
,i+1,*(ptr+i));
// here only ptr means it has the address
//of 1st element but, ptr+i means it has the
//address of ith element) (eg. ptr+2 means
//it has  address of 2nd element)

}
}
int main ()
{
 int arr[]={11,33,56,76,89,97,68};
 arraypass(arr,7);
}

*/

/*

#include<stdio.h>
void arraypass(int ptr[],int n)
{
 for(int i=0;i<5;i++)
{
printf("the number %d is %d \n"
,i+1,ptr[i]);
}
}
int main ()
{
 int arr[]={11,33,56,76,89,97,68};
 arraypass(arr,7);
}

*/

// multidimensional array/2d 

/*

#include<stdio.h>

int main()
{
int student=2;
int sub=3;
int arr[2][3];

for(int i=0;i<student;i++)
{
  for(int j=0;j<sub;j++)
{
  printf("enter student %d sub is %d \n",
 i+1,j+1);
 scanf("%d",&arr[i][j]);
}
}
for(int i=0;i<student;i++)
{
  for(int j=0;j<sub;j++)
{
printf("student %d sub is %d marks is %d \n"
,(i+1),(j+1),arr[i][j]);
 
}
}

}
*/

// create 2-d array,write a display fun.
// to display that array

//incomplete
/*
#include<stdio.h>
void fun(int p[n][x],int n,int x)
{
  for(int i=0;i<n;i++)
{
  for(int j=0;j<x;j++)
{
  printf("enter student %d sub is %d \n",
 i+1,j+1);
 scanf("%d",p[i][j]);
}
}
for(int i=0;i<n;i++)
{
  for(int j=0;j<x;j++)
{
printf("student %d sub is %d marks is %d \n"
,(i+1),(j+1),p[i][j]);
 
}
}
}

int main()
{
int student=3;
int sub=5;
int arr[3][5];

fun(arr,student,sub);
}
*/