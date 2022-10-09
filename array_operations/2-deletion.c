#include<stdio.h>
void display(int arr[],int size)
// code for traversal 
{
    for(int i=0;i<size;i++)
    {
        printf("%d %d\n",i+1,arr[i]);
    }
}

int inddeletion(int arr[],int size,int index)
{
    // code for deletion
  
     for(int i=index;i<=size-1;i++)
    {
        arr[i]=arr[i+1];
       
    }
}

int main()
{
 int arr[100]={1,2,6,55,84};
 int size=5,index=3;
 display(arr,size);
 printf("display before deletion\n");
 inddeletion(arr,size,index);
 size-=1;
 printf("display after deletion\n");
 display(arr,size);
return 0;
}