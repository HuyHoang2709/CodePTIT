s = []
x = 3
ok = False
n = int(input())


def khoi_tao(n):
    global s
    global ok
    ok = False
    for i in range(n):
        s.append(1)


def kt():
    return 0 < s.count(1) <= s.count(2) <= s.count(3)


def generate():
    global ok
    global s
    tmp = x - 1
    while tmp >= 0 and s[tmp] == 3:
        tmp -= 1

    if tmp == -1:
        ok = True
    else:
        s[tmp] += 1
        for i in range(tmp + 1, x):
            s[i] = 1


def _print():
    res = ""
    if kt():
        for i in s:
            res += chr(64 + i)
        print(res)


def start():
    global x
    while x <= n:
        khoi_tao(x)
        while not ok:
            _print()
            generate()
        s.clear()
        x += 1


start()
