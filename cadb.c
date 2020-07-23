#include<stdio.h>
int arr[1600][1600] = {0};

int solve(int a, int b){
  if(arr[a][b] != 0){
    return arr[a][b];
  }

  if(a == b){
    arr[a][b] = 1;
  }
  else if(a < b){
    arr[a][b] = 1 + solve(a, b-a);
  }
  else{
    arr[a][b] = 1 + solve(a-b, b);
  }
  return arr[a][b];
}

void main(void){
  int maxlen, minlen, maxwid, minwid;
  scanf("%d%d%d%d", &minlen,&maxlen, &minwid, &maxwid);
  int ans = 0;
  for (int i = minlen; i <= maxlen; i++){
    for (int j = minwid; j <= maxwid; j++){
      ans += solve(i,j);
    }
  }
  printf("%d", ans);
}
