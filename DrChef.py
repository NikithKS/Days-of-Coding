def reach(a, b):
    print("Reach-",a, b, end= " ")
    count = 0
    if (a <= b):
        count = 1
    else:
        while (a > b):
            b = b << 1
            count += 1
    print(count)
    return count

test = int(input())

for _ in range(test):
    inp = input().split()
    x = int(inp[1])
    n = int(inp[0])
    days = 0

    arr = list(map(int, input().split()))
    arr.sort(reverse = True)

    if(arr[0] <= x):
        print(n)
        continue



    startAt = n
    if ((arr[n - 1] < x)):
        while(arr[startAt - 1] <= x):
            startAt -= 1

        # if(arr[startAt] == x):
        #     arr[startAt] = x << 1
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
