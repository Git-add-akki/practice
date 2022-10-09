/// practice chapter 3

/* prog. for student pass or faill
passing marks 33% (individual subject)
overall 40%
*/
/*

#include <stdio.h>
int main()
{
int physics, chemistry,maths;
float total;
printf("enter marks of physics\n");
scanf("%d",& physics);

printf("enter marks of chemistry\n");
scanf("%d",& chemistry);

printf("enter marks of maths\n");
scanf("%d",& maths);
total= (physics+chemistry+maths)/3;
if((total<40)||physics<33||chemistry<33||maths<33)
{
printf("not passed\n%f",total);
}

else 
printf(" passed\n%f",total);
return 0;
}
*/

// tax paying program
/*
#include <stdio.h>
int main ()
{
int pay,tax;
printf("enter your pay\n");
scanf("%d",&pay);
if (pay>=250000 && pay<=500000)
{
tax=(pay*5)/100;
printf("your tax is %d",tax);
}
else if (pay>=500001 && pay<=100000)
{
tax=(pay*10)/100;
printf("your tax is %d",tax);
}

else if (pay>=1000001)
{
tax=(pay*20)/100;
printf("your tax is %d",tax);
}
else 
printf("no tax for you");
return 0;
}
*/
// leap year(by myself)
/*
#include<stdio.h>
int main()
{
  int year,a,b,c;
  printf("enter yr.\n");
  scanf("%d",&year);
  a=year%100;
  c=year%4;
  if(a==0)
  {
    b=year/400;
    if(b==0)
    {
        printf("it is a leap year\n");
    }
    else{printf("this is not a leap yr\n");}
  }
  else if(c==0)
  {
    printf("this is a leap yr\n");
  }
  else
  {
   printf("this is not a leap yr\n");
  }
}
*/
// leap year (took help)
/*
#include<stdio.h>
int main()
{
int year,a,b,c;
printf("enter the year\n");
scanf("%d",&year);

if(year%400==0)
{
printf("%d is a leap year",year);
}
else if(year%100==0)
{
printf("%d is not a leap year",year);
}
else if(year%4==0)
{
printf("%d is a leap year",year);
}
else 
printf("%d is not a leap year",year);
} 

*/  

//greatest from four nos.
/*

#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the number\n");

scanf("%d",&a);
printf("number1 is %d \n",a);

scanf("%d",&b);
printf("number2 is %d \n",b);

scanf("%d",&c);
printf("number3 is %d \n",c);

scanf("%d",&d);
printf("number4 is %d \n",d);

if(a>b)
{
if (a>c)
{
if (a>d)
{
printf("a is greatest");}
else{
printf("d is greatest");}
}
else if(c>d)
{
  printf("c is  greatest\n");
}
else{printf("d is greatest");}
}
else if(b>c)
{
  if(b>d)
  {
    printf("b is greatest\n");
  }
  else{printf("d is grestest\n");}
}
else if(c>d)
{
  printf("c is greatest\n");
}
else{printf("d is greates\n");}

}

*/

// check lowercase or not
/*
#include<stdio.h>
int main()
{
char a;
printf("enter the character\n");
scanf("%c",&a);
if (a<=122 && a>=97)
printf("alpha is lower case");
else
printf("alpha is not lowercase");
return 0;
}
*/
/*
#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the number\n");

scanf("%d",&a);
printf("number1 is %d \n",a);

scanf("%d",&b);
printf("number2 is %d \n",b);

scanf("%d",&c);
printf("number3 is %d \n",c);

scanf("%d",&d);
printf("number4 is %d \n",d);

if(a>b)
{
if (a>c)
{
if (a>d)
{
printf("a is greatest");}
else{
printf("d is greatest");}
}
else if(c>d)
{
  printf("c is  greatest\n");
}
else{printf("d is greatest");}
}
else if(b>c)
{
  if(b>d)
  {
    printf("b is greatest\n");
  }
  else{printf("d is grestest\n");}
}
else if(c>d)
{
  printf("c is greatest\n");
}
else{printf("d is greates\n");}

}
*/