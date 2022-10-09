
// chapter 3  if else for 97 divisibility test
/*
 #include <stdio.h> 
int main ()
{
int a,b;
printf("enter the no.\n");
scanf("%d",&a);
b=a%97;
if(b==0){
printf("number is divisible by 97\n");
}
else{
printf("number is not divisible by 97\n");
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
/*

#include <stdio.h>
int main()
{
int a,b;
printf("enter the marks");
scanf("%d",&a);
if (a>100)
{
       printf("enter value under 100\n");
}
else
{
switch (a/10)
{
case 10: //(u don't need to write printf again,if case 10's printf is similr to case9)
case 9:
       printf("A grade\n");
       break;
case 8:
       printf("b grade\n");
       break;
case 7:
       printf("c grade\n");
       break;
case 6:
       printf("d grade\n");
       break;
case 5:
       printf("e grade\n");
       break;
default:
printf("sorry\n");
}
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
if(a>100)
{
printf("enter under 100\n");
}
else if(a>=91 && a<=100)
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
// 97 divisibility test by using switch case

 #include <stdio.h> 
int main ()
{
int a,b;
printf("enter the no.\n");
scanf("%d",&a);
b=a%97;
switch(b)
{
 case 0:
 printf("number is divisible by 97\n");
 break;
 default:
 printf("number is not divisible by 97\n");
}
}