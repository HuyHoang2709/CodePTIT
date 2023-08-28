P = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."

while True:
    i = input()
    inp = i.split(" ")
    if len(inp) < 2:
        break
    else:
        k, s = inp
        k = int(k)
        res = ""
        for j in s:
            pos = 0
            if ord(j) == 46:
                pos = 27
            elif ord(j) == 95:
                pos = 26
            else:
                pos = ord(j) - 65
            res += P[(pos+k) % 28]
        print(res[::-1])