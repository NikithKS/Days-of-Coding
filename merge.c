#include<stdio.h>

int n;

void display(int arr[], int n){
  printf("\n");
  for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void merge(int arr[], int start, int mid, int end){
  int i, j;
  int leftLen = mid - start ;
  int rightLen = end - mid;
  int totLen = leftLen + rightLen;

  int leftArr[leftLen], rightArr[rightLen];

  for( i = 0; i < leftLen; i++){
    leftArr[i] = arr[start + i];
  }

  for( i = 0; i < rightLen; i++){
    rightArr[i] = arr[mid + i];
  }


  i = 0;
  j = 0;
  int k = start;
  while(i < leftLen && j < rightLen)
  {
    if(leftArr[i] <= rightArr[j])
    {
      arr[k] = leftArr[i];
      i++;
    }
    else{
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }

  if(i < leftLen){
    while(i < leftLen){
      arr[k] = leftArr[i];
      i++;
      k++;
    }
  }

  if(j < rightLen){
    while(j < rightLen){
      arr[k] = rightArr[j];
      j++;
      k++;
    }
  }
}


void sort(int arr[], int start, int end){
  int len = end - start;
  if(len == 1){
    return;
  }
  int mid = start + (len / 2);
  sort(arr, start, mid);
  sort(arr, mid, end);

  merge(arr, start, mid, end);
}

int main(void){
  // int n, i;
  scanf("%d", &n);

  int arr[n], i;
  for (i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  sort(arr, 0, n);
  display(arr, n);
}
