// tcs2.c

#include<stdio.h>

int primes[510];


void func(){
  int i;
  for(i = 0; i < 510; i++){
    primes[i] = 1;
  }
  primes[0] = 0;
  primes[1] = 0;
  for(i = 2; i*i <= 510; i++){
    if(primes[i]){
      for(int j = i * i; j <= 510; j += i){
        primes[j] = 0;
      }
    }
  }
//   for(i = 2; i<= 510; i++){
//       printf("(%d--%d)", i, primes[i]);
//   }
}

int main(void){
  func();
  int d, p;
  scanf("%d%d", &d, &p);
//   d = 24;
//   p = 2;
  int flag = 1;
  int dur = d/p;
  int intCount, ans = 0;
  int temp, i;
  for(i = 2;i <= dur; i++){
    flag = 1;
    temp = i;
    // printf("%d ", primes[i]);

    if(primes[temp]){
      intCount = 1;
    //   printf("%d", temp);
      while(temp <= d && intCount < p){
        temp += dur;
        if(!primes[temp]){
          flag = 0;
          break;
        }
        if(flag){
          intCount++;
        }
      }
      if(intCount == p){
        ans++;
      }
      
    }
  }
  printf("%d\n", ans);
  return 0;
}
