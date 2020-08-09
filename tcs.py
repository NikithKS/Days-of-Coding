# tcs.py

def check(n):
    c = 0
    for i in range(n, n + 3):
        if(row1[i] == '*'):
            c += 1
        if(row2[i] == '*'):
            c += 1
        if(row3[i] == '*'):
            c += 1
    return c

def isA(i):
    if(row2[i] == '*' and row3[i] == '*'):
            if(row1[i+1] == '*' and row2[i+1] == '*'):
                if(row2[i+2] == '*' and row3[i+2] == '*'):
                    return True
    
    return False

def isE(n):
    for i in range(n, n + 3):
        if(row1[i] != '*' or row2[i] != '*' or row3[i] != '*'):
            return False
    return True

def isI(n):
    for i in range(n, n+3):
        if(row1[i] != '*' or row3[i] != '*'):
            return False
    if(row2[n+1] != '*'):
        return False
    return True

def isO(n):
    for i in range(n, n+3):
        if(row1[i] != '*'):
            return False
    for i in range(n, n+3):
        if(row3[i] != '*'):
            return False
    if(row2[n] == '*' and row2[n+2] == '*'):
        return True
    return False

def isU(n):
    if(row1[n]==row1[n+2] and row1[n] == '*'):
        if(row2[n]==row1[n+2] and row2[n] == '*'):
            for i in range(n, n+3):
                if(row3[i] != '*'):
                    return False
            return True
    return False

def isH(n):
    if(row1[n] == '#' and row2[n] == '#' and row3[n] == '#'):
        return True
    return False

n = int(input())

row1 = input()
row2 = input()
row3 = input()

i = 0
ans = ''
while(i < n):
    print(i)
    if(isE(i)):
        ans += 'E'
    elif(isA(i)):
        ans += 'A'
    elif(isO(i)):
        ans += 'O'
    elif(isI(i)):
        ans += 'I'
    elif(isU(i)):
        ans += 'U'
    elif(isH(i)):
        ans += '#'
        i -= 2
    else:
        i -= 2
    i += 3

print(ans)

