def thuan_nghich(n):
    return int(n) > 10 and n == n[::-1]


def ktra(n):
    tong = 0
    m = int(n)
    while m > 0:
        tong += (m % 10)
        m //= 10
    return thuan_nghich(str(tong))


t = int(input())

for k in range(t):
    n = input()
    if ktra(n):
        print("YES")
    else:
        print("NO")
