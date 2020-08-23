# kFold.py

test = int(input())
while(test):
    test -= 1
    n, k = list(map(int, input().split()))
    str = input()
    c1 = str.count('1') 
    c0 = str.count('0') 

    strlen = int(n / k)
    if(c1 % strlen != 0 or c0 %strlen != 0):
        print("IMPOSSIBLE")
    else:
        inAstr0 = c0 / strlen
        inAstr1 = c1 / strlen
        flag = True
        string = '0' * int(inAstr0) + '1' * int(inAstr1)
        revString = string[::-1]
        ans = ''
        
        for _ in range(strlen):
            if(flag):
                ans += string
                flag = False
            else:
                ans += revString
                flag = True

        print(ans)

