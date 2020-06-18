#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int n;

void display(int arr[], int n){
  for (int i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void swap(int arr[], int a, int b){
  int temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}

void sort(int arr[], int start, int end){
  if(start >= end){
    return;
  }

  int r = (rand() % (end - start)) + start;
  swap(arr, r, end);
  int pivot = arr[end];
  int j = start;

  for(int i = start; i < end; i++){
    if (arr[i] <= pivot){
      swap(arr, i, j);
      j++;
    }
  }
  swap(arr, j, end);
  display(arr, n);

  sort(arr, start, j-1);
  sort(arr, j+1, end);
}


int main(void){
  scanf("%d", &n);
  int arr[n], i;
  for (i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  srand(time(0));
  sort(arr, 0, n - 1);
  display(arr, n);
}
