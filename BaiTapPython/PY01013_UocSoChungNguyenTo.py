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


def kt(n):
    sum = 0
    for i in str(n):
        sum += int(i)
    return nt(sum)

t = int(input())

for i in range(t):
    s = input()
    a, b = s.split(" ")
    a = int(a)
    b = int(b)
    uoc_so = math.gcd(a, b)
    if kt(uoc_so):
        print("YES")
    else:
        print("NO")
