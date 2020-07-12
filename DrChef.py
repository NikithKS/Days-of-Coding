def reach(a, b):
    # print("Reach-",a, b, end= " ")
    count = 0
    if (a >= b):
        count = 1
    else:
        b2 = b
        while (b != 0):
            a = a << 1
            b = min(max(0, (b - a)) << 1, b2)
            count += 1
    # print(count)
    return count

test = int(input())

for _ in range(test):
    inp = input().split()
    x = int(inp[1])
    n = int(inp[0])
    days = 0

    arr = list(map(int, input().split()))
    arr.append(x)
    arr.sort()

    if(arr[n] <= x):
        print(n)
        continue

    days = 0
    ind = arr.index(x)
    for i in range(ind + 1, n):
        days += reach(arr[i], arr[i + 1])

    if(ind != 0):
        days += min(reach(arr[ind - 1], arr[ind + 1]), reach(x, arr[ind + 1]) + 1)
    else:
        days += reach(x, arr[1]) + 1

    if(n == 1):
        days
    days += ind

    print(days)














"""
    if ((arr[n - 1] < x)):
        while(arr[startAt - 1] <= x):
            startAt -= 1

        if((arr[startAt - 1] / 2) <= (arr[startAt] << 1)):
            days = -1
        while(startAt < n):
            if((arr[startAt - 1]) <= (arr[startAt] << 1)):
                startAt += 1
                days = -1
            else:
                break

    print("Start={0} Day={1}".format(startAt,days))
    for i in range(startAt - 1):
        days += reach(arr[i], arr[i + 1])
    days += reach(arr[startAt - 1] , x)

    days += n - startAt + 1


    print(days)
"""
