// sublen.cpp
// https://codeforces.com/problemset/problem/1409/F

#include<iostream>
using namespace std;

struct dt {
    int c2;
    int c1;
};

int main(){
    int n, k, firstC, secondC;
    cin >> n >> k;
    char str[n], target[2];
    cin >> str >> target;

    char first = target[0];
    char second = target[1];
    dt* counter[n];

    for (i = 0; i < n; i++){
        d[i].c1 = firstC;
        d[i].c2 = secondC;
        if(str[i] == first){
            firstC++;
        }
        else if(str[i] == second){
            secondC++;
        }
    }
}