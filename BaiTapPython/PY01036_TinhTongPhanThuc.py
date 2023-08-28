import math

t = int(input())

for j in range(t):
    n = int(input())
    s = 0.0
    i = 2
    if n % 2 != 0:
        i = 1
    while i <= n:
        s += 1 / i
        i += 2
    print("{0:.6f}".format(s))
