//not working yet
#include<stdio.h>
void printarray(int *a,int n){
    for(int i=0;i<n;i++)
    {
     printf("%d ",a[i]);
    }
    printf("\n");
}
// void bubblesort(int *a,int n)
// {
//     int temp;
//    for(int i=0;i< n-1;i++) //for number of pass from  pdf theory
//    { 
//    for(int j=0;j< n-1-i;j++) //for comparison in each pass from  pdf theory
//    {
//      if(a[j]>a[j+1]){
//         temp=a[j];
//         a[j]=a[j+1];
//         a[j+1]=temp;
        
//      }
//    }
//    } 
// }
void bubblesort(int *a,int n) //if alread sorted
{
    int temp;
    int issorted=0;
   for(int i=0;i< n-1;i++) //for number of pass from  pdf theory
   {
    printf("working on passing number %d\n",i+1);
     issorted=1;
   for(int j=0;j< n-1-i;j++) //for comparison in each pass from  pdf theory
   {
     if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        issorted=0;

     }
   }
    if(issorted){
        return;
    }
   } 
}
int main()
{
    int n;
    printf("enter the length of array\n");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
{
    printf("enter the array element %d \n",i+1);
    scanf("%d",&a[i]);
}
    // int a[]={22,64,75,7,33,19};
    // int a[]={1,20,40,55,69,88};
    // int n=6;
    printf("array before bubble sort\n");
    printarray(a,n);
    bubblesort(a,n);
    printf("array after bubble sort\n");
    printarray(a,n);
    return 0;
}
