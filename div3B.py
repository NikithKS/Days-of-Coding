# https://codeforces.com/contest/1399/problem/B



test = int(input())

for _ in range(test):
    n = int(input())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    min1 = min(arr1)
    min2 = min(arr2)
    count = 0
    for i in range(n):
        sub1 = arr1[i] - min1
        sub2 = arr2[i] - min2
        count += sub1 + sub2 - min(sub1, sub2)
        
    print(count)