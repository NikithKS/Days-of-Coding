# wed.py
def chkFrom(i, ans):
    fighters = 0
    hash = {}
    while(i < n):
        ele = arr[i]
        try:
            count = hash[ele]
            if(fighters == 0):
                j = i
                j = i
            fighters += 1
            if(count == 1):
                fighters += 1
            hash[ele] += 1
            if(fighters > k):
                ans += k
                return chkFrom(j, ans)
        except:
            hash[ele] = 1
        i += 1
    return ans + fighters

test = int(input())
while(test):
    test -= 1
    n, k = list(map(int, input().split()))
    arr = input().split()
    print(chkFrom(0, k))

    exit(0)
    i = n - 1
    fighters = 0
    ans = k
    hash = {}


    while(i >= 0):
        ele = arr[i]
        try:
            count = hash[ele]
            hash[ele] += 1
            fighters += 1
            if(count == 1):
                fighters += 1

            if (fighters > k):
                ans += k
                fighters = 0
                hash = {}
                hash[ele] = 1
        except:
            hash[ele] = 1
        i -= 1
            
    
    print(ans + fighters)