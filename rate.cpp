// rate.cpp

#include<iostream>
using namespace std;

int main(){
    int test, n, m, i, j, temp;
    cin >> test;
    while(test--){
        cin >> n >> m;
        int arr[n][m];
        for (i = 0; i < n; i++){
            cin >> arr[0][i];
        }
        for(i = 0; i < n; i++){
            for(j = 1; j <= m; j++){
                cin >> temp;
                arr[j][i] = arr[j - 1][i] + temp;
            }
        }
        for (i = 0; i <= n; i++){
            for(j = 0; j < n; j++){
                cout << arr[i][j]<< " ";
            }
            cout << endl;
        }
    }
}
