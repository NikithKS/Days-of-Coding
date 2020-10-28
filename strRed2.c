
#include<stdio.h>
#include<string.h>

int getMinDeletions(char* s){
    int l = strlen(s);
    int isin[26] = {0};
    int pre = (int)s[0] - 97, cur, ans = 0;
    isin[pre] = 1;

    for(int i = 1; i < l; i++){
        cur = (int)s[i] - 97;
        if(isin[cur] == 1){
            ans++;
            continue;
        }
        else
        {
            isin[cur] = 1;
        }
    }   
    return ans;
}

void main(){
    char* s = "abcabc";

    int ans = getMinDeletions(s);
    printf("%d\n", ans);
}