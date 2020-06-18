#include<stdio.h>

void swap(int a, int b, int arr[]);
int main(void){
  int n, i, j;
  scanf("%d", &n);

  int arr[n], temp;
  for (i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  for (i = 1; i < n; i++){
    for (j = 0; j < n -i; j++){
      if(arr[j+1] < arr[j]){
        swap(j, j+1, arr);
      }
    }
    for(j = 0; j < n; j++){
      printf("%d ", arr[j]);
    }
    printf("\n");
  }
}


void swap(int a, int b, int arr[]){
  int temp;
  temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}
