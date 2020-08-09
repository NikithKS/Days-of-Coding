# tcs3.py
import numpy

def srch(arr, key, lo, hi):
    if(hi <= lo):
        return lo
    else:
        mid = ( hi + lo) // 2
        
        if arr[mid] == key:
            return mid
        elif arr[mid] > key:
            return srch(arr, key, lo, mid)
        return srch(arr, key, mid +1 , hi)



nk = input().split()
n = int(nk[0]) - 1
k = int(nk[1])

inp = list(map(int, input().split()))
inp.sort()

arr = numpy.array(inp)

for _ in range(k):
    m = arr[n]
    arr = numpy.delete(arr,n)
    m = m >> 1
    ind = srch(arr, m, 0, n)
    arr = numpy.insert(arr, ind, m)
    # print(arr)
    # arr.append(m)


print(sum(arr))