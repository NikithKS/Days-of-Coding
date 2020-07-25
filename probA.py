# CodeForces Common Prefix
# https://codeforces.com/contest/1384/problem/A


import random
def show():
    for i in ans:
        print(i, end="")
    print()

def randn(num):
    n = num
    while(n == num):
        n = random.randint(0, 25)
    return n


alp = list("abcdefghijklmnopqrstuvwxyz")
ans = alp + alp

test = int(input())
for _ in range(test):
    input()
    arr = list(map(int, input().split()))

    show()
    for i in arr:

        ans[i] = alp[(randn(ord(ans[i]) - 97))]
        show()
