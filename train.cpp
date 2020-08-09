#include <iostream> 
#include <unordered_map> 
using namespace std; 
  
int main() {
    unordered_map<int, int> umap; 
    int n, a, b, i;
    cin>>n;
    while(n--){
        cin>>a>>b;
        for(i = a; i <= a+b; i++){
            if (umap.find(i) != umap.end()) {
                umap[i]++;
            }
            else{
                umap[i] = 1;
            }
        }
    }
    int max = 0;
    unordered_map<int, int>:: iterator itr; 
    for (itr = umap.begin(); itr != umap.end(); itr++){
        if(itr->second > max){
            max = itr->second;
        }
    }
    cout<<max<<endl;
}