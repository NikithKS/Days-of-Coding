#include<iostream>
using namespace std;

char a, b;
int n;

int max(int a, int b, int c){
    if(a < b){
        if(c < b){
            return b;
        }
        else{
            return c;
        }
    }
    else{
        if(c < a){
            return a;
        }
        else{
            return c;
        }
    }
}

int check(string str, int index, int k, int aBefore, int bAfter, int ans){
    if(index == n){
        // cout << "HERE " << index << " " << n <<" "<< k << endl;
        return ans;
    }
    int r1, r2, r3;

    if(str[index] == a){
        r1 = check(str, index + 1, k, aBefore + 1, bAfter, ans + bAfter);
        if(k > 0)
            r2 = check(str, index + 1, k - 1, aBefore, bAfter, ans + aBefore);
        else
            r2 = 0;
        r3 = 0;
    }
    else if(str[index] == b){
        bAfter--;
        if (k > 0)
            r1 = check(str, index + 1, k - 1, aBefore + 1, bAfter, ans + bAfter - aBefore );
        else
            r1 = 0;
        r2 = check(str, index + 1, k, aBefore, bAfter, ans);
        r3 = 0;
    }
    else{
        if (k > 0){
            r1 = check(str, index + 1, k - 1, aBefore + 1, bAfter, ans + bAfter);
            r2 = check(str, index + 1, k - 1, aBefore, bAfter, ans + aBefore);
        }
        else{
            r1 = 0;
            r2 = 0;
        }
        r3 = check(str, index + 1, k, aBefore, bAfter, ans);
    }
    int m = max(r1, r2, r3);

    // cout << str[index] << m << endl;
    return m;
}

int checkForEqual(string str, int index, int k, int aBefore, int aAfter, int ans){
    if(index == n){
        return ans;
    }
    if(str[index] == a){
        return checkForEqual(str, index + 1, k, aBefore + 1, aAfter - 1, ans + aAfter - 1);
    }
    else{
        int r1, r2;
        if(k > 0)
            r1 = checkForEqual(str, index + 1, k - 1, aBefore + 1, aAfter, ans + aAfter + aBefore);
        else
            r1 = 0;
        r2 = checkForEqual(str, index + 1, k, aBefore, aAfter, ans);
        return max(r1, r2, 0);
    }
}

int main(){
    int k;
    cin >> n >> k;
    // char str[n];
    string str;
    cin >> str;

    // char str2[2];
    string str2;
    cin >> str2;

    a = str2[0];
    b = str2[1];
    int countB = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == b){
            countB++;
        }
    }

    int ans = 0;
    if(a == b){
        ans = checkForEqual(str, 0, k, 0, countB, 0);
    }
    else{
        ans = check(str, 0, k, 0, countB, 0);
    }

    cout << ans << endl;
}