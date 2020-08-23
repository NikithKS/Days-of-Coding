# poly.py

test = int(input())
while(test):
    test -= 1
    n = int(input())
    for _ in range(n):
        input()
    half = n // 2
    if(half < 3):
        half = 0
    n += half
    print(n)