def tich_chu_so(x):
    tich = 1
    x = str(x)
    for c in x:
        tich *= int(c)
    return tich


def _in(arr):
    s = ""
    for i in arr:
        s += str(i["num"]) + " "
    print(s)


t = int(input())

for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    res = []
    for j in a:
        res.append({"num": j, "tich": tich_chu_so(j)})
    res = sorted(res, key=lambda x: (x["tich"], x["num"]))
    _in(res)
