"""
A witch of magic-land captured three prisoners who were trying to enter in magic-land without the permission of witch. The prisoners have distinct integral height. She gave them punishment called "Painful height change". In this punishment witch changes their height by using magic which gave them tremendous amount of pain and she enjoys that pain as a game.

The punishment is as follows:

She stand them in increasing order of their height. Now she wants to give them maximum pain. For this she chooses one of the outer prisoner (first or third prisoner) and changes his height to any integer value between the height of remaining 2 prisoners keeping that no two prisoners have same height and this process of punishment goes on. As she wants to give them maximum punishment, So she needs your help to find maximum numbers of valid moves she can make.

Input :
The first line contains the number of test cases T . Each test case consists of three space separated positive integer - P, Q and R representing the initial height of prisoners.

Output :
For each test case output maximum numbers of valid moves that witch can make.

Constraints :
1 ≤ T ≤ 100
1 ≤ P < Q < R ≤ 10^16


SAMPLE INPUT:

2
1 2 4
2 4 8


SAMPLE OUTPUT:
1
3
"""

# CODE:

test = int(input())

for _ in range(test):
    arr = list(map(int, input().split()))
    low = arr[1] - arr[0] - 1
    high = arr[2] - arr[1] - 1

    print(max(low, high))
