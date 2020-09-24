#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue <pair<int, int>> waiting;
        queue <pair<int, int>> temp;
        // int waiting = 0, inTemp = 0;
        int rotten = 0, ripe = 0, days = 0;
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == 1){
                    ripe++;
                }
                else if(grid[i][j] == 2){
                    waiting.push(make_pair(i, j));
                    days = -1;
                }
            }
        }
        int x, y;
        int Glen = grid[0].size(), Gheight = grid.size();
        // pair(int, int) tempPair;
        while(!waiting.empty()){
            while(!waiting.empty()){
                // tempPair = waiting.front();
                x = waiting.front().first;
                y = waiting.front().second;
                cout << days <<" :"<< x << " " << y << endl;
                waiting.pop();
                if(x != 0){
                    if(grid[x - 1][y] == 1){
                        ripe--;
                        grid[x - 1][y] = 2;
                        temp.push(make_pair(x - 1, y));
                    }
                }
                if(x != Gheight - 1){
                    if(grid[x + 1][y] == 1){
                        ripe--;
                        grid[x + 1][y] = 2;
                        temp.push(make_pair(x + 1, y));
                    }
                }
                if(y != 0){
                    if(grid[x][y - 1] == 1){
                        grid[x][y - 1] = 2;
                        ripe--;
                        temp.push(make_pair(x, y - 1));
                    }
                }
                if(y != Glen - 1){
                    if(grid[x][y + 1] == 1){
                        ripe--;
                        grid[x][y + 1] = 2;
                        temp.push(make_pair(x, y + 1));
                    }
                }
            }
            days++;
            while(!temp.empty()){
                waiting.push(temp.front());
                temp.pop();
            }
        }
        
        if(ripe != 0){
            return -1;
        }
        else{
            return days;
        }
    }
};

int main(){
    vector<vector<int>> cal = {{2, 1 , 1}, {1, 1, 0}, {0, 1, 1}};
    Solution obj;
    cout << obj.orangesRotting(cal) << endl;
}