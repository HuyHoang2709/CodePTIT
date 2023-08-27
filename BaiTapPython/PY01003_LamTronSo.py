t = int(input())

for i in range(t):
    n = int(input())
    res = n
    dec = 10
    while n > 10:
        tmp = res % dec
        if tmp >= 5 * (dec / 10):
            res = ((res // dec) + 1) * dec
        else:
            res = (res // dec) * dec

        dec *= 10
        n //= 10

    print(res)
