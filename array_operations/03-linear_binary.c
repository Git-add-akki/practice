// linear search
/*
#include<stdio.h>
int linearsearch(int arr[],int size,int element) 
{
    for (int i=0;i<=size;i++)
    {
        if(arr[i]==element)
        {return i;}
    }
    return -1;
}
int main()
{
int arr[]={1,3,5,55,68,99,452,555};
int size=sizeof(arr)/sizeof(int); // shortcut to find size of array
int element=99;
int sindex=linearsearch(arr,size,element);
printf("\n%d\n",sindex);
return 0;
}
*/

// binary search

#include<stdio.h>
int binarysearch(int arr[],int size,int element) 
{
    int low,mid,high;
    low=0;
    high=size-1;
    //start searching
    while(low<=high)
    {
      mid=(low+high)/2;
      if(arr[mid]==element)
      {return mid;}

      if(arr[mid]<element)
      {
        low=mid+1;
      }
      else 
      {
        high=mid-1;
      }
    }
    // searching ends 

}
int main()
{
int arr[]={1,3,5,55,68,99,452,555};
int size=sizeof(arr)/sizeof(int); // shortcut to find size of array
int element=5;
int sindex=binarysearch(arr,size,element);
printf("\nindex is %d\n",sindex);
return 0;
}