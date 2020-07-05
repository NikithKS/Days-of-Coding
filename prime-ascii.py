test = int(input())
primes = [67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113]

def get_prime(char):
    ass = ord(char)
    if(ass <= 67):
        return chr(67)
    elif (ass >= 113):
        return  chr(113)
    else:
        i = 1
        while(primes[i] < ass):
            i += 1
        if(abs(primes[i-1] - ass) <= abs(primes[i] - ass)):
            return chr(primes[i-1])
        else:
            return chr(primes[i])

final=[]
for _ in range(test):
    n = int(input())
    str = list(input())
    ans = []
    for i in str:
        ans.append(get_prime(i))

    final.append(''.join(ans))

for i in range(test):
    print(final[i])
