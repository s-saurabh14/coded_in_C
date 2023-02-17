#include <stdio.h>
main(){
int marks[5];
int n,i,search;
printf("enter number of elements");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++){
scanf("%d",&marks[i]);
}
printf("Array elements are: ");
for(i=0;i<n;i++){
printf("%d,\n",marks[i]);
}
printf("enter element to be searched");
scanf("%d",&search);
for(i=0;i<n;i++){
    if(search==marks[i]){
        printf("element is present at location %d",i);
        break;
    }
}
 if(i==n){
        printf("not found\n");
    }
}
