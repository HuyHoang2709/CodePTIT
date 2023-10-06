t = int(input())

for i in range(t):
    s = input()
    r = s[::-1]
    l = len(s)
    ok = True
    for j in range(1, l):
        if abs(ord(s[j]) - ord(s[j - 1])) != abs(ord(r[j]) - ord(r[j - 1])):
            ok = False
            break
    if ok:
        print("YES")
    else:
        print("NO")
