k = list(map(int, input().split(" ")))[1]
a = sorted(list(set(input().split(" "))))
n = len(a)
c = [0] * k
ok = False


def _in():
    res = ""
    for i in c:
        res += str(a[i]) + " "
    print(res)


def generate():
    global ok
    i = k
    while c[i] == n - k + i - 1 and i >= 0:
        i -= 1
    if i == -1:
        ok = True
    else:
        c[i] += 1
        for j in range(i + 1, k):
            c[j] = c[j - 1] + 1


while not ok:
    _in()
    generate()
