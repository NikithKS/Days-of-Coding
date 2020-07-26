/*
Minimum Distances
https://www.hackerrank.com/challenges/minimum-distances/problem?h_r=internal-search
*/
#include<stdio.h>
#include<stdlib.h>

struct hash{
    int ele;
    int ind;
    struct hash *next;
};
struct hash *head = NULL;

int dist = __INT32_MAX__;
int show(){
    struct hash *temp = head;
    while(temp != NULL){
        printf("%d--%d ", temp->ele, temp->ind);
        temp = temp->next;
    }
    printf("\n");
}

int look(int num, int index){
    struct hash *temp = head;
    int curdist;
    while(temp != NULL){
        if(temp->ele == num){
            curdist = index - (temp->ind);
            if(curdist < dist){
                dist = curdist;
            }
            temp->ind = index;
            break;
        }
        temp = temp->next;
    }

    if(temp == NULL){
        struct hash *temp2 = (struct hash*) malloc(sizeof(struct hash));
        temp2->ele = num;
        temp2->ind = index;
        temp2->next = head;

        head = temp2;
        return 1;
    }
    return 0;
}
void main(void){
    int n, temp, noRepeatFlag = 1;
    scanf("%d", &n);
    for( int i = 0; i < n; i++){
        scanf("%d", &temp);
        noRepeatFlag *= look(temp, i);
        // show();
    }
    if(noRepeatFlag == 0){
        printf("%d\n", dist);
    }
    else{
        printf("-1\n");
    }
}