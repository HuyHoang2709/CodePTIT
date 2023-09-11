t = int(input())

for i in range(t):
    n = input()
    length = len(n)
    tong = 0
    tich = 1
    for j in range(length):
        if j % 2 != 0:
            tong += int(n[j])
        else:
            if int(n[j]) > 0:
                tich *= int(n[j])
    print(tich, tong)
