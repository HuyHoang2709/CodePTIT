import math


def ngto(n):
    if n <= 3:
        return n > 1
    else:
        if n % 2 == 0 or n % 3 == 0:
            return False
        else:
            sqr = int(math.sqrt(n))
            for i in range(5, sqr, 6):
                if n % i == 0 or n % (i + 2) == 0:
                    return False
    return True


def ktra(n):
    tong = 0
    for i in range(len(n)):
        if (i + 1) % 2 == 0 and int(n[i]) % 2 == 0:
            return False
        if (i + 1) % 2 != 0 and int(n[i]) % 2 != 0:
            return False
        tong += int(n[i])
    return ngto(tong)


t = int(input())

for i in range(t):
    n = input()
    if ktra(n):
        print("YES")
    else:
        print("NO")
