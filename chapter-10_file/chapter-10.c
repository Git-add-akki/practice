// chapter 10-file IO
/*
#include<stdio.h>
int main()
{
FILE *ptr;
int num;
int num2;
ptr= fopen("new.txt","r");
fscanf(ptr,"%d",&num);
fscanf(ptr,"%d",&num2);
fclose(ptr); //it will save extra use of resources
printf("the value of num is %d\n",num);
printf("the value of num2 is %d\n",num2);
return 0;
}
*/
// chech file existence before opening it
/*
#include<stdio.h>
int main()
{
FILE *ptr;
int num;
int num2;
ptr= fopen("new5.txt","r");
if(ptr==NULL)
{
 printf("this file doesn't exist\n");
}
else
{
fscanf(ptr,"%d",&num);
fscanf(ptr,"%d",&num2);
fclose(ptr); 
printf("the value of num is %d\n",num);
printf("the value of num2 is %d\n",num2);
return 0;
}
}
*/
// writing file
/*
#include<stdio.h>

int main()
{
    FILE *fptr;
    int number = 45;
    fptr=fopen("generated.txt","w");
    fprintf(fptr,"the no. is %d\n",number);
    fprintf(fptr,"thax for usingg 45 ");
    fclose(fptr);
    return 0;
}
*/

// fgetc and fputc
/*
#include<stdio.h>

int main()
{
  FILE *ptr;
  ptr = fopen("democ.txt","r");
  char c= fgetc(ptr);
  //printf("the text is %c\n",c); //it will only display first character all time
  printf("the text is %c\n",fgetc(ptr));
  printf("the text is %c\n",fgetc(ptr));
  printf("the text is %c\n",fgetc(ptr));
  printf("the text is %c\n",fgetc(ptr));
  printf("the text is %c\n",fgetc(ptr));
  printf("the text is %c\n",fgetc(ptr));
return 0;
}
*/
//fputc
/*
#include<stdio.h>
int main()
{
  FILE *ptr;
  ptr = fopen("fputdemoc.txt","w");

  putc('c',ptr);
  putc('h',ptr);
  putc('a',ptr);
  putc('s',ptr);
  putc('e',ptr);
  fclose(ptr);
return 0;
}
*/

// print complete file data by using fgetc

/*
#include<stdio.h>
int main()
{
  FILE *ptr;
  char c;
  ptr = fopen("democ.txt","r");
  c=fgetc(ptr);
  while(c!=EOF) // EOF means end of file
  {
    printf("%c",c);
    c=fgetc(ptr);
  }
  printf("\n");
  return 0;
}
*/