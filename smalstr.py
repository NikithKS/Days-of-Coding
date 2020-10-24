def smallestString(s):
    l = len(s)
    s = list(s)
    chk = True
    while(chk):
        chk = False
        for i in range(l - 1):
            if(s[i] == 'b'):
                if(s[i + 1] == 'a'):
                    chk = True
                    s[i] = 'a'
                    s[i + 1] = 'b'
            elif(s[i] == 'c'):
                if(s[i + 1] == 'b'):
                    chk = True
                    s[i] = 'b'
                    s[i + 1] = 'c'
    return ''.join(s)

print(smallestString(input()))