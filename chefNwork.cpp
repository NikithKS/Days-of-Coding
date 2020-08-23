// chefNwork.cpp

#include<iostream>
using namespace std;

int main(){
    long int test,n ,k, sum, i, ans, temp;
    cin >> test;
    bool flag;
    while(test--){
        cin >> n >> k;
        sum = k;
        ans = 0;
        flag = true;
        for( i = 0; i < n; i++){
            cin >> temp;
            if(temp > k){
                ans = -1;
                flag = false;
                // break;
            }
            sum += temp;
            if(sum > k){
                sum = temp;
                ans++;
            }
        }
        if(flag){
        cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        
    }
    return 0;
}