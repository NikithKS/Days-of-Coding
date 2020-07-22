n = input()
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

m1 =max(arr1)
m2 =max(arr2)
count = 0

if(m1 > m2):
    for i in arr1:
        if(i >= m2):
            count += 1
elif(m1 < m2):
    for i in arr2:
        if(i >= m1):
            count += 1

print(count)
