test = int(input())

for _ in range(test):
    num = int(input())
    c = 0
    while(num > 0):
        num //= 2
        c += 1
    print(c)
