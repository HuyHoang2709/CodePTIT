n = int(input())

for i in range(n):
    x = input()
    length = len(x)
    i = 0
    ok = True
    while i < length-1:
        a = int(x[i])
        b = int(x[i+1])
        if a > b:
            ok = False
            break
        i += 2
    if ok:
        print("YES")
    else:
        print("NO")
