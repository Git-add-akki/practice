// chapter -7 Arrays 

// basic structure
/*

#include <stdio.h>

int main()
{
int marks[4];

printf("enter the marks 1 ");
scanf("%d",&marks[0]);
printf("enter the marks 1 ");
scanf("%d",&marks[1]);
printf("enter the marks 1 ");
scanf("%d",&marks[2]);
printf("enter the marks 1 ");
scanf("%d",&marks[3]);

printf("%d %d %d %d ",
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

//other way of initialisation array
/*
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
*ptr++; 
*ptr++;
printf("the address of ptr %u \n",ptr);

int a=66;
char *r=&a;

printf("the address of ptr %u \n",r);
*r++; 
*r++;
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

printf("the address of ptr %u \n",r);
r=r-6; // (subtraction)
printf("the address of ptr %u \n",r);

}
*/

// subtraction from one pointer to another
// pointer 

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
//answer is 2 bcoz one inter = 4bytes.

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
 for(int i=0;i<5;i++)
{
printf("the number %d is %d \n"
,i+1,*(ptr+i));
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
//incomplete

#include<stdio.h>
int main()
{
int student=3;
int sub=4;
int arr[3][4];

for(int i=0;i<student;i++)
{
  for(int j=0;j<sub;j++)
{
  printf("enter student %d sub is %d \n",
 i+1,j+1);
 scanf("%d",arr[i][j]);
}
}
for(int i=0;i<student;i++)
{
  for(int j=0;j<sub;j++)
{
printf("student %d sub is %d marks is %d \n",(i+1),(j+1),arr[i][j]);
 
}
}

}