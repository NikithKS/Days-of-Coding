#include<stdio.h>

int minimize(int* arr, int *n){
    int i = 0, j, count = 0, temp;
    for (j = 0; j < *n; j++){
        temp = arr[j];
        if(temp > 1){
            arr[i] = temp;
            i++;
            count += temp;
        }
    }
    *n = i;
    return count;
}

void addTable(int* arr, int n){
    for (int i = 0; i < n; i++){
        arr[i]--;
    }
}


int main(){
    int test;
    scanf("%d", &test);
    int n, cost, ans, temp, fighters, i;
    while(test--){
        int hash[1001];
        scanf("%d%d",&n, &cost );
        int arr[n];
        for(i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        ans = cost;
        i = 0;
            hash = {0};
        while(i < n){
            if(hash[arr[i]] != 0){
                cost++;
                hash = {0};
            }
            else{
                i++;
            }

        }



    printf("%d\n", ans);
    }
    return 0;
}