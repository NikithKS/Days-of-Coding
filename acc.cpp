// discrete accleration

#include<iostream>
using namespace std;

int timeTo(){

}

int main(){
    int test, chks, dist, i, j, toNextS, toNextE, time, speedS, speedE;
    cin >> test;
    while(test--){
        cin >> chks >> dist;
        int checkPoints[chks + 2];
        for (int i = 1; i <= chks; i++){
            cin >> checkPoints[i];
        }
        checkPoints[0] = 0;
        checkPoints[chks + 1] = dist;
        i = 0;
        j = chks;
        time = 0;
        toNextS = checkPoints[i + 1];
        toNextE = dist - checkPoints[j];
        while(i < j){
            if(toNextE < toNextS){
                i++;
                toNextS -= toNextE;
                time += toNextE;
                speedS++;
                toNextE = timeTo();
            }
        }
    }
}