def Del_char(S):
    large = S[0]
    index = 0
    cur = 0
    for i in S:
        if(i > large):
            index = cur
            large = i
        cur += 1

    ans = S[:index] + S[index+1:]
    return ans