arr = list(map(int, input().split()))

ans = []
mini = abs(arr[0] - arr [1])

ans.append([arr[0], arr[1]].sort())


l = len(arr)

for i in range(l-1):
    ele = arr[i]
    for j in range(i+1, l):
        diff = abs(ele - arr[j])
        if(diff == mini):
            list = [ele, arr[j]]
            ans.append(sorted(list))
        elif(diff < mini):
            ans = []
            list = [ele, arr[j]]
            ans.append(sorted(list))
            mini = diff

ans.sort()

for i in ans:
    for j in i:
        print(j, end = " ")
    print()
