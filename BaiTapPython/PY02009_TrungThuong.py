t = int(input())

for i in range(t):
    n = int(input())
    f = {}
    for j in range(n):
        x = int(input())
        if x not in f:
            f[x] = 1
        else:
            f[x] += 1
    f = sorted(f.items(), key=lambda i: (-i[1], i[0]))
    print(f[0][0])