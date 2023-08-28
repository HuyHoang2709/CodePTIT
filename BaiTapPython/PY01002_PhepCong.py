bieu_thuc = input()
count = 0
s = 0

for i in bieu_thuc:
    if i.isdigit():
        if count < 2:
            s += int(i)
            count += 1
        else: 
            if s == int(i):
                print("YES")
            else:
                print("NO")