not_prime = [0] * 10005
prime = []

not_prime[0] = 1
not_prime[1] = 1
for i in range(2, 101):
    if not_prime[i] == 0:
        for j in range(i * i, 10001, i):
            not_prime[j] = 1

for i in range(2, 10001):
    if not_prime[i] == 0:
        prime.append(i)

n, x = map(int, input().split())
res = str(x) + " "
for i in range(n):
    x += prime[i]
    res += str(x) + " "
print(res)
