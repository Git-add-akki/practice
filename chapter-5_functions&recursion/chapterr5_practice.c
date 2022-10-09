/* **** avg of 3 number using fun.
(hint use typecasting)(also .2f% for 2digits
after decimal)
*/


/*
**(convert celcius to farah)
*/

//**** prog to calculate nth element of
 //fibbonacci series
/*
#include <stdio.h>
int fib(int x);
int main()
{
int n=3;
printf("%d\n",fib(n));
return 0; 
}

int fib(int x)
{
  if (x<=1){
  return x;}
  else 
  {
    return fib(x-1) + fib(x-2);
  }
}
*/

// *****
/*
#include<stdio.h>

int main ()
{
int a=5;
printf("%d %d %d \n",a,a++,++a);
//printf("%d & %d & %d\n",a,a++,++a);
//In  compiler,ut takes the argument
// ryt to left
return 0;
}
*/
/* ** to print *
              * * * 
               * * * * *
*/

#include<stdio.h>
void printPattern(int n);
int main(){
    int n =2;
    printPattern(n);
    return 0;
}

void printPattern(int n){
    if (n==1){
        printf("*\n");
        return;
    }
    printPattern(n-1);
    for(int i=0;i<(2*n-1);i++){
        printf("*");
    }
    // printf("\n");
}


       