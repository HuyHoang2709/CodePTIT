t = int(input())

for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a.sort()
    b.sort()
    ok = True
    for j in range(n):
        if a[j] > b[j]:
            ok = False
            break
    if ok:
        print("YES")
    else:
        print("NO")