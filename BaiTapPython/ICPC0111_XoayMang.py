t = int(input())

for i in range(t):
    n, d = map(int, input().split())
    d = d % n
    a = list(map(int, input().split()))
    for j in range(d, n):
        print(a[j], end=" ")
    for j in range(d):
        print(a[j], end=' ')
    print()