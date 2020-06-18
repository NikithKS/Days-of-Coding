#include<stdio.h>

void insert(int a, int b, int arr[]);

int main(){
  int n, i, j;
  scanf("%d", &n);

  int arr[n];
  for (i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  for (i = 1; i < n; i++){
    for (j = 0; j < i; j++){
      if(arr[j] > arr[i])
      {
        insert(i, j, arr);
        break;
      }
    }
    for (j = 0; j < n; j++)
    {
      printf("%d ", arr[j]);
    }
    printf("\n");
  }
}


void insert(int a, int b, int arr[]){
  int temp = arr[a], i;
  for(i = a; i > b; i--)
  {
    arr[i] = arr[i-1];
  }
  arr[b] = temp;

  return;
}
