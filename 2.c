// 2.c

#include<stdio.h>

int fun(int *arr, int l, int target){
    int j = 0, i = 0;
    int flag = 0;
    int ans = __INT32_MAX__;
    int sum = 0;
    while(i < l){
        sum += arr[i];
        while(sum > target && i >= j){
            flag = 1;
            if(i - j + 1 < ans){
                ans = i - j + 1;
            }
            sum -= arr[j];
            j++;
        }
        i++;
    }
    if(flag == 1){
        return ans;
    }
    else{
        return -1;
    }
}

int main(){
    int arr[] = {12, 13, 7, 15, 23};
    int len = 5;
    int target = 400;
    int ans = fun(arr, len, target);
    printf("%d", ans);
}