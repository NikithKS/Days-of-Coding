# stick.py

test = int(input())
while(test):
    test -= 1
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()

    if(arr[n - 1] == 0):
        print(0)
        continue
    
    if(arr[0] == 0):
        ans = 0
    else:
        ans = 1
    
    for i in range(0, n - 1):
        if(arr[i] < arr[i + 1]):
            ans += 1
    
    print(ans)