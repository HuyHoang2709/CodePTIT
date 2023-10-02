t = int(input())

for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()

    m = len(a)
    res = "NO"
    for i in a:
        if a.count(i) > m / 2:
            res = i
            break
    print(res)
