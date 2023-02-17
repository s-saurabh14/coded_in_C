#include <stdio.h>
int binarySearch(int arr[],int beg, int end, int val){
int mid;
if(end >= beg ){
    mid = (beg+end)/2;
    if(arr[mid]==val){
        return mid+1;
    }
    else if(arr[mid] < val){
       return binarySearch(arr, mid+1, end, val);
    }
    else{
        return binarySearch(arr, beg, mid-1, val);
    }
  }
  return -1;
}


void main(){
     int size=0;
     int x;
     int beg= 0;
     int end= size-1;
     printf("input size of array ");
    scanf("%d",&size);
    int arr[size];
    printf("\n input elements of array  ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n The array  is ");
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
    printf("\n input element need to be searched \n ");
    scanf("%d",&x);
    int res =  binarySearch(arr,0,size-1,x);

     if (res == -1)
  printf("\nElement is not present in the array");
  else
  printf("\nElement is present at %d position of array", res);
}
