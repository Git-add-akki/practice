//  chapter-10 file I/O prsctice
/*
#include<stdio.h>

int main(){
    FILE *ptr;
    int a,b,c;
    ptr = fopen("pr01.txt", "r");
    fscanf(ptr, "%d %d %d", &a,&b,&c);

    fclose(ptr);
    printf("The value of a,b,c, is %d %d %d\n",a,b,c );
    return 0;
}
*/
//practice 2- generate multiplicatin table in text file
/*
#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    printf("enter the number for table\n");
    scanf("%d",&num);
    ptr = fopen("table.txt", "w");
    for (int i=0;i<10;i++)
    {
    fprintf(ptr, "%dX%d = %d\n", num,i+1,num*(i+1));
    }
    fclose(ptr);

    return 0;
}

*/
// practice 3 read text char by char and write it to another file twice
/*
#include<stdio.h>

int main(){
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("a.txt", "r");
    ptr2 = fopen("b.txt", "w");
    
    char c =fgetc(ptr1);
    while(c!=EOF)
    {

    fputc(c,ptr2);
    fputc(c,ptr2);
    c =fgetc(ptr1);

    }
    fprintf(ptr2,"\n");
   
    fclose(ptr1);
    fclose(ptr2);

    return 0;
} 
*/
// same as earlier one bt hwere repeat the whole text instead of character
//incomplete
/*
#include<stdio.h>

int main(){
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("a.txt", "r");
    ptr2 = fopen("b.txt", "w");
    
    char c =fgetc(ptr1);
    while(c!=EOF)
    {

    fputc(c,ptr2);
    c =fgetc(ptr1);
    }
    fprintf(ptr2,"\n");    
   
    fclose(ptr1);
    fclose(ptr2);

    return 0;
} 
*/

// practice 4 name and salary of the employee
/*
#include<stdio.h>

int main()
{
    FILE *ptr;
    int salary;
    char name[55];
    int salary2;
    char name2[55];
    printf("enter the salary\n");
    scanf("%d",&salary);
    printf("enter the name\n");
    scanf("%s",&name);
    printf("enter the salary\n");
    scanf("%d",&salary2);
    printf("enter the name\n");
    scanf("%s",&name2);

    ptr=fopen("company.txt","w");
    
    fprintf(ptr,"%s,%d\n",name,salary);
    fprintf(ptr,"%s,%d\n",name2,salary2);
    
    fclose(ptr);
    return 0;
}
*/
// practice 5 double the value of integer from file
/*
#include<stdio.h>
int main()
{
FILE *ptr;
int num;
ptr= fopen("double.txt","r");

fscanf(ptr,"%d",&num);

fclose(ptr); 
printf("the value of num is %d\n",num);
ptr= fopen("double.txt","w");

fprintf(ptr,"double no. is  %d\n",(2*num));
fclose(ptr);
return 0;
}
*/