//chapter 9 structures

/*
#include<stdio.h>
#include<string.h>
struct  employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
struct employee e1;
e1.code=25;
e1.salary=5464.454;
strcpy(e1.name,"akki");
printf("%d\n %.3f\n %s\n",e1.code,e1.salary,e1.name);
return 0;
}
*/

//quiz question
//prog to store details of 3 employye,user input

/*
#include<stdio.h>
#include<string.h>
struct  employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee e1,e2,e3;
   printf("enter the code of e1\n");
   scanf("%d",&e1.code);
   printf("enter the salary of e1\n");
   scanf("%f",&e1.salary);
   printf("enter the name of e1\n");
   scanf("%s",&e1.name);
   
   printf("enter the code of e2\n");
   scanf("%d",&e2.code);
   printf("enter the salary of e2\n");
   scanf("%f",&e2.salary);
   printf("enter the name of e2\n");
   scanf("%s",&e2.name);

   printf("enter the code of e3\n");
   scanf("%d",&e3.code);
   printf("enter the salary of e3\n");
   scanf("%f",&e3.salary);
   printf("enter the name of e3\n");
   scanf("%s",&e3.name);
}
*/
/*
#include<stdio.h>
#include<string.h>
struct  employee
{
    int code;
    float salary;
    char name[30];
};
int main()
{
    struct employee fb[100];
    fb[0].code=112; 
    fb[0].salary=112; 
    strcpy(fb[0].name,"akki");
   
    fb[1].code=12; 
    fb[1].salary=12; 
    strcpy(fb[1].name,"akkki");

    fb[3].code=112; 
    fb[3].salary=112; 
    strcpy(fb[3].name,"akki");
   }
*/
//initialising structures
/*
#include<stdio.h>
#include<string.h>
struct  employee
{
    int code;
    float salary;
    char name[30];
};
int main()
{
    struct employee e1={100,552.5,"akki"};
    printf("code %d\n",e1.code);
    printf("salary %f\n",e1.salary);
    printf("name %s\n",strcpy(e1.name,"akki"));
}
*/
/*
#include<stdio.h>
#include<string.h>
struct  employee
{
    int code;
    float salary;
    char name[30];
};
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;

    //(*ptr).code = 101; //or you can also write: ptr->code = 101;
    ptr->code = 101;
    printf("%d\n", e1.code); 
    printf("%d\n", *ptr); 

    return 0;
}
*/

//function with structures
/*
#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp){
    printf("The Code of employee is: %d\n", emp.code);
    printf("The Salary of employee is: %f\n", emp.salary);
    printf("The Name of employee is: %s\n", emp.name);
    emp.code = 34;// it won't change coz it call by value 
}
int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    //(*ptr).code = 101; //or you can also write: ptr->code = 101;
    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "Harry");

    show(e1); 
    printf("The Code of employee is: %d\n", e1.code);

    return 0;
}
*/

// typedef
/*
#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[20];
}roo; //now i can replace every 'struct employee' with 'roo'.

void show(roo emp){
    printf("The Code of employee is: %d\n", emp.code);
    printf("The Salary of employee is: %f\n", emp.salary);
    printf("The Name of employee is: %s\n", emp.name);
     
}
int main(){
    // Declaring e1 and ptr
    roo  e1;
    roo *ptr;

    // pointing ptr to e1
    ptr = &e1;

    // Set the member values for e1
    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "Harry");

    show(e1); 
    printf("The Code of employee is: %d\n", e1.code);

    return 0;
}
*/