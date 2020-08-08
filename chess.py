# https://www.codechef.com/AUG20B/problems/LINCHESS

test = int(input())

for _ in range(test):
    nk = input().split()
    k = int(nk[1])
    arr = list(map(int, input().split()))

    min = 1001
    ans = -1
    for i in arr:
        if(k % i == 0):
            if ans < i:
                ans = i
    
    print(ans)