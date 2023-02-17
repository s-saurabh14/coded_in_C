
#include<stdio.h>

int getMax(int arr[], int n) {
   int max = arr[0];
   for(int i = 1; i<n; i++) {
      if(arr[i] > max)
         max = arr[i];
   }
   return max;
}

void countSort(int arr[], int n)
{
   int res[n+1];
   int max = getMax(arr, n);
   int count[max+1];


  for (int i = 0; i <= max; ++i)
  {
    count[i] = 0;
  }

  for (int i = 0; i < n; i++)
  {
    count[arr[i]]++;
  }

   for(int i = 1; i<=max; i++)
      count[i] += count[i-1];

  for (int i = n - 1; i >= 0; i--) {
    res[count[arr[i]] - 1] = arr[i];
    count[arr[i]]--;
}

   for(int i = 0; i<n; i++) {
      arr[i] = res[i];
   }
}

void printArr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main() {
    int arr[] = { 17, 20, 14, 7, 41, 26 };
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before sorting array elements are - \n");
    printArr(arr, n);
    countSort(arr, n);
    printf("\nAfter sorting array elements are - \n");
    printArr(arr, n);
    return 0;

}
