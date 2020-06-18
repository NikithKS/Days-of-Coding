#include<stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);

  int arr[n], i, j, min, min_ind, temp;
  for(i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  for(i = 0; i < n; i++)
  {
    min = arr[i];
    min_ind = i;
    for(j = i + 1; j < n; j++)
    {
      if(min > arr[j])
      {
        min = arr[j];
        min_ind = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[min_ind];
    arr[min_ind] = temp;
  }

  for( i = 0; i <  n; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
