// ****chapter 4 practice set

// **-->multiplication table
/*
#include <stdio.h>

int main()
{
int a,b=1,c;
printf("enter the number\n");
scanf("%d",&a);
do{
c=a*b;
printf("%d\n",c);
b++;
}
while(b<=10);
    
    return 0; 
}
*/


// **-->multiplication table reverse order
/*

#include <stdio.h>

int main()
{
int a,b=10,c;
printf("enter the number\n");
scanf("%d",&a);
do{
c=a*b;
printf("%d\n",c);
b--;
}
while(b>0);
    
    return 0; 
}

*/

// **** sum of 1st n natural numbers
/*

#include <stdio.h>

int main()
{
int a,b,c;
printf("enter the number\n");
scanf("%d",&a);

c=(a*(a+1))/2;
printf("%d\n",c);

    return 0; 
}
*/

// **** sum of 1st 10 natural numbers 
// using while.
/*

#include <stdio.h>

int main()
{
int a=10,c;
while(a<=10)
{
c=(a*(a+1))/2;
printf("%d\n",c);
break;
}
    return 0; 
}
*/

// **** sum of 1st 10 natural numbers 
// using while. better way.

/*
#include <stdio.h>

int main()
{
int a=0,sum=0,n=10;
while(a<=n)
{
 sum+=a;
a++;
printf("%d\n",sum);

}
printf("\n");
printf("sum of 1st 10 natural nos %d\n",sum);

    return 0; 
}
*/
// **** sum of 1st 10 natural numbers 
// using do while

/*
#include <stdio.h>

int main()
{
int a=0,sum=0,n=10;
do
{
 sum+=a;
a++;
printf("%d\n",sum);

}
while(a<=n);
printf("\n");
printf("sum of 1st 10 natural nos %d\n",sum);

    return 0; 
}

*/
// **** sum of 1st 10 natural numbers 
// using for loop
/*
#include <stdio.h>

int main()
{
int a,sum=0,n=9;
for(a=0;a<=n;a++) 
{
 sum+=a;
printf("%d\n",sum);
}

printf("\n");
printf("sum of 1st 10 natural nos %d\n",sum);

    return 0; 
}
*/

  // **-->sum of multiplication table
/*
#include <stdio.h>

int main()
{
int a,b=1,c,sum=0;
printf("enter the number\n");
scanf("%d",&a);
do{
c=a*b;
printf("%d\n",c);
sum+=c;
b++;

}
while(b<=10);

printf("%d",sum);
    
    return 0; 
}

 */     
    
// factorial 
/*
#include<stdio.h>
int main ()
{
int factorial=1;
for(int i=4;i;i--)
{
factorial*=i;

}
printf("factorial value is%d\n", factorial);
return 0;

}

*/

// factorial using while
/*
#include<stdio.h>
int main ()
{
int factorial=1,i=5;
while(i>1)
{
factorial*=i;
i--;

}
printf("%d", factorial);
return 0;

}
*/
// prime no. checking left. also with loops

    