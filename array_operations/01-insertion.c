#include<stdio.h>
void display(int arr[],int size)
// code for traversal 
{
    for(int i=0;i<size;i++)
    {
        printf("%d %d\n",i+1,arr[i]);
    }
}

int indInsertion(int arr[],int size,int element,int capacity,int index)
{
    // code for insertion
   if (index>=capacity)
   {
    return -1;
   }
     for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
       
    }
     arr[index]=element;
     return 1;

}

int main()
{
 int arr[100]={1,2,6,55,84};
 int size=5,element=45,index=3,capacity=100;
 printf("display before insertion\n");
 display(arr,size);
 indInsertion(arr,size,element,capacity,index);
 size+=1;
 printf("display after insertion\n");
 display(arr,size);
 
return 0;
}