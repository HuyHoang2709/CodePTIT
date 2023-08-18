t = int(input())

for i in range(t):
    s = input()
    length = len(s)
    res = ""
    for i in range(1, length):
        if s[i].isdigit():
            for j in range(int(s[i])):
                res += s[i-1]
    print(res)
