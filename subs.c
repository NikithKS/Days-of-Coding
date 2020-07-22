/*
Common Subsequence
You are given two arrays of integers a1,…,an and b1,…,bm.

Your task is to find a non-empty array c1,…,ck that is a subsequence of a1,…,an, and also a subsequence of b1,…,bm. If there are multiple answers, find one of the smallest possible length. If there are still multiple of the smallest possible length, find any. If there are no such arrays, you should report about it.
A sequence a is a subsequence of a sequence b if a can be obtained from b by deletion of several (possibly, zero) elements. For example, [3,1] is a subsequence of [3,2,1] and [4,3,1], but not a subsequence of [1,3,3,7] and [3,10,4].
Input:
The first line contains a single integer t (1≤t≤1000)  — the number of test cases. Next 3t lines contain descriptions of test cases.

The first line of each test case contains two integers n and m (1≤n,m≤1000)  — the lengths of the two arrays.

The second line of each test case contains n integers a1,…,an (1≤ai≤1000)  — the elements of the first array.

The third line of each test case contains m integers b1,…,bm (1≤bi≤1000)  — the elements of the second array.

It is guaranteed that the sum of n and the sum of m across all test cases does not exceed 1000 (∑i=1tni,∑i=1tmi≤1000).

Output:

For each test case, output "YES" if a solution exists, or "NO" otherwise.

If the answer is "YES", on the next line output an integer k (1≤k≤1000)  — the length of the array, followed by k integers c1,…,ck (1≤ci≤1000)  — the elements of the array.

If there are multiple solutions with the smallest possible k , output any.
Example:

Input

5
4 5
10 8 6 4
1 2 3 4 5
1 1
3
3
1 1
3
2
5 3
1000 2 2 2 3
3 1 5
5 5
1 2 3 4 5
1 2 3 4 5

Output

YES
1 4
YES
1 3
NO
YES
1 3
YES
1 2

*/
#include<stdio.h>

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

int search(int arr[], int start,int end, int ele){
  if (start <= end) {
    int mid = start + (end - start) / 2;

    if(arr[mid] == ele){
      return 1;
    }

    if(arr[mid] > ele){
      return search(arr, start, mid - 1, ele);
    }

    return search(arr, mid + 1, end, ele);
  }

  return 0;
}

void main(void){
  int test, l1, l2, i, temp, found , ans;
  scanf("%d", &test);
  while (test--){
    found = 0;
    scanf("%d%d", &l1, &l2);
    int arr1[l1];
    for (i = 0; i < l1; i++){
      scanf("%d", &arr1[i]);
    }

    sort(arr1, 0, l1);
    for (i = 0; i < l2; i++){
      scanf("%d", &temp);
      if(found == 0){
        if(search(arr1, 0, l1, temp) == 1){
          found = 1;
          ans = temp;
        }
      }
    }
    if(found == 0){
      printf("NO\n");
    }
    else{
      printf("YES\n1 %d\n", ans);
    }
  }
}
