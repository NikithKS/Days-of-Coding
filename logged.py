def minimumSteps(loggedMoves):
    ans = 0
    for i in loggedMoves:
        if (i == "../"):
            ans -= 1
        elif(i == "./"):
            pass
        else:
            ans += 1
    return ans

l = ['x/', 'y/', '../', 'z/', './']
print(minimumSteps(l))