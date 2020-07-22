n = input()
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

m1 =max(arr1)
m2 =max(arr2)
# print("MAX=", m1, m2)
if(m1 > m2):
    print("Mohan")
elif(m1 < m2):
    print("Jeevan")
else:
    print("Tie")
