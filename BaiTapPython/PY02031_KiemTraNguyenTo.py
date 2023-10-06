import math

not_prime = [0] * 1005
not_prime[0] = not_prime[1] = 1
sqr = int(math.sqrt(1000)) + 1
for i in range(2, sqr):
    if not_prime[i] == 0:
        for j in range(i * i, 1001, i):
            not_prime[j] = 1

n, m = map(int, input().split())
matrix = []
for i in range(n):
    tmp = list(map(int, input().split()))
    for j in range(len(tmp)):
        if not_prime[tmp[j]] == 0:
            tmp[j] = 1
        else:
            tmp[j] = 0
    matrix.append(tmp)

for arr in matrix:
    for i in arr:
        print(i, end=' ')
    print('', end='\n')
