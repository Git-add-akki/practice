//chapter-11 malloc
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
//   size of operator in c
// printf("the size of int on my pc is %d\n",sizeof(int));
// printf("the size of float on my pc is %d\n",sizeof(float));
// printf("the size of char on my pc is %d\n",sizeof(char));
ptr = (int *) malloc(6 * sizeof(int)); //int*(typecast bcoz this malloc returns void pointer bt 
// we need in integer type)
for(int i=0;i<6;i++)
{
    printf("enter the value of %d  element",i);
    scanf("%d",&ptr[i]);
}
for (int i=0;i<6;i++)
{
    printf("the value of %d element is %d",i,ptr[i]);
}
return 0;
}
*/
// quick quiz same as earlier for floats

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
  float *ptr;

ptr = (float *) malloc(6 * sizeof(int));
for(int i=0;i<6;i++)
{
    printf("enter the value of %d element",i+1);
    scanf("%f",&ptr[i]);
}
for (int i=0;i<6;i++)
{
    printf("the value of %d element is %f\n",i,ptr[i]);
}
return 0;
}
*/

// calloc
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
ptr = (int *) calloc(6,sizeof(int));  //calloc initalise all the memory blocks by default 0;

// for(int i=0;i<6;i++)
// {
//     printf("enter the value of %d element",i+1);
//     scanf("%d",&ptr[i]);
// }
for (int i=0;i<6;i++)
{
    printf("the value of %d element is %d\n",i+1,ptr[i]);
}
return 0;
}
*/
// quick quiz for user enter the no. of dynamic integer
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
  int n;
  printf("how many integer do u want to copy\n");
  scanf("%d",&n);

ptr = (int *) calloc(n,sizeof(int));  

for(int i=0;i<n;i++)
{
    printf("enter the value of %d element",i+1);
    scanf("%d",&ptr[i]);
}
for (int i=0;i<n;i++)
{
    printf("the value of %d element is %d\n",i+1,ptr[i]);
}
return 0;
}
*/
// free()function to deallocate dynamic memory

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr,*ptr2;
ptr = (int *) malloc(6 * sizeof(int)); 
for(int i=0;i<10;i++)
{
    ptr2 = (int *) malloc(3 * sizeof(int));
    printf("enter the value of %d element\n",i);
    scanf("%d",&ptr[i]);
    free(ptr2);
}
for (int i=0;i<6;i++)
{
    printf("the value of %d element is %d",i,ptr[i]);
}
return 0;
}

// realloc
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
ptr = (int *) malloc(6 * sizeof(int)); 
for(int i=0;i<6;i++)
{
    
    printf("enter the value of %d element\n",i);
    scanf("%d",&ptr[i]);
    
}
for (int i=0;i<6;i++)
{
    printf("the value of %d element is %d",i,ptr[i]);
}
ptr =realloc(ptr,10*sizeof(int)); 
for(int i=0;i<10;i++)
{
 
    printf("enter the value of %d element\n",i);
    scanf("%d",&ptr[i]);
    
}
for (int i=0;i<10;i++)
{
    printf("the value of %d element is %d\n",i,ptr[i]);
}
return 0;
}
*/