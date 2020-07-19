test = int(input())
alp= "qwertyuiopasdfghjklzxcvbnm"

for _ in range(test):
    n = int(input())
    str = input()
    flag = True
    for i in alp:
        c = str.count(i)
        if(c != (c>>1)<<1):
            print("NO")
            flag = False
            break
    if(flag):
        print("YES")
