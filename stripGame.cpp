#include <iostream>
using namespace std;

int main(){
    int test, n, i, temp, zeros, longest;
    bool twoLong;
    cin >> test;
    while(test--){
        zeros = 0;
        longest = 0;
        twoLong = false;
        cin >> n;
        for (i = 0; i < n; i++){
            cin >> temp;
            if (temp == 0){
                zeros++;
                if (zeros > longest){
                    longest = zeros;
                    twoLong = false;
                }
                else if (zeros == longest){
                    twoLong = true;
                }
            }
            else{
                zeros = 0;
            }
        }
        if (!twoLong){
            if (longest % 2 != 0){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else{
            cout << "No" << endl;
        }
    }
}