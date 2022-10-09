// chapter2 , practice
// divisibility test by 97 
/*
#include <stdio.h>
int main ()
{

int a,b;   //("%" not working with float)
printf("enter the Value\n");
scanf("%d",&a);
b=a%97;
printf("%d\n",b);
return 0;
}
*/
// chapter 3  if else for 97 divisibility test
/* #include <stdio.h> 
int main ()
{
int a,b;
printf("enter the no.\n");
scanf("%d",&a);
b=a%97;
if(b==0){
printf("number is divisible by 97");
}
else{
printf("number is not divisible by 97");
}
return 0;
}
*/
// relational operators
/*
#include <stdio.h> 
int main ()
{
int a,b;
printf("enter the no. a\n");
scanf("%d",&a);
printf("enter b\n");
scanf("%d",&b);

if(b>=0){
printf("number is divisible by 97\n");
}
else{
printf("number is not divisible by 97\n");
}
if(a==50)
{
printf("go for it\n");
}
else{
printf("don't go");
}
return 0;
}
*/

// logical operators &&(and), ||(or), !(not)
/*
#include <stdio.h> 
int main ()
{
int a,b;
printf("enter the no.\n");
scanf("%d",&a);
printf("enter b\n");
scanf("%d",&b);
if(a>=18 && a<=79){
printf(" go drive");
}
else{
printf("don't drive");
}
return 0;
}
*/
// ||(or)
/*
#include <stdio.h> 
int main ()
{
int a,b;
printf("enter the no.\n");
scanf("%d",&a);
printf("enter b\n");
scanf("%d",&b);
if((a>=18 && a<=79) || b==15){
printf(" go drive");
}
else{
printf("don't drive");
}
return 0;
}
*/

// else if
/*
#include <stdio.h> 
int main ()
{
int a,b;
printf("enter the no.\n");
scanf("%d",&a);
printf("enter b\n");
scanf("%d",&b);
if(a>18 )
{
printf(" go drive");
}
else if(a<16){
printf("don't drive");
}
else {
printf("nothing");
}
return 0;
}
*/

// conditional operators / ternary operators
/*
#include <stdio.h> 
int main ()
{
int a,b;
printf("enter the no.\n");
scanf("%d",&a);
(a<50) ? printf("go for it"): printf("don't go");
return 0;
}
*/

//// switch case
/*
#include <stdio.h> 
int main ()
{
int a;
printf("give rating from 1 to 5\n");
scanf("%d",&a);
switch(a)
{
case 1:
       printf("Rating is 1\n"); // without break  it will execute all other case.
       break;
case 2:
       printf("Rating is 2\n");
       break;
case 3:
       printf("Rating is 3\n");
       break;
case 4:
       printf("Rating is 4\n");
       break;    
case 5:
       printf("Rating is 5\n");
       break;   
    default:
    printf("sorry");
}
return 0;
} 
*/

// find the grade of students
//  not working with switch
/*

#include <stdio.h>
int main()
{
int a,b;
printf("enter the marks");
scanf("%d",&a);
switch (a)
{
case 1:
       printf("A grade\n",a<=100);
case 1:
       printf("b grade\n",a>=80);
case 1:
       printf("c grade\n",a>=70);
case 1:
       printf("d grade\n",a>=60);
case 1:
       printf("e grade\n",a>=50);
}
}
*/

//  find the grade of students using if else
/*
#include <stdio.h>
int main()
{
int a,b;
printf("enter marks\n");
scanf("%d",&a);
if(a>=91 && a<=100)
{
printf("A grade\n");
}
else if(a>=81 && a<=90)
 printf("B grade");

else if(a>=71 && a<=80)
printf("C grade");

else 
printf(" u r failed");
}
*/