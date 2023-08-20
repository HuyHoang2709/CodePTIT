s = input()

res = 1
cnt1 = 0
cnt2 = 0
half_length = len(s) / 2

for i in s:
    if i >= 'A' and i <= 'Z':
        cnt1 += 1
    else:
        cnt2 += 1

if cnt1 > cnt2:
    res = 1
else:
    res = 2

if res == 1:
    print(s.upper())
else:
    print(s.lower())