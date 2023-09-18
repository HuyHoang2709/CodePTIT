n, k = list(map(int, input().split()))
arr = list(map(int, input().split()))
l = []

for i in arr:
    if i not in l:
        l.append(i)

l.sort()

n = len(l)
a = []


def back_track(idx):
    if len(a) == k:
        for i in a:
            print(i, end=' ')
        print()
        return
    if idx == n:
        return
    for i in range(idx, len(l)):
        a.append(l[i])
        back_track(i + 1)
        a.pop()


back_track(0)
