s = list(map(int, input().split()))
res = []

a, k, n = s
i = k - (a % k)

n -= a

while i <= n:
    res.append(i)
    i += k

if (len(res) == 0):
    print(-1)
else:
    for i in res:
        print(i, end = ' ')