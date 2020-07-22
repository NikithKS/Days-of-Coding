import numpy as np
n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=0
if(max(a)>max(b)):
    print("mohan")
    for i in range(n):
        if(a[i]>max(b)):
            c+=1
    print(c)
if(max(b)>max(a)):
    print("jeevan")
    for i in range(n):
        if(b[i]>max(a)):
            c+=1
    print(c)
if(max(a)==ma(b)):
    print('tie')
