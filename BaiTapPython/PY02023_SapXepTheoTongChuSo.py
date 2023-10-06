def tong_chu_so(x):
    tong = 0
    x = str(x)
    for c in x:
        tong += int(c)
    return tong


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
        res.append({"num": j, "tong": tong_chu_so(j)})
    res = sorted(res, key=lambda x: (x["tong"], x["num"]))
    _in(res)
