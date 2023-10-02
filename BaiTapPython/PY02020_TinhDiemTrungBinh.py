n = int(input())

a = list(map(float, input().split()))
min_p = min(a)
max_p = max(a)

tong = 0.0
cnt = 0
for p in a:
    if p != min_p and p != max_p:
        tong += p
        cnt += 1
print(f"{(tong / cnt):.2f}")
