def solution(a,b):
    incr = 2
    sum = 0
    count = 0
    while(sum <= b):
        if(sum >= a):
            count += 1
            print(sum)
        sum += incr
        incr += 2
    print(count)

a = int(input())
b = int(input())
solution(a, b)
