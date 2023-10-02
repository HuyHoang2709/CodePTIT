n = int(input())
a = list(map(int, input().split()))

x = max(a)
res = x + 1
for i in range(1, x + 1):
    if i not in a:
        res = i
        break
print(res)
