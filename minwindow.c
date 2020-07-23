/*
Minimum Window Substring - Leet Code
https://leetcode.com/problems/minimum-window-substring/submissions/

*/
#include<stdio.h>
#include<string.h>


int check(int *tarr,int *sarr){
  for(int i = 0; i < 52; i++){
    if(tarr[i] > sarr[i]){
      return 0;
    }
  }
  return 1;
}

int getind(char c){
    int as = (int) c;
    // printf("%d ", as);
    if(as < 90){
        return as-65;
    }
    else{
        return as-71;
    }
}


char * minWindow(char *s, char *t){
    int i, j, ind;
    int tcount[52] = {0};
    int scount[52] = {0};
    int ns = strlen(s);
    int nt = strlen(t);

    for (i = 0; i < nt; i++){
      tcount[getind(t[i])]++;
    }
    j = 0;
    i = 0;
    int start = 0, end = 0, dist = ns + 1, cur;
    while(j < ns){
      if(check(tcount, scount) == 0){
        scount[getind(s[j])]++;
        j++;
      }
      else{
        cur = j - i;
        if(cur < dist){
          dist = cur;
          start = i;
          end = j;
        }
        scount[getind(s[i])]--;
        i++;
      }
    }
    while(check(tcount, scount) == 1){
      cur = j - i;
      if(cur < dist){
        dist = cur;
        start = i;
        end = j;
      }
      scount[getind(s[i])]--;
      i++;
    }

    for (i = start; i < end; i++){
      s[i - start] = s[i];
    }
    s[end - start] = '\0';
    return s;
}

void main(void){
  char s[6] = "aabbaa";
  char t[4] = "aba";
  char* ans = minWindow(s, t);
  for(int i = 0; i < strlen(ans); i++){
    printf("%c", ans[i]);
  }
}
