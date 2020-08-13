# suss.py

n = int(input())
arr = list(map(int, input().split()))

s = sum(arr)
rem = s % 7
ans = -1
min = 1000000001

for i in range(n):
    ele = arr[i]
    if ele < min:
        if ele % 7 == rem:
            min = ele
            ans = i
print(ans)
