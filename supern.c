#include<stdio.h>

int fact(int n){
  int prod = 1;
  for(int i = 2; i <= n; i++){
    prod *= i;
  }
  return prod;
}

void main(void){
  int n, i;
  int arr[4] = {0};

  scanf("%d", &n);
  while(n > 1){
    if(n % 2 == 0) {
      arr[0]++;
      n /= 2;
    }
    else if(n % 3 == 0) {
      arr[1]++;
      n /= 3;
    }
    else if(n % 5 == 0) {
      arr[2]++;
      n /= 5;
    }
    else if(n % 7 == 0) {
      arr[3]++;
      n /= 7;
    }
    else {
      break;
    }
  }
  if(n > 1){
    printf("0\n");
  }
  else{
    int tot = arr[0] + arr[1] + arr[2] + arr[3];
    int fac5n7 = fact(arr[2]) * fact(arr[3]);
    int ans = fact(tot)/(fact(arr[0]) * fact(arr[1]) * fac5n7);

    int cnt2 = arr[0];
    int cnt3 = arr[1];
    int tot2 = tot;
    int repc = 0;

    printf("%d\n", ans);
    while(cnt2 > 1){
      repc++;
      tot2--;
      cnt2 -= 2;
      ans += fact(tot2)/(fact(cnt2) * fact(cnt2) * fac5n7 * fact(repc));
    }
    printf("%d\n", ans);

    repc = 0;
    cnt2 = arr[0];
    tot2 = tot;
    while(cnt3 > 1){
      repc++;
      tot2--;
      cnt3 -= 2;
      ans += fact(tot2)/(fact(cnt2) * fact(cnt3) * fac5n7 * fact(repc));
    }
    printf("%d\n", ans);

    cnt2 = arr[0];
    cnt3 = arr[1];
    repc = 0;
    while(cnt2 > 0 && cnt3 > 0){
      repc++;
      tot--;
      cnt2--;
      cnt3--;
      ans += fact(tot)/(fact(cnt2) * fact(cnt3) * fac5n7 * fact(repc));
    }
    printf("%d\n", ans);
  }
}
