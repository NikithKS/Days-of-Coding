def solve(arr):
    no = False
    ors = []
    for i in range(n+1):
        for j in range(i+1, n+1):
            x = arr[i:j].copy()
            currentOR = x[0]
            for j in range(1,j-i):
                currentOR = (currentOR | x[j])
            if(currentOR in ors):
                no = True
                break
            else:
                ors.append(currentOR)
        if(no):
            break

    if(no):
        print("NO")
    else:
        print("YES")
    return

test = int(input())
for _ in range(test):
    n = int(input())
    inp = input().split()
    numbers = [int(i) for i in inp]
    solve(numbers)
