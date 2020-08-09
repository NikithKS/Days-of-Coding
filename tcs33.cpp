// tcs33.cpp
#include<iostream>
#include<queue>
#include<math.h>
using namespace std;

int main()
{
  int n, k, temp;
  cin>>n>>k;

  priority_queue<int> arr;
  
  while(n--){
      cin >> temp;
      arr.push(temp);
  }

  while(k--)
  {
    temp = arr.top();
    arr.pop();
    arr.push(temp / 2);
  }

  long int sum = 0;
  while(!arr.empty())
  {
    sum += arr.top();
    arr.pop();
  }  

  cout << sum <<endl;
  return 0;
}