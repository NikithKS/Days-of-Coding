# wed.py


test = int(input())
while(test):
    test -= 1
    n, k = list(map(int, input().split()))
    arr = input().split()
    ans = k
    hash = {}
    i = n - 1
    fighters = 0
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