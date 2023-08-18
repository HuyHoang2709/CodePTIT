t = int(input())

for i in range(t):
    txt = input()
    arr = txt.split()
    n = float(arr[0])
    x = float(arr[1])
    m = float(arr[2])
    d = 1
    multi = (100 + x) / 100

    while n * multi < m:
        n *= multi
        d += 1
    
    print(d)