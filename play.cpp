// https://www.codechef.com/problems/TOWIN

#include <iostream>
using namespace std;
int main()
{
    int t, temp, n, i;
    long long int score1, score2;
    bool play1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            cin >> score1;
            cout << "first" << endl;
            continue;
        }
        cin >> score1;
        cin >> score2;
        if (n > 2)
        {
            play1 = false;
            i = 2;
            while (i < n)
            {
                // cout << "SCORE:" << score1 << " " << score2 << endl;
                cin >> temp;
                if (play1)
                {
                    score1 += temp;
                    play1 = false;
                }
                else
                {
                    score2 += temp;
                    play1 = true;
                }
                i++;
            }
        }
        if (score1 > score2)
        {
            cout << "first" << endl;
        }
        else if (score1 < score2)
        {
            cout << "second" << endl;
        }
        else
        {
            cout << "draw" << endl;
        }
    }
    return 0;
}