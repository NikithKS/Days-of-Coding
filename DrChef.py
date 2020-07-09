test = int(input())

for _ in range(test):
    inp = input().split()
    x = int(inp[1])
    n = int(inp[0])

    # arr = list(map(int, input().split()))
    arr = input().split()

    pop = int(arr[0])
    days = 0
    while(x < pop):
        x = x << 1;
        days += 1

    print(days + n)
