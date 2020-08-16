#include<iostream>
using namespace std;

int main(){
    int test, n, i, temp, q;
    cin >> test;
    while(test--){
        cin >> n >> q;
        int arr[n], arrodd[n], arreven[n], min = INT16_MAX, max = INT16_MIN, maxInd, minInd;
        for(i = 0; i < n; i++){
            cin >> temp;
            arr[i] = temp;
            if(temp < min){
                min = temp;
                minInd = i;
            }
            if(temp > max){
                max = temp;
                maxInd = i;
            }
        }
        for(i = 0; i < n; i++){
            arrodd[i] = max - arr[i];
        }
        max = arrodd[minInd];
        for(i = 0; i < n; i++){
            arreven[i] = max - arrodd[i];
        }
        int* ans = arrodd;
        if(q % 2 == 0){
            ans = arreven;
        }
        for(i = 0; i < n; i++){
            printf("%d ", ans[i]);
        }
        printf("\n");
    }
    return  0;
}