"""
Doctor Chef

Chef is multi-talented. He has developed a cure for coronavirus called COVAC-19. Now that everyone in the world is infected, it is time to distribute it throughout the world efficiently to wipe out coronavirus from the Earth. Chef just cooks the cure, you are his distribution manager.

In the world, there are N
countries (numbered 1 through N) with populations a1,a2,…,aN. Each cure can be used to cure one infected person once. Due to lockdown rules, you may only deliver cures to one country per day, but you may choose that country arbitrarily and independently on each day. Days are numbered by positive integers. On day 1, Chef has x

cures ready. On each subsequent day, Chef can supply twice the number of cures that were delivered (i.e. people that were cured) on the previous day. Chef cannot supply leftovers from the previous or any earlier day, as the cures expire in a day. The number of cures delivered to some country on some day cannot exceed the number of infected people it currently has, either.

However, coronavirus is not giving up so easily. It can infect a cured person that comes in contact with an infected person again ― formally, it means that the number of infected people in a country doubles at the end of each day, i.e. after the cures for this day are used (obviously up to the population of that country).

Find the minimum number of days needed to make the world corona-free.


Input:
    The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and x.
The second line contains N space-separated integers a1,a2,…,aN.

Output:
    For each test case, print a single line containing one integer ― the minimum number of days.
Constraints

    1≤T≤103
    1≤N≤105
    1≤ai≤109 for each valid
    i1≤x≤109
the sum of N over all test cases does not exceed 106


Example Input
    3
    5 5
    1 2 3 4 5
    5 1
    40 30 20 10 50
    3 10
    20 1 110

Example Output

    5
    9
    6



"""
test = int(input())

for _ in range(test):
    inp = input().split()
    x = int(inp[1])
    n = int(inp[0])
    days = 0

    arr = list(map(int, input().split()))

    arr.sort()
    if(arr[n - 1] <= x):
        print(n)
        continue

    days = 0
    idx = 0

    while (idx < n):
        if (x < arr[idx]):
            days += 1
            x = x << 1
        elif ((arr[idx] << 1) >= x):
            days += 1
            x = arr[idx] << 1
            arr[idx] = 0
            idx += 1
        else:
            idx += 1

    for i in range (n):
        if(arr[i] > 0):
            days += 1

    print(days)
