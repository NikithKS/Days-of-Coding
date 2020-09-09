# csfSwap.py
test = int(input())
while(test):
    test -= 1
    n = int(input())
    total = 0
    for i in range(n + 1):
        total += i
    
    if(total % 2 != 0):
        print(0)
        continue

    half = total / 2
    ans = 0
    left = 0
    right = total
    for i in range(1, n + 1):
        left += i
        right -= i
        if(left == right):
            ans += (i * (i - 1)) >> 1
            ans += ((n - i - 1) * (n - i)) >> 1
            continue            
        shift = right - half
        if(1 + shift > i and 1 + shift <= n):
            if(i + shift <= n):
                ans += i
            else:
                ans += n - i
        
        elif(i + 1 - shift <= i and i + 1 - shift > 0):
            if(n - shift <= i and n > shift):
                ans += n - i
            else:
                ans += i
    print(int(ans))
