"""
Maximum candies - Codechef
https://www.codechef.com/LTIME86B/problems/CHECHOC
"""


test = int(input())

for _ in range(test):
    l = list(map(int,(input().split())))
    n ,m ,x, y = l
    if((x << 1) <= y):
        ans = x * n * m
    
    elif (n == 1 and m == 1):
        ans = x
    
    elif (n == 1 or m == 1):
        m = max(n, m)
        ans = (y * m) >> 1
        if (m % 2 != 0):
            ans += x
    
    else:
        if(x > y):
            x = y
            
        r1 = y * (m // 2)
        r2 = r1
        if(m % 2 != 0):
            r1 += x
            r2 += y - x
        
        ans = (r1 + r2) * (n >> 1)
        if (n % 2 != 0):
            ans += r1
    
    print(ans)
