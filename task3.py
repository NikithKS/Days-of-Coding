def solution(arr1, arr2):
    sum1 = sum(arr1)
    sum2 = sum(arr2)
    if(sum1 != sum2):
        print(0)
        exit(0)

    right1 = 0
    right2 = 0
    left1 = sum1
    left2 = sum2
    count = 0

    for i in range(n - 1):
        right1 += arr1[i]
        left1 -= arr1[i]
        right2 += arr2[i]
        left2 -= arr2[i]
        if(right1 == right2):
            if(left1 == left2):
                # print(i+1)
                count += 1

    print(count)


n = int(input())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

solution(arr1, arr2)
