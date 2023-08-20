n = int(input())

for i in range(n):
    x = input()
    x += "n"
    dau = x[0:2]
    cuoi = x[-3:-1]

    if dau == cuoi:
        print("YES")
    else:
        print("NO")