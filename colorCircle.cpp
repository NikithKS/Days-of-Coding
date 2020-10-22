// colorCircle.cpp

// https://codeforces.com/contest/1408/problem/A
#include<iostream>
using namespace std;

int main(){
    int test, n, pre, ans;
    cin >> test;
    while(test--){
        cin >> n;
        int arra[n], arrb[n], arrc[n];
        int it = 3;
        for (int i = 0; i < n; i++){
            cin >> arra[i];
        }
        for (int i = 0; i < n; i++){
            cin >> arrb[i];
        }
        for (int i = 0; i < n; i++){
            cin >> arrc[i];
        }
        pre = arra[0];
        cout << pre << " ";
        int f = pre;

        
        for (int i = 1; i < n - 1; i++){
            if(arra[i] != pre){
                ans = arra[i];
            }
            else if(arrb[i] != pre){
                ans = arrb[i];
            }
            else{
                ans = arrc[i];
            }
            pre = ans;
            cout << ans << " ";
        }
        // pre = f;
        if(arra[n - 1] != pre && arra[n - 1] != f){
                ans = arra[n - 1];
            }
            else if(arrb[n - 1] != pre && arrb[n - 1] != f){
                ans = arrb[n - 1];
            }
            else{
                ans = arrc[n - 1];
            }
            cout << ans << " ";
        cout << endl;
    }
}