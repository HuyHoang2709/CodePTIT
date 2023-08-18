n = input()
cnt4 = 0
cnt7 = 0

for i in n:
    if i == '4':
        cnt4 += 1
    elif i == '7':
        cnt7 += 1

res = cnt4 + cnt7
if res == 4 or res == 7:
    print("YES")
else:
    print("NO")