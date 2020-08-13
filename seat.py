# seat.py

test = int(input())
arr0 = [1, 11, 9, 7, 5, 3]
arr1 = [11, 1, 3, 5, 7, 9]
while(test):
    test -= 1

    m = int(input())
    if(m % 6 == 0):
        q = (m / 6) - 1
    else:
        q = m // 6
    q = q % 2
    r = m % 6
    print("RQ-", r, q)
    if (q):
        if(r == 0 or r == 1):
            print(m - arr1[r], "WS")
        elif(r == 2 or r == 5):
            print(m - arr1[r], "MS")
        else:
            print(m - arr1[r], "AS")
    else:
        if(r == 0 or r == 1):
            print(m + arr0[r], "WS")
        elif(r == 5 or r == 2):
            print(m + arr0[r], "MS")
        else:
            print(m + arr0[r], "AS")
