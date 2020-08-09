#include<stdio.h>

int main(void){
    int n, i, j, count, chars = 0, i2, j2;
    scanf("%d", &n);
    char arr[3][n];
    char ans[n];
    for( i = 0; i < 3; i++){
        for( j = 0; j < n; j++){
           scanf(" %c", &arr[i][j]);
        }
    }

    i = 0;
    while(i < n){
        // printf("c=%d\n", chars);
        if(arr[0][i] == '#'){
            ans[chars] = '#';
            i++;
        }
        else{
            if(arr[0][i] == '.'){
                if(arr[1][i] == '.'){
                    i++;
                    continue;
                }
            }
            count = 0;
            for (j2 = 0; j2 < 3; j2++){
                for (i2 = i; i2 < i + 3; i2++){
                    if(arr[j2][i2] == '*'){
                        count++;
                    }
                }
            }
            // count = getcount(i, arr);
            if(count == 6){
                ans[chars] = 'A';
            }
            else if(count == 9){
                ans[chars] = 'E';
            }
            else if(count == 8){
                ans[chars] = 'O';
            }
            else if(count == 7){
                if(arr[1][i] == '*'){
                    ans[chars] = 'U';
                }
                else{
                    ans[chars] = 'I';
                }
            }
            else{
                // printf("Invalid count: %d-%d\n", count, i);
            }
            i += 3;
        }
        chars++;
    }
    for (i = 0; i < chars; i++){
        printf("%c", ans[i]);
    }
    printf("\n");
    return 0;
}