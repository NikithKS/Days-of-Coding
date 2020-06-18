#include<stdio.h>

void display(int arr[], int n){
  for(int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void insert(int a, int b, int arr[]){
  int temp = arr[a];
  for (int i = a; i > b; i--){
    arr[i] = arr[i-1];
  }
  arr[b] = temp;
}


void sort(int arr[], int m){
  if (m == 1){
    return;
  }
  sort(arr, m-1);

  int i;
  for (i = 0; i < m; i++){
    if(arr[m] < arr[i]){
      insert(m, i, arr);
      break;
    }
  }
  // display(arr, m);
}

int main(void){
  int n, i;

  scanf("%d", &n);

  int arr[n];
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  sort(arr, n);
  display(arr, n);
}
