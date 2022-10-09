#include<stdio.h>
void printarray(int *a,int n){
    for(int i=0;i<n;i++)
    {
     printf("%d ",a[i]);
    }
    printf("\n");
}
void insertionsort(int *a,int n){
    int key,j;
    for(int i=1;i<=n-1;i++){ //we can write i<n;  // loop for passes
     key=a[i];
     j=i-1;
    //  loop for each passes
    while(j>=0 && a[j] > key){  //for descending order use a[j]<key
        a[j+1]=a[j];
        j--;;
    }
    a[j+1]=key;
    }

}
int main()
{
//   dry code help from video 19:38 time
int a[]={12,54,65,7,23,9};
int n=6;
printf("array before sort\n");
printarray(a,n);
insertionsort(a,n);
printf("array after sort\n");
printarray(a,n);
return 0;
}