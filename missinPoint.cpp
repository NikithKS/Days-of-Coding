/*
Chef has N axis-parallel rectangles in a 2D Cartesian coordinate system. These rectangles may intersect, but it is guaranteed that all their 4N vertices are pairwise distinct.

Unfortunately, Chef lost one vertex, and up until now, none of his fixes have worked (although putting an image of a point on a milk carton might not have been the greatest idea after all…). Therefore, he gave you the task of finding it! You are given the remaining 4N−1 points and you should find the missing one.
Input
  The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
Then, 4N−1 lines follow. Each of these lines contains two space-separated integers x and y denoting a vertex (x,y) of some rectangle.

Output
  For each test case, print a single line containing two space-separated integers X
and Y ― the coordinates of the missing point. It can be proved that the missing point can be determined uniquely.
Constraints

    T≤100
    1≤N≤2⋅105
    |x|,|y|≤109
    the sum of N over all test cases does not exceed 2⋅105


Example Input

1
2
1 1
1 2
4 6
2 1
9 6
9 3
4 3

Example Output

2 2

*/

#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        unordered_set<int> set1,set2;
        int n, a, b;
        cin>>n;
        for(int i=0;i<((4*n)-1);i++)
        {
            cin>>a>>b;
            if(set1.count(a))
            {
                set1.erase(a);
            }
            else
            {
                set1.insert(a);
            }
            if(set2.count(b))
            {
                set2.erase(b);
            }
            else
            {
                set2.insert(b);
            }
        }

        cout<<(*(set1.begin()))<<" "<<(*(set2.begin()))<<endl;
    }
    return 0;
}
