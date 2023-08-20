t = int(input())

for i in range(t):
    n = input()
    n += "n"
    cuoi = n[-3:-1]
    if cuoi == "86":
        print("YES")
    else:
        print("NO")