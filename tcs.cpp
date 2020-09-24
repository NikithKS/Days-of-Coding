#include<iostream>
using namespace std;

int main(){
    char str[20];
    cin >> str;
    int  i = 0;
    int count = 0;

    if(str.length() < 20){
        cout << "Length less than 20" << endl;
        exit(1);
    }
    while(str[i] != '\o'){
        if(str[i] == 'A'){
            count++;
        }
        else if(str[i] == 'a'){
            count++;
        }
    }
    cout << count << endl;
}