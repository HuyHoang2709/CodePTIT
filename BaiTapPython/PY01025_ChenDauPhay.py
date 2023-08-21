n = int(input())

res = ""

cnt = 0
while n > 0:
    tmp = n % 10
    res = str(tmp) + res
    cnt += 1
    n //= 10
    if cnt == 3 and n > 0:
        res = "," + res
        cnt = 0

print(res)