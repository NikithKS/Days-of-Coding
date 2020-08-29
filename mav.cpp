// mav.c

#include<iostream>
#include<unordered_map>
using namespace std;

int min(int a, int b){
    if(a < b)
        return a;
    return b;
}

int main(){
    string str1;
    string str2;
    unordered_map<char, int> map1;
    unordered_map<char, int> map2;
    int i;
    char temp;
    cin >> str1;
    
    for (i = 0; i < str1.length(); i++){
        temp = str1[i];
        if(map1.find(temp )==map1.end()){
            map1[temp] = 1;
        }
        else{
            map1[temp]++;
        }
    }
    for (i = 0; i < str2.length(); i++){
        temp = str2[i];
        if(map2.find(temp )==map2.end()){
            map2[temp] = 1;
        }
        else{
            map2[temp]++;
        }
    }
    int ans = 0;
    unordered_map<char, int>::iterator itr1;
    unordered_map<char, int>::iterator itr2;
    for(itr1 = map1.begin(); itr1 != map1.end(); itr1++){
        temp = itr1->first;
        if(map2.find(temp) != map2.end()){
            ans += min(map1[temp], map2[temp]);
        }
    }
    cout << ans << endl;
    return 0;
}
