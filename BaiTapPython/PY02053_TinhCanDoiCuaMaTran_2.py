n = int(input())
tren = 0
duoi = 0

for i in range(n):
    a = list(map(int, input().split()))
    for j in range(len(a)):
        if j < n - i - 1:
            tren += a[j]
        elif j > n - i - 1:
            duoi += a[j]

k = int(input())
hieu = abs(tren - duoi)

if hieu <= k:
    print("YES")
else:
    print("NO")
print(hieu)
