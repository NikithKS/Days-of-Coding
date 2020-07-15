/*
Doof on Cartesian
You may have helped Chef and prevented Doof from destroying the even numbers. But, it has only angered Dr Doof even further. However, for his next plan, he needs some time. Therefore, Doof has built N
walls to prevent Chef from interrupting him. You have to help Chef by telling him the number of walls he needs to destroy in order to reach Dr Doof.
Formally, the whole area can be represented as the first quadrant with the origin at the bottom-left corner. Dr. Doof is located at the origin (0,0). There are N walls, the i-th wall is a straight line segment joining the points (ai,0) and (0,ai). For every initial position of Chef (xj,yj), find the number of walls he needs to break before reaching Doof. Obviously, chef can't start from a point on the wall. Therefore, if (xj,yj) lies on any of the given walls, print −1 in a new line.
Input:

    First line contains T, denoting the number of testcases.
The first line of every test case contains a single integer N denoting the number of walls Dr Doof has built.
The next line contains N space separated distinct integers each denoting ai.
The next line contains a single integer Q denoting the number of times Chef asks for your help.
The next Q lines contains two space separated integers xj and yj, each denoting the co-ordinates of the starting point of Chef.

Output:

For each query, print the number of walls Chef needs to break in order to reach Dr Doof in a separate line. If Chef tries to start from a point on any of the walls, print −1.
Constraints

    1≤T≤2∗102
    1≤N,Q≤2∗105
    1≤ai≤109
    0≤xj,yj≤109
    a1<a2<a3<....<aN
Sum of N and Q over all testcases for a particular test file does not exceed 2∗105

Sample Input
1
2
1 3
5
0 0
2 0
0 4
1 1
1 2

Sample Output
0
1
2
1
-1

*/
#include<iostream>
using namespace std;

int search(int start, int end, int yax, int* arr){
  if(start >= end){
    if(arr[start] < yax){
      return start+1;
    }
    else{
      return start;
    }
  }
  int mid = (start + end) / 2;
  if(arr[mid] == yax){
    return mid;
  }
  else if(arr[mid] < yax){
    return search(mid+1, end, yax, arr);
  }
  else{
    return search(start, mid-1, yax, arr);
  }
}

int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int test, i, j, n, q, x, y, yax, ans, arr[200001], onwall;
  cin >> test;
  while(test--) {
    cin >> n;
    for(i = 0; i < n; i++){
      cin >> arr[i];
    }
    cin >> q;
    for(i = 0; i < q; i++){
      cin >> x >> y;
      yax = x + y;
      ans = n;
      if(yax > arr[n - 1]){
        cout << n << endl;
        continue;
      }

      ans=search(0, n-1, yax, arr);
      // cout << "ANS=" <<ans<< endl;
      if(arr[ans] == yax){
        cout <<-1<<endl;
      }
      else{
        cout <<ans<<endl;
      }
    }
  }
}
