# freq.py

test = int(input())
while(test):
    test -= 1
    n = int(input())
    arr = list(map(int, input().split()))

    hashMap = {}
    for i in arr:
        try:
            hashMap[i] += 1
        except:
            hashMap[i] = 1
    
    # print(hashMap)
    hashMap2 = {}
    for i in hashMap.keys():
        try:
            hashMap2[hashMap[i]] += 1
        except:
            hashMap2[hashMap[i]] = 1
    # print(hashMap2)
    # ans = 0
    maxF = 0

    for i in hashMap2.keys():
        ele = hashMap2[i]
        if(ele > maxF):
            maxF = hashMap2[i]
            ans = i
        elif(ele == maxF):
            if(i < ans):
                ans = i

    print(ans)
