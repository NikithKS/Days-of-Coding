#https://www.codechef.com/AUG20B/problems/CHEFWARS


test = int(input())
for _ in range(test):
    inp = input().split()
    b = int(inp[1])
    a = int(inp[0])

    if(a < b*2):
        print(1)
    else:
        print(0)
