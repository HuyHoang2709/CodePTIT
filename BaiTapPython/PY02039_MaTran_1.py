n = int(input())
tren = 0
duoi = 0

for i in range(n):
    a = list(map(int, input().split()))
    for j in range(len(a)):
        if i < j:
            tren += a[j]
        elif i > j:
            duoi += a[j]

k = int(input())
hieu = abs(tren - duoi)

if hieu <= k:
    print("YES")
else:
    print("NO")
print(hieu)
