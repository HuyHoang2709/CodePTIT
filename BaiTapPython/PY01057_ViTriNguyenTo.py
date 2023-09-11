import math


def ngto(n):
    if n <= 3:
        return n > 1
    else:
        if n % 2 == 0 or n % 3 == 0:
            return False
        else:
            sqr = int(math.sqrt(n))
            for i in range(5, sqr + 1, 6):
                if n % i == 0 or n % (i + 2) == 0:
                    return False
    return True


def ktra(n):
    length = len(n)
    for i in range(length):
        if n[i] == '2' or n[i] == '3' or n[i] == '5' or n[i] == '7':
            if not ngto(i):
                return False
        else:
            if ngto(i):
                return False
    return True


t = int(input())

for i in range(t):
    n = input()
    if ktra(n):
        print("YES")
    else:
        print("NO")
