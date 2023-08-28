t = int(input())

for i in range(t):
    s = input()
    r = s[::-1]
    N = len(s)
    ok = True
    for j in range(1, N):
        s1 = abs(ord(s[j]) - ord(s[j-1]))
        s2 = abs(ord(r[j]) - ord(r[j-1]))
        if s1 != s2:
            ok = False
            break

    if ok:
        print("YES")
    else:
        print("NO")
