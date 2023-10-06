t = int(input())
for i in range(t):
    m, n = input().split()
    p = min(m, n)
    q = max(m, n)
    x = input().strip()
    y = ""
    if x.count(' ') > 0:
        x, y = x.split()
    else:
        y = input()
    print(int(x.replace(q, p)) + int(y.replace(q, p)), int(x.replace(p, q)) + int(y.replace(p, q)))
