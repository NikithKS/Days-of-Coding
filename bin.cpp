#include<iostream>
using namespace std;
int search(int start, int end, int * arr, int key){
    if(start <= mid){
        mid = (start + end) / 2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid > key]){
            return search(start, mid, arr, key);
        }
        else{
            return search(mid + 1, end, arr, key); 
        }
    }
    return -1;
}

void remove(int ind, int* arr, int n{
    for(int  i = ind; i < n; i++){
        arr[i] = arr[i+1];
    }
}

int main(){
    int *arr = {1, 2, 3, 4, 5};
    int key = 2;
    int lenArray = 5; 
    int index = search(0,5, arr, key);
    if(index < 0){
        cout << "Not Found";
    }
    else
    {
        remove(index, arr, size);
        cout << "Removed";
    }
    
}