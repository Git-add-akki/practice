// array practice set
// question 1 pointers comparing
/*
#include<stdio.h>

int main()
{
    int arr[10];
    int *ptr;
    ptr =arr;
    printf("adress of ptr+1 %u\n",(ptr+1));
    printf("adress of arr[1] %u\n",&arr[1]);
    ptr=ptr+1;
    if((ptr)==&arr[1])
    {
    printf("address is same\n");
    }
    else
    {
    printf("not same");
    }
    return 0;
}

*/
//write a prog of array of 10 int to store
//multiplication table of 5
/*
#include<stdio.h>
int main()
{
int x[10];

for(int i=0;i<10;i++)
{
 x[10]=5*(i+1);
 printf("5X%d is %d \n",i+1,x[10]);
// this is wrong bcoz in this all these 
// values are printing inside x[10]


}
}
*/

// OR(better )
/*


#include<stdio.h>
int main()
{
int x[10];
for(int i=0;i<10;i++)
{
 x[i]=5*(i+1);
}
for(int i=0;i<10;i++)
{
 printf("5X%d is %d \n",i+1,x[i]);
 
}

}
*/

// same as earlier just take i/p by user
/*

#include<stdio.h>
int main()
{
int x[10];
int n;
printf("enter the no.\n");
scanf("%d",&n);
for(int i=0;i<10;i++)
{
 x[i]=n*(i+1);
}
for(int i=0;i<10;i++)
{
 printf("5X%d is %d \n",i+1,x[i]);
 
    }
}

*/

//containing fun which reversed the array
/*
#include<stdio.h>
int reverse (int *ptr,int n)
{
  for(int i=0;i<(n/2);i++)
{
  int temp=ptr[i];
      ptr[i]=ptr[n-i-1];
      ptr[n-i-1]=temp;
}
}
int main()

{
 int arr[]={1,2,3,4,5,6,7};
 reverse (arr,7);

for(int i=0;i<7;i++) // i<n is not working bcoz n is statc variable which works in that function only
{
 printf("%d \n",arr[i]);
}
return 0;
}
*/

// create an array of size 3X10, containing
// multiplication of 2,7,9
/*
//without function
#include<stdio.h>
int main()
{
int mult[3][10];
for(int i=0;i<10;i++)
{
 mult[0][i]=2*(i+1);
}
for(int i=0;i<10;i++)
{
 printf("2X%d is %d \n",i+1,mult[0][i]);
 
}

for(int i=0;i<10;i++)
{
 mult[1][i]=7*(i+1);
}
for(int i=0;i<10;i++)
{
 printf("7X%d is %d \n",i+1,mult[1][i]);
 
}

}
*/
/*
#include<stdio.h>
void table(int *mult,int num,int n)
{
 printf("table of %d \n",num);
 for(int i=0;i<n;i++)
{
{}   mult[i]=num*(i+1);
}

 for(int i=0;i<n;i++)
{
   printf("%d X %d is %d \n",num,i+1,mult[i]);
}
printf("**********\n \n");
}
int main()
{
int mult[3][10];

table(mult[0],2,10);
table(mult[1],7,10);
table(mult[2],9,10);

}

*/

// same question for i/p user instead of 
// 2,7,9
/*

#include<stdio.h>
void table(int *mult,int n)
{
int num;
printf(" enter the no.\n");
scanf("%d",&num);
 printf("table of %d \n",num);
 for(int i=0;i<n;i++)
{
   mult[i]=num*(i+1);
}

 for(int i=0;i<n;i++)
{
   printf("%d X %d is %d \n",num,i+1,mult[i]);
}
printf("**********\n \n");
}
int main()
{

int mult[3][10];

table(mult[0],10);
table(mult[1],10);
table(mult[2],10);

}

*/
// now instead of array [3][10] make program
// for araay[m][n]

// incomplete
/*
#include<stdio.h>
void table(int *mult,int n)
{
int num;
printf(" enter the no.\n");
scanf("%d",&num);
 printf("table of %d \n",num);
 for(int i=0;i<n;i++)
{
   mult[i]=num*(i+1);
}

 for(int i=0;i<n;i++)
{
   printf("%d X %d is %d \n",num,i+1,mult[i]);
}
printf("**********\n \n");
}
int main()
{
int mult[m][n];

table(mult[0],10);
table(mult[1],10);
table(mult[2],10);

}
*/

// 3-d array nd print its element address
// in increasing order
/*
#include<stdio.h>
int main()
{
int arr[2][3][4];
 for(int i=0;i<2;i++)
{
  for(int j=0;j<2;j++)
{
  for(int k=0;k<2;k++)
{
printf("address of arr[%d][%d][%d] is %u\n"
 ,i,j,k,&arr[i][j][k]);
}
}
}
}
*/

/*
// for chcking sth
#include<stdio.h>
int main()
{
   int m,n;
 printf(" enter the no.\n");
 scanf("%d",&m);
 printf("enter te 2nd no.\n");  
 scanf("%d",&n);
  int arr[m][n];
  int a,b;
  for(a=0;a<m;a++)
  {
   for(b=0;b<n;b++)
   {
      printf("enter the nos\n");
      scanf("%d",&arr[a][b]);
   }
  }
    for(a=0;a<m;a++)
  {
   for(b=0;b<n;b++)
   {
      printf("nus of array are %d\n",arr[a][b]);
   }
  }
}
*/