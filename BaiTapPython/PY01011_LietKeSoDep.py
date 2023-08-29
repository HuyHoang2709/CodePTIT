def thuan_nghich(n):
    return [str(i) for i in range(0, n, 2) if str(i) == str(i)[::-1]]


def kt(n):
    return len(n) % 2 == 0 and n.count('0') + n.count('2') + n.count('4') + n.count('6') + n.count('8') == len(n)


t = int(input())

for i in range(t):
    n = int(input())
    res = " ".join(filter(kt, thuan_nghich(n)))
    print(res)
