t = int(input())

for i in range(t):
    n = input()
    tich = 1
    for it in n:
        if it != '0':
            tich *= int(it)
    print(tich)
