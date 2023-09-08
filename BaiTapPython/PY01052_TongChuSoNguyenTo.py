import math


def ngto(n):
    if n <= 3:
        return n > 1
    else:
        if n % 2 == 0 or n % 3 == 0:
            return False
        else:
            sqr = math.sqrt(n)
            i = 5
            while i <= sqr:
                if n % i == 0 or n % (i + 2) == 0:
                    return False
                i += 6
    return True


def ktra(n):
    tong = 0
    m = int(n)
    while m > 0:
        tong += (m % 10)
        m //= 10
    return ngto(tong)


t = int(input())

for k in range(t):
    n = input()
    if ktra(n):
        print("YES")
    else:
        print("NO")
