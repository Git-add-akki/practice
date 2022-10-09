// structur practice
/*
#include<stdio.h>
struct vector
{
    int x;
    int y;
};
int main()
{
 struct vector v1,v2;
  v1.x =34;
 v1.y =85;
 printf("x is %d and y is %d\n",v1.x,v1.y);

 v2.x =654;
 v2.y =8556;
 printf("x is %d and y is %d\n",v2.x,v2.y);

return 0;
}
*/
// practice 2 sumvector
/*
#include<stdio.h>
struct vector
{
    int x;
    int y;
};
struct vector sumvector(struct vector v1,struct vector v2)
{
    struct vector result;
    result.x =v1.x + v2.x;
    result.y =v1.y + v2.y;
    return result;
}
int main()
{
 struct vector v1,v2,sum;
  v1.x =34;
 v1.y =85;
 printf("x is %d and y is %d\n",v1.x,v1.y);

 v2.x =65;
 v2.y =85;
 printf("x is %d and y is %d\n",v2.x,v2.y);

 sum =sumvector(v1,v2);
 printf("for x is %d and for y is %d\n",sum.x,sum.y);
return 0;
}
*/

// practice 6
/*
#include<stdio.h>
typedef struct complex
{
    int real;
    int complex;
}comp;

void show(comp c)
{
     
    printf("the real no is%d\n",c.real);
    printf("the complex no is%d\n",c.complex);
}
int main()
{
 comp num[5]; 
 for (int i=0;i<5;i++)
 {
    printf("enter the real number %d\n",i+1);
    scanf("%d",&num[i].real);
    printf("enter the complex number %d\n",i+1);
    scanf("%d",&num[i].complex);

 }
 for (int i=0;i<5;i++)
 {
    show(num[i]);
 }
return 0;
}
*/

// practice 8
