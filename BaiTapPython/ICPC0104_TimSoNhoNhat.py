import re

t = int(input())

for i in range(t):
    nums = map(int, re.findall(r'\d+', input()))
    print(min(nums))
