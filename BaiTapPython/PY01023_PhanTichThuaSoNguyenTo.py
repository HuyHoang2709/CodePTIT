import math

t = int(input())

for i in range(t):
    n = int(input())
    dem = 0
    res = "1 * "

    while n % 2 == 0:
        n /= 2
        dem += 1

    if dem > 0:
        res += "2^" + str(dem)
        dem = 0
        if n > 2:
            res += " * "

    sqr = math.sqrt(n)
    j = 3
    while j <= sqr:
        if n % j == 0:
            while n % j == 0:
                n /= j
                dem += 1
            res += str(j) + "^" + str(dem)
            if n > 2:
                res += " * "
            dem = 0
            
        j += 2
    if n > 2:
        res += str(int(n)) + "^1"

    print(res)
