#include<stdio.h>
void printarray(int *a,int n){
    for(int i=0;i<n;i++)
    {
     printf("%d ",a[i]);
    }
    printf("\n");
}
void selectionsort(int *a,int n){
        int indexmin,temp;
    for(int i=0;i<n-1;i++){ //for number of passes 
        indexmin=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[indexmin]){
                indexmin=j;
            }
        }
        // swap a[i] anda[indexmin] 
        temp=a[i];
        a[i]=a[indexmin];
        a[indexmin]=temp;
    }

}
int main()
{
    
int a[]={12,54,65,7,23,9};
int n=6;
printf("array before sort\n");
printarray(a,n);
selectionsort(a,n);
printf("array after sort\n");
printarray(a,n);

return 0;
}