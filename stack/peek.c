#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *ptr,int val){
    if(isfull(ptr)){
      printf("stack is overflow cannot push %d in stack\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val; // dont k why we cant use this ptr->top=val;
    }
}
int pop(struct stack *ptr){
    if(isempty(ptr)){
      printf("stack is underflow cannot pop \n");
      return -1;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack *sp,int i){
    int arrind=sp->top-i+1;
    if (arrind <0){
        printf("not  valid position\n");
        return -1;
    }
    else
    {
      return sp->arr[arrind];
    }
}
int main()
{
struct stack *sp =(struct stack *)malloc(sizeof(struct stack));
sp->size =5;
sp->top =-1;
sp->arr=(int *)malloc(sp->size *sizeof(int));

push(sp,65);
push(sp,44);
push(sp,56);
push(sp,13);
push(sp,87);
push(sp,69); //stack overflow since size of stack is 10


printf("popped %d from stack\n",pop(sp));

for(int j=1;j<=sp->top+1;j++){
    printf("the value at position %d is %d\n",j,peek(sp,j));
}
return 0;
}