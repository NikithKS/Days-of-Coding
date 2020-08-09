# train.py

n = int(input())
hash = {}
for _ in range(n):
    a,b = list(map(int, input().split()))
    for i in range(a, a+b+1):
        try:
            hash[i] += 1
        except:
            hash[i] = 1
    
print(max(hash.values()))
