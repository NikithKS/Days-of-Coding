// https://www.codechef.com/IEM82020/problems/IEMCO02

// Runtime error


#include<stdio.h>
#include<regex.h>
#include<string.h>

char list1[7][4] = {"(A)", "(B)", "(C)", "(D)", "(E)", "(F)"};
char list2[7][8] = {"ACov(A)", "BCov(B)", "CCov(C)", "DCov(D)", "ECov(E)", "FCov(F)"};

float chkMark(char* str,int index){
    float retVal = 0;
    regex_t expr;

    if(index >= 0 && index < 6){
        if(strcmp(str, list2[index]) == 0){
            retVal = 1;
        }
        else{
            regcomp(&expr, list1[index], 0);
            if(regexec(&expr, str, 0, NULL, 0) == 0){
                retVal = 0.5;
            }
        
        
            else{
                int i = 0;
                while(i < 5 && str[i] != '\0'){
                    if(str[i] != list1[index][i]){
                        break;
                    }
                }
                if(str[i] == list1[index][i]){
                    retVal = 0.5;
                }
            }
        }
    }
    return retVal;
}

void main(void){
    int isDone[6] ={0};
    float ans = 0, mark;
    char letter1;
    char input[20];
    int index; 

    for (int i  = 0; i < 6; i++){
        scanf("%s", input);
        letter1 = input[0];
        index = (int)(letter1) - 65;
        mark = chkMark(input, index);
        if( mark > 0){
            if( isDone[index] == 0){
                if (mark == 0.5){
                    isDone[index] = 1;
                }
                else{
                    isDone[index] = 2;
                }
                ans += mark;
            }
            else if(isDone[index] == 1){
                if( mark == 1){
                    isDone[index] = 2;
                    ans += 1;
                }
            }
        }
    }
            printf("%f\n", ans);

}