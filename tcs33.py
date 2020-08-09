# tcs33.py

n,k = input().split()
arr = list(map(int ,input().split()))
k=int(k)
while k:
  k-=1
  temp = (max(arr)//2)
  arr.remove(max(arr))
  arr.append(temp)

print(sum(arr))

#minimize the sum