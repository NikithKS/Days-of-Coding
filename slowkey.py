q = int(input())
input()

keyboard = "abcdefghijklmnopqrstuvwxyz"
arr = input().split()

slowKey = int(arr[0])
slowest = int(arr[1])
key = int(arr[1])
q -= 1

while(q):
    q -= 1
    arr = input().split()
    arr[0] = int(arr[0])
    arr[1] = int(arr[1])
    time = arr[1] - key
    if(time > slowest):
        slowest = time
        slowKey = arr[0]
    key = arr[1]

print(keyboard[slowKey])

