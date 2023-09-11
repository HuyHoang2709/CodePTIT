t = int(input())

for i in range(t):
    n = input()
    length = len(n)
    tong = 0
    tich = 1
    ok = False
    for j in range(length):
        if j % 2 == 0:
            tong += int(n[j])
        else:
            if int(n[j]) > 0:
                ok = True
                tich *= int(n[j])
    if not ok:
        tich = 0
    print(tong, tich)