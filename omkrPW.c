#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    int n, difFlag, temp1, temp2, i;
    while (test--)
    {
        difFlag = 0;
        scanf("%d", &n);
        scanf("%d", &temp1);
        for (i = 1; i < n; i++){
            scanf("%d", &temp2);
            if(temp1 != temp2){
                difFlag = 1;
            }
        }
        if(difFlag){
            printf("1\n");        
        }
        else{
            printf("%d\n", n);
        }
    }
    return 0;
}