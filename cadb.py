minlen = int(input())
maxlen = int(input())
minwid = int(input())
maxwid = int(input())

ans = 0
for i in range(minlen, maxlen+1):
    for j in range(minwid, maxwid+1):
        len = i
        while(len != j):
            if(len > j):
                len -= j
            else:
                j -= len
            ans += 1
        ans += 1

print(ans)
