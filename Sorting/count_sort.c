#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void printarray(int *a,int n){
    for(int i=0;i<n;i++)
    {
     printf("%d ",a[i]);
    }
    printf("\n");
}
int maximum(int a[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
      if(max<a[i]){
        max=a[i];
      }
    }
    return max;
}
void countsort(int *a,int n){
    int i,j;
    // find the max element in a
    int max=maximum(a,n);

    // create the count array
    int * count=(int *)malloc((max+1)*sizeof(int));

    // initialise the array elements to 0;
    for( i=0;i<max+1;i++)
    {
        count[i]=0;
    }
    // increment the corresponding index in the count rray
    for( i=0;i<n;i++)
    {
        count[a[i]]=count[a[i]]+1;
    }

    i=0;  //counter for count array
    j=0;  //counter for given array

    while(i<=max){
        if(count[i]>0){
            a[j]=i;
            count[i]=count[i]-1;
            j++;
        }
           else i++;
    }
}
int main()
{
int a[]={12,54,65,7,23,9};
int n=6;
printf("array before count sort\n");
printarray(a,n);
countsort(a,n);
printf("array after count sort\n");
printarray(a,n);
return 0;
}