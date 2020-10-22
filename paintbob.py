
def Kit_sol(N, arr):
    arr.sort(reverse = True)
    left = sum(arr)
    right = 0
    ans = 0
    for i in arr:
        if(left < right):
            break
        right += i
        left -= i
        ans += 1

    return ans

