import math

inp = input()
n, k = map(int, inp.split(" "))

start = pow(10, k-1)
end = pow(10, k)

res = ""
cnt = 0
for i in range(start, end):
    if math.gcd(n, i) == 1:
        res += str(i) + ' '
        cnt += 1
        if cnt == 10:
            print(res)
            res = ""
            cnt = 0

if len(res) > 0:
    print(res)    