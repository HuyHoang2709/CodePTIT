t = int(input())

for i in range(t):
    n = int(input())
    a = sorted(list(map(int, input().split())))
    b = sorted(list(map(int, input().split())))
    l = len(a)
    ok = True
    for j in range(l):
        if a[j] > b[j]:
            ok = False
            break
    if ok:
        print("YES")
    else:
        print("NO")
