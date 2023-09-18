a = []
while len(a) < 10:
    tmp = list(map(int, input().split()))
    for i in tmp:
        a.append(i)

a = set(map(lambda i: i % 42, a))
print(len(a))