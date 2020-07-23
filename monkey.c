#include<stdio.h>
int monkey[10001], arr[10001], count, n;

int chk(){
  int flag = 1;
  for (int i = 0; i < n; i++){
    if(monkey[i] != i){
      flag = 0;
      break;
    }
  }
  return flag;
}

void rotate(){
  count++;
  int temp[n];
  for (int i = 0; i < n; i++){
    temp[arr[i]] = monkey[i];
  }
  for (int i = 0; i < n; i++){
    monkey[i] = temp[i];
  }

  if(chk() == 1){
    printf("%d", count);
  }
  else{
    rotate();
  }
}

int main(void){
  int test, inp;
  scanf("%d", &test);
  while(test--){
    scanf("%d", &n);
    for (int i  = 0; i < n; i++){
      scanf("%d", &inp);
      arr[i] = inp - 1;
      monkey[i] = i;
    }
    count = 0;
    rotate();
  }
}
