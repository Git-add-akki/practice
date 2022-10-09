//practice set of pointers
/*
#include <stdio.h>

int main()
{
 int a=5;
int *b=&a;
printf("the address of variable %u\n",&a);
printf("the value of a %u\n",*b);
printf("value at the address of a %u\n",*(&a));
return 0; 
}
*/

/* having a variable i, print the address of
i. Then pass this variable to a function ,
and again print the address,does both adress 
same?
*/
/*

#include<stdio.h>
void address(int a)
{
printf("the address of a is %u\n",&a);
}
int main ()
{
int i=4;
printf("the address of i %u\n ",&i);
address(i);
printf("The address of variable i is %u\n", &i);
// here address will be different,bcoz fun 
// is copying the value only not address.
}
*/
// change the value of a variable to ten times using call by value
/*
#include<stdio.h>
int ten(int a)
{
   int temp;
   temp=10*(a);
   return temp;
}
int main()
{
  int n,c;
  //int *a=&n;
  printf("enter the number\n");
  scanf("%d",&n);
  c=ten(n);
  printf("ten times no. is %d\n",c);
}
*/
// change the value of a variable to ten times using call by refrence
/*
#include<stdio.h>
int ten(int *a)
{
   int temp;
   temp=10*(*a);
   return temp;
}
int main()
{
  int n,c;
  //int *a=&n;
  printf("enter the number\n");
  scanf("%d",&n);
  c=ten(&n);
  printf("ten times no. is %d\n",c);
}
*/
/*
//same as earlier one

#include<stdio.h>
int multi(int a)
{
int b;
    b=10*(a);
 return b;
}
int main()
{
int i=5;
int *j=&i;
multi(*j);
printf("%d\n", multi (*j));
} 
*/

//calculate sum nd avg of two numbers use pointers & print avg & sum in main()

#include<stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg){
    *sum = a +b;
    *avg = (float)(*sum)/2;
}

int main(){
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;
    sumAndAvg(i, j, &sum, &avg);
    printf("The value of sum is %d \n", sum);
    printf("The value of avg is %f \n", avg);
    
    return 0;
}
