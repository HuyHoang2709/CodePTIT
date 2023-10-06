import math


def nt(n):
    if n <= 3:
        return n > 1
    else:
        if n % 2 == 0 or n % 3 == 0:
            return False
        else:
            sqr = int(math.sqrt(n)) + 1
            for i in range(5, sqr, 6):
                if n % i == 0 or n % (i + 2) == 0:
                    return False
    return True


n = int(input())
a = list(map(int, input().split()))

f = []
for i in a:
    if i not in f and nt(i):
        f.append(i)
        print(i, a.count(i))
