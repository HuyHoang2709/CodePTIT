import math


def nt(n):
    if n <= 3:
        return n > 1
    else:
        if n % 2 == 0 or n % 3 == 0:
            return False
        else:
            sqr = int(math.sqrt(n))
            i = 5
            while i <= sqr:
                if n % i == 0 or n % (i + 2) == 0:
                    return False
                i += 6
    return True  

t = int(input())

for i in range(t):
    cnt = 0
    n = int(input())
    for i in range(1, n):
        if math.gcd(i, n) == 1:
            cnt += 1

    if nt(cnt):
        print("YES")
    else:
        print("NO")
