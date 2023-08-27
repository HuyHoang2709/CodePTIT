t = int(input())

for i in range(t):
    s = input()
    length = len(s)

    cnt = 1
    res = ""
    for i in range(1, length):
        if s[i] == s[i-1]:
            cnt += 1
        else:
            res += str(cnt) + s[i-1]
            cnt = 1
    res += str(cnt) + s[length-1]
    print(res)
