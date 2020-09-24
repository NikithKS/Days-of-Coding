
f1 = open('tcs.cpp', 'r')

str = f1.readlines()
# str = input()

ans = str.count('a')
ans += str.count('A')
print(ans)