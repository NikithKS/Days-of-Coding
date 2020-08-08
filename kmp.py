# https://www.codechef.com/AUG20B/problems/SKMP


test = int(input())
for _ in range(test):
    string = list(input())
    pattern = input()
    patternChars = list(pattern)

    for i in patternChars:
        string.remove(i)

    string.append(pattern)
    string.sort()

    first = patternChars[0]
    diff = first
    for i in patternChars:
        if(i != first):
            diff = i
            break

    if(diff < first):
        try:
            ind = string.index(first)
            string.remove(pattern)
            string.insert(ind, pattern)
        except:
            pass
    
    
    ans = ''.join(string)
    print(ans)

