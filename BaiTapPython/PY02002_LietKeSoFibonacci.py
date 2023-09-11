fibo = [0, 1]

for i in range(2, 93):
    tmp = fibo[i-1] + fibo[i-2]
    fibo.append(tmp)

t = int(input())

for i in range(t):
    l, r = map(int, input().split(" "))
    res = ""
    for j in range(l, r+1):
        res += str(fibo[j]) + " "
    print(res)