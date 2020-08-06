# https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem


#!/bin/python3

import math
import os
import random
import re
import sys
import bisect

def srch(arr, key, lo, hi):
    if(hi <= lo):
        return lo
    else:
        mid = ( hi + lo) // 2
        
        if arr[mid] == key:
            return mid
        elif arr[mid] < key:
            return srch(arr, key, lo, mid)
        return srch(arr, key, mid +1 , hi)


    

# Complete the climbingLeaderboard function below.
def climbingLeaderboard(scores, alice):
    scores = list(set(scores))
    scores.sort(reverse = True)
    l = len(scores)
    ans = []
    # print(scores)
    for i in alice:
        ind = srch(scores, i, 0, l)
        if(l > ind):
            if(scores[ind] != i):
                scores.insert(ind, i)
                l += 1 
        else:
            scores.insert(ind, i)
            l += 1

        ans.append(ind + 1)
        # print(ind, scores)

        
        # try:
        #     ind = scores.index(i)
        #     ans.append(ind + 1)
        # except:
        #     ind = insort(scores, i, l)
        #     l += 1
        #     ans.append(ind + 1)

    
    return ans



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    scores_count = int(input())

    scores = list(map(int, input().rstrip().split()))

    alice_count = int(input())

    alice = list(map(int, input().rstrip().split()))

    result = climbingLeaderboard(scores, alice)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
