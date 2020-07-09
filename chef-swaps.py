"""Chefina has two sequences A1,A2,…,AN and B1,B2,…,BN. She views two sequences with length N as identical if, after they are sorted in non-decreasing order, the i-th element of one sequence is equal to the i-th element of the other sequence for each i (1≤i≤N).

To impress Chefina, Chef wants to make the sequences identical. He may perform the following operation zero or more times: choose two integers i
and j (1≤i,j≤N) and swap Ai with Bj. The cost of each such operation is min(Ai,Bj).

You have to find the minimum total cost with which Chef can make the two sequences identical.

Input:
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.
The third line contains N space-separated integers B1,B2,…,BN.

Output:
For each test case, print a single line containing one integer ― the minimum cost, or −1 if no valid sequence of operations exists.

Constraints:
    1≤T≤2000
    1≤N≤2⋅105
    1≤Ai,Bi≤109

    for each valid i the sum of N over all test cases does not exceed 2⋅10^6

Example Input:
3
1
1
2
2
1 2
2 1
2
1 1
2 2

Example Output:
-1
0
1

"""

test = int(input())

for _ in range(test):
    n = int(input())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    exitFlag = False
    mini = 2 << 30
    elements = set()
    toMoveA = []
    toMoveB = []
    lenA = 0
    lenB = 0

    freq1 = {}
    freq2 = {}
    for i in arr1:
        if (i in freq1):
            freq1[i] += 1
        else:
            freq1[i] = 1
            freq2[i] = 0
            elements.add(i)

    for i in arr2:
        if (i in freq2):
            freq2[i] += 1
        else:
            freq2[i] = 1
            if i not in elements:
                freq1[i] = 0
                elements.add(i)

    for i in elements:
        c1 = freq1[i]
        c2 = freq2[i]
        freq = c1 + c2
        if((c1 + c2) != ((freq >> 1) << 1)):
            exitFlag = True
            break

        if(mini > i):
            mini = i

        if(c1 < c2):
            for j in range((c2 - c1) >> 1):
                toMoveB.append(i)
                lenB += 1
        elif(c2 < c1):
            for j in range((c1 - c2) >> 1):
                toMoveA.append(i)
                lenA += 1

    if(lenA != lenB):
        exitFlag = True

    if(exitFlag):
        print(-1)
        continue

    toMoveA.sort()
    toMoveB.sort()

    mini *= 2

    lessMinA = 0
    lessMinB = 0
    for i in toMoveA:
        if i > mini:
            break
        lessMinA += 1
    greatMinA = lenA - lessMinA

    for i in toMoveB:
        if i > mini:
            break
        lessMinB += 1
    greatMinB = lenB - lessMinB

    cost = 0

    if(lessMinA <= greatMinB):
        for i in toMoveA[:lessMinA]:
            cost += i
        for i in toMoveB[:lessMinB]:
            cost += i
        cost += (mini * (greatMinA - lessMinB))

    else:
        for i in toMoveA[:(greatMinB)]:
            cost += i
        for i in toMoveB[:(greatMinA)]:
            cost += i

        i = greatMinB
        j = greatMinA
        for k in range(lessMinB - greatMinA):
            if(toMoveA[i] < toMoveB[j]):
                cost += toMoveA[i]
                i += 1
            else:
                cost += toMoveB[j]
                j += 1


    print(cost)
