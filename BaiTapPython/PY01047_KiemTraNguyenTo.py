import math


def kt(num):
    if num <= 3:
        return num > 1
    else:
        if num % 2 == 0 or num % 3 == 0:
            return False
        else:
            sqr = int(math.sqrt(num))
            i = 5
            while i <= sqr:
                if num % i == 0 or num % (i + 2) == 0:
                    return False
                i += 6
    return True


t = int(input())

for k in range(t):
    n = input()
    n += "n"
    num = int(n[-5:-1])
    if kt(num):
        print("YES")
    else:
        print("NO")
