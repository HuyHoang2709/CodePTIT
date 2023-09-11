s = input()
n = len(s)
ok = False
p = [i for i in range(n)]


def _in():
    res = ""
    for i in p:
        res += s[i]
    print(res)


def generate():
    global ok
    i = n - 2
    while p[i] > p[i + 1] and i >= 0:
        i -= 1
    if i == -1:
        ok = True
    else:
        j = n - 1
        while p[i] > p[j]:
            j -= 1
        tmp = p[i]
        p[i] = p[j]
        p[j] = tmp

        l = i + 1
        r = n - 1
        while l < r:
            tmp = p[l]
            p[l] = p[r]
            p[r] = tmp
            l += 1
            r -= 1


while not ok:
    _in()
    generate()