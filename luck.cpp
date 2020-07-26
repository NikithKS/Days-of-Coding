/*
Luch Balance - HackerRank
https://www.hackerrank.com/challenges/luck-balance/problem
*/

#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n, k, i, j, imp, ans = 0, temp, impcount = 0;
    cin >> n >> k;
    vector<int> arr;
    for (i =0; i < n; i++){
        cin >> temp >> imp;
        if(imp == 0){
            ans += temp;
        }
        else{
            arr.push_back(temp);
            impcount++;
        }
    }
    sort(arr.begin(), arr.end());
    
    if(k > impcount){
        k = ;
    }
    
    for (i = impcount - 1; i >= (impcount - k); i--){
        ans += arr[i];
        // cout << ans << " ";
    }
    for (i = (impcount - k) - 1; i >= 0; i--){
        ans -= arr[i];
        // cout << ans << " ";
    }
    cout << ans << endl;
}