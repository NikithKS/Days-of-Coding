#include<stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void disp(int *arr, int n){
    for(int i = 1; i <= n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort(int *arr, int n){
    int parent, node;
    for(int i = 1; i <= n; i++){
        node = i;
        parent = (int)(i) / 2;
        while (parent > 0){
            if(arr[node] > arr[parent]){
                swap(&arr[node], &arr[parent]);
            }
            node = parent;
            parent = (int)(node)/2;
        }
    }
}

int main(){
    int arr[] = {0, 5, 4, 3, 2, 1};
    int n = 5;
    disp(arr, n);
    for(int i = n ; i > 0; i-- ){
        sort(arr, i);
        swap(&arr[i], &arr[1]);
        disp(arr, n);
    }
}