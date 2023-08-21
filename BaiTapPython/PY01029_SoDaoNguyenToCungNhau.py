import math

t = int(input())

for i in range(t):
    n = input()
    origin = int(n)
    reverse = int(n[::-1])
    if math.gcd(origin, reverse) == 1:
        print("YES")
    else:
        print("NO")