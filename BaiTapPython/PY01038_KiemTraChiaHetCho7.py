t = int(input())

for j in range(t):
    n = input()
    ok = False
    i = 1
    s = int(n)
    while i <= 1000:
        if s % 7 == 0:
            ok = True
            break
        s += int(str(s)[::-1])
        i += 1
    if ok:
        print(s)
    else:
        print(-1)