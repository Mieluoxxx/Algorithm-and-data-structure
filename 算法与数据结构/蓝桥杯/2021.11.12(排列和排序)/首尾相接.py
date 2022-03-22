# 用Python写一个暴力(会超时)
from itertools import*
N = int(input())
ans = ""
nums = list(map(str,input().split()))
for element in permutations(nums):
    a=''.join(element)
    if ans < a:
        ans = a
print(ans)