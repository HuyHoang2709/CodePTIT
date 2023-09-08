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
    length = len(n)
    if not ngto(length):
        return False
    dem = 0
    for i in n:
        if i == '2' or i == '3' or i == '5' or i == '7':
            dem += 1
    if dem * 2 <= length:
        return False
    return True


t = int(input())

for k in range(t):
    n = input()
    if ktra(n):
        print("YES")
    else:
        print("NO")
