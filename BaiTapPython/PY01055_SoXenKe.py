def ktra(n):
    if len(n) % 2 == 0:
        return False
    if n[0] == n[1]:
        return False
    for i in range(2, len(n), 2):
        if n[i] != n[0]:
            return False
    return True


t = int(input())

for i in range(t):
    n = input()
    if ktra(n):
        print("YES")
    else:
        print("NO")
