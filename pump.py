def distance():
    from itertools import combianitons
    l = len(less)

    combs = []
    for i in range(2, l+1):
        combs = combianitons(less, i)

    dist = diff
    for i in combs:
        s = sum(i)
        if(abs(s - diff) < dist):
            close = s
            dist = abs(s - diff)
            if(dist == 0):
                break
    return close

arr = list(map(int, input().split()))

arr.sort(reverse = True)

sum1 = 0
arr1 = []
sum2 = 0
arr2 = []

for i in arr:
    if(sum1 < sum2):
        sum1 += i
        arr1.append(i)
    else:
        sum2 += i
        arr2.append(i)

diff = abs(sum1 - sum2)/2
ind = 0

less = []
if(sum1 < sum2):
    for i in arr2[::-1]:
        if(i > diff):
            break
        elif(i == diff):
            sum2 -= diff
            break
        less.append(i)
        c = distance()
        sum1 += c
        sum2 -= c
else:
    for i in arr1[::-1]:
        if(i > diff):
            break
        if(i == diff):
            sum1 -= diff
            break
        less.append(i)
        d = distance()
        sum1 -= c
        sum2 += c

print(max(sum1, sum2))
