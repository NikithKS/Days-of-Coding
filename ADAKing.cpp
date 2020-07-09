/*
Chef is playing a card game with his friend Morty Smith.

The rules of the game are as follows:

    There are two piles of cards, pile Aand pile B, each with N cards in it. Pile A belongs to Chef and pile B
belongs to Morty.
Each card has one positive integer on it
The ‘power’ of a card is defined as the sum of digits of the integer on that card
The game consists of N rounds
In each round, both players simultaneously draw one card each from the top of their piles and the player who draws the card with higher power wins this round and gets a point. If the powers of both players' cards are equal then they get 1 point each.
The winner of the game is the player who has more points at the end of N rounds. If both players have equal number of points then the game ends in a draw.

The game is now over and Chef has told Morty to find the winner. Unfortunately, this task is too complex for him. Help Morty find the winner.
Input:
    First line will contain T, number of testcases.
The first line of each test case will contain N, the number of rounds played.
The ith of the next N lines of each test case will contain Ai and Bi, the number on the card drawn by Chef and Morty respectively in round i.

Output:
For each test case, output two space separated integers on a new line:
Output
    0 if Chef wins,
    1 if Morty wins,
    2 if it is a draw, followed by the number of points the winner had.
    (If it is a draw then output either player’s points).

Constraints

    1≤T≤1000
    1≤N≤100
    1≤Ai,Bi≤109

Sample Input:

2
3
10 4
8 12
7 6
2
5 10
3 4

Sample Output:

0 2
2 1

*/

#include<bits/stdc++.h>
using namespace std;
int main(void)
{
  int test;
  cin>>test;
  while(test--)
  {
    int k;
    int i, j;
    cin>>k;
    char chess[8][8];
    chess[0][0]='O';
    k--;
    for (i=0;i<8;i++)
    {
      for (j=0;j<8;j++)
      {
        if(i==0 && j==0)
        {
          continue;
        }
        else if(k>0)
        {
          chess[i][j]='.';
          k--;
        }
        else
        {
          chess[i][j]='X';
        }

      }
    }

    for (i=0;i<8;i++)
    {
      for (j=0;j<8;j++)
      {
        cout<<chess[i][j];
      }
      cout<<endl;
    }
  }
    return 0;
}
