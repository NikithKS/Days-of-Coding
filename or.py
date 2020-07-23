test = int(input())

for _ in range(test):
    ors = []

    n = int(input())
    arr = list(map(int, input().split()))
    tot = arr[0]

    while(len(arr) != 1):
        for i in arr:
            if(i in ors):
                noflag = True
                break
            else:
                ors.append(i)
                tot = (tot | i)
                if(tot in ors):
                    noflag = True
                    break
        if(noflag):
            break

    if(noflag):
        print("NO")
    else:
        print("YES")
