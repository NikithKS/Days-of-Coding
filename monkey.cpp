#include<iostream>
using namespace std;
int monkey[10005], arr[10005], count, n;

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

void solve(){
  int temp[n];
  do{
    count++;
    for (int i = 0; i < n; i++){
      temp[arr[i]] = monkey[i];
    }
    for (int i = 0; i < n; i++){
      monkey[i] = temp[i];
    }
  }while(chk() != 1);

  cout << count;
}

int main(void){
  int test, inp;
  // scanf("%d", &test);
  cin >> test;
  while(test--){
    // scanf("%d", &n);
    cin >> n;
    for (int i  = 0; i < n; i++){
      // scanf("%d", &inp);
      cin >> inp;
      arr[i] = inp - 1;
      monkey[i] = i;
    }
    count = 0;
    solve();
  }
}
