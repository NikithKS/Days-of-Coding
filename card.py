# https://www.codechef.com/AUG20B/problems/CRDGAME3

test = int(input())

def ceil(n):
    if(n > int(n)):
        return int(n) + 1
    return int(n)

for _ in range(test):
    ab = input().split()
    a = int(ab[0])/9
    b = int(ab[1])/9

    a = ceil(a)
    b = ceil(b)

    if(a < b):
        print("0",a)
    else:
        print("1",b)
