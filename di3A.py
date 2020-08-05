# https://codeforces.com/contest/1399/problem/A



test = int(input())

for _ in range(test):
    input()
    arr = list(map(int, input().split()))
    arr.sort()
    l = len(arr)
    if(l == 1):
        print("YES")
        continue
    else:
        noflag = False
        for i in range(1,l):
            if(arr[i] - arr[i-1] > 1):
                noflag = True
                break
        
    if(noflag):
        print("NO")
    else:
        print("YES")