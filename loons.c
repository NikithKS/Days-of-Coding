/*
Bursting balloons

Given n balloons, indexed from 0 to n-1. Each balloon is painted with a number on it represented
by array nums. You are asked to burst all the balloons. If the you burst balloon i you will
get nums[left] * nums[i] * nums[right] coins. Here left and right are adjacent indices of i. After the
burst, the left and right then becomes adjacent.
Find the maximum coins you can collect by bursting the balloons wisely.
Note:
You may imagine nums[-1] = nums[n] = 1. They are not real therefore you can not burst them.
0 ≤ n ≤ 500, 0 ≤ nums[i] ≤ 100
Input: [3,1,5,8]
Output: 167
Explanation: nums = [3,1,5,8] --> [3,5,8] --> [3,8] --> [8] --> []
coins = 3*1*5 + 3*5*8 + 1*3*8 + 1*8*1 = 167

*/



#include<stdio.h>
#include<string.h>

int max(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}

void main(void){
    int n, i, j;
    scanf("%d", &n);
    int arr[n+2];
    int dp[101][101] = {0};
    // memset(dp, 0, (n+1)*(n+1)*sizeof(int));
    printf("%d", dp[10][0]);
    arr[0] = 1;
    arr[n+1] = 1;
    for (i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }
    int left, right, ans = 0;
    for(int wind = 1; wind <= n; wind++){
        for (left = 1; left <= n - wind + 1; left++){
            right = left + wind - 1;
            for (i = left; i <= right; i++){
                dp[left][right] = max(dp[left][right], arr[left-1] * arr[i] * arr[right+1] + dp[left][i - 1] + dp[i+1][right]);
            }
            if (ans < dp[left][right]){
                ans = dp[left][right];
            }
        }
    }
    printf("%d\n", ans);
}