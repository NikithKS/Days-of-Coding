n = int(input())
inp = list(input().split())

arr = []
for i in inp:
    s = int(max(i))*11 + int(min(i))*7
    arr.append(s%100)

ans = 0
eve = []
odd= []
if(n%2 != 0):
    eve.append(arr[n-1]//10)
    n -= 1

for i in range(0, n, 2):
    eve.append(arr[i]//10)
    odd.append(arr[i+1]//10)

print(eve, odd)
dig = list(range(10))

for i in dig:
    ceve = eve.count(i) >> 1
    codd = odd.count(i) >> 1
    ans += min(ceve+codd, 2)

print(ans)
