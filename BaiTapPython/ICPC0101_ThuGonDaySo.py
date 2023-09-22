n = int(input())
a = list(map(int, input().split()))
res = [a[0]]
idx = 1
while idx < n:
    x = a[idx]
    if len(res) > 0 and (x + res[len(res) - 1]) % 2 == 0:
        res.pop(len(res) - 1)
    else:
        res.append(x)
    idx += 1

print(len(res))
