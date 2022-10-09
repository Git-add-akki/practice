// chapter 4
//while loop

#include<stdio.h>
int main()
{
int a=0;
printf("%d\n",a);
a++;
printf("%d\n",a);
a++;
return 0;
}

/*
#include<stdio.h>
int main()
{
int a;
printf("enter the number\n");
scanf("%d",&a);
if(a<20)
{
while(a<20)
{
printf("%d\n",a);
a++;
}
}
else 
printf("number is bigger than 20");
return 0;
}// if used only for testing
*/

// ques. if a is initially 0,then using while
// print 10 to 20.

/*
#include<stdio.h>
int main()
{
int a=0;
while(a<=20)
{
if(a>=10)
{
printf("%d\n",a);
}
a++;  // a++= a+1
}
return 0;
}
*/

// a++,++a

/*
#include<stdio.h>
int main ()
{
int a=5;
//printf("value of a is %d\n",a++);
//here it will print first then increment.
//printf("value of a is %d\n",a);

printf("value of a is %d\n",++a);
//here it will increment first then print.
printf("value of a is %d\n",a);
// same with (--a),(a--)
printf("value of a is %d\n",a+=10);
// (a+=10) means ,it increment by 10 now.
}*/

// do while loop
/*
#include<stdio.h>
int main ()
{
int a;
printf("enter num.");
scanf("%d",&a);
do{
printf("number is %d\n",a);
a++;
}while(a<10);
return 0;
}
*/

// ques. print first n natural numbers
/*
#include<stdio.h>
int main ()
{
int a,i=1;
printf("enter the number \n");
scanf("%d",&a);
do{
printf("%d\n",i);
i++;
}
while(i<=a);
return 0;
}
*/

// for loop 
/*
#include<stdio.h>
int main ()
{
for(int a=0;a<=10;a++)
{
printf("%d\n",a+1); // a+1 is just  choice 
}
return 0;
}
*/

//ques. print 1st n natural nos. using for loop
/*
#include<stdio.h>
int main()
{
int a,i;
printf("enter the number \n");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
printf("%d\n",i);
}
}    
*/

//example of decrementing for loop
/*
#include<stdio.h>
int main()
{
for(int i=5;i;i--)
// this program work until i=0 bcoz for 
// condition is true till it is non zero
{
printf("%d\n",i);
}
}
*/

// ques. print n natural nos. in reverse order
/*
#include<stdio.h>
int main()
{
int a,i;
printf("enter the number \n");
scanf("%d",&a);
for(i=a;i>0;i--)
{
printf("%d\n",i);
}
}
*/

// use of break 
/*
#include<stdio.h>
int main()
{
int a,i;
printf("enter the number \n");
scanf("%d",&a);
for(i=a;i>0;i--)
{
printf("%d\n",i);
if(i==6)
{
break;
}
}
return 0;
}
*/

// same
/*
#include<stdio.h>
int main()
{
int a=0;{}
do {
printf("the number is %d \n",a);
a++;
if(a==5)
{
break;
}
}
while (a<=10);
return 0;
}
*/

// use of continue
/*
#include<stdio.h>
int main()
{
int a=0,skip=5;

while(a<=10)
{
a++;
if(a!=skip)
{
continue;
}
else 
printf("number is %d\n",a);
}
return 0;
}
*/