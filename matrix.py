# matrix.py

test = int(input())
while(test):
    test -= 1

    n = int(input())
    arr = list(map(int, input().split()))
    for i in range(n - 1):
        input()
    row1 = []
    for i in range(1, n + 1):
        if(arr[i - 1] == i):
            row1.append(True)
        else:
            row1.append(False)
    

    ans = 0
    for i in range(n):
        if(row1[i]):
            wasPrevTrue = True
        else:
            if(wasPrevTrue):
                ans += 2
                wasPrevTrue = False
    try:
        if(not row1[1]):
            ans -= 1
    except:
        pass
    print(ans)