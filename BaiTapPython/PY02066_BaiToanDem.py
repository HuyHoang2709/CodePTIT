n = int(input())
a = []
b = []

while len(a) < n:
    a.extend(list(map(int, input().split())))

maxNum = max(a)

for i in range(1, maxNum):
    if i not in a:
        b.append(i)

if len(b) == 0:
    print("Excellent!")
else:
    for i in b:
        print(i)
