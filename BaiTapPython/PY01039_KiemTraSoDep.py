t = int(input())


def kt(n):
    length = len(n)
    if n.count(n[0]) + n.count(n[1]) != length:
        return False
    for i in range(1, length):
        if n[i] == n[i - 1]:
            return False
    return True


for i in range(t):
    n = input()
    if kt(n):
        print("YES")
    else:
        print("NO")
