#include<stdio.h>

void main(void){
  int test, n, in, i, flag;
  scanf("%d", &test);
  while(test--){
    flag = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
      scanf("%d", &in);
      if(flag == 0){
        if(in%2 == 0)
        {
          flag = 1;
        }
      }
    }
    if(flag == 1){
      printf("NO\n");
    }
    else{
      printf("YES\n");
    }
  }
}
