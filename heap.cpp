#include<iostream>
using namespace std;

void display(int * arr, int n){
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void heapify(int *arr, int n){
    int node, parent;
    for(int i = 1; i <= n; i++){
        node = i;
        parent = (int) i / 2;
        while (parent > 0){
            if(arr[parent] < arr[node]){
                swap(arr[parent], arr[node]);
            }
            node = parent;
            parent = (int) node / 2;
        }
        
    }
}

void sort(int *arr, int n){
    for (int i = n; i > 0; i--){
        heapify(arr, i);
        // display(arr, n);
        swap(arr[i], arr[1]);
        // display(arr, n);
    }
}

int main(){
    int arr[] = {0, 5, 4, 3, 2, 1};
    int n = 5;
    display(arr, n);

    sort(arr, n);

    display(arr, n);
}