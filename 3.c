// 3.c

#include<stdio.h>
int check(int sum, int index, int len, int* arr){
    if(index >= len){
        return sum;
    }
    else if(index == len - 1){
        return sum + arr[index];
    }
    else{
        int s1 = check(sum, index + 1, len, arr);
        int s2 = check(sum + arr[index], index + 2, len, arr);
        if(s1 > s2){
            return s1;
        }
        return s2;
    }

}


int main(){
    int len = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int ans = check(0, 0, len, arr);
    printf("%d", ans);
}