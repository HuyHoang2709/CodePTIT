x = int(input())

while x != 0:
    dem = 1
    while x != 1:
        dem += 1
        if x % 2 == 0:
            x /= 2
        else:
            x = x * 3 + 1
    print(dem)
    x = int(input())