#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    char *arr;
};
char isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
char isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *ptr,char val){
    if(isfull(ptr)){
      printf("stack is overflow cannot push %c in stack\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val; // dont k why we cant use this ptr->top=val;
    }
}
char pop(struct stack *ptr){
    if(isempty(ptr)){
      printf("stack is underflow cannot pop \n");
      return -1;
    }
    else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int parethesismatch(char *exp){
    // create and initialise a stack
    struct stack *sp;
    sp->size=100;
    sp->top =-1;
    sp->arr=(char *)malloc(sp->size *sizeof(char));

    for(int i=0;exp[i]!='\0';i++){
       if(exp[i]=='('){
           push(sp,'(');
       }
       else if(exp[i]==')'){
         if(isempty(sp)){
            return 0;
         }
         pop(sp);
       }
    }
    if(isempty(sp)){
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
    char * exp="8*(9)";
    // char a[20];
    // char * exp=a;
    // // exp=&a;
    // printf("\n enter the statement\n ");
    // scanf("%s",&a);

if(parethesismatch(exp)){
printf("parenthesis is matching\n");
}
else{
printf("parenthesis is not matching\n");
}

return 0;
}