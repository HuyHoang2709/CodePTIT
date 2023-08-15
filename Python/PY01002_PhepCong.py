bieuThuc = input()
count = 0
sum = 0

for i in bieuThuc:
    if i.isdigit():
        if count < 2:
            sum += int(i)
            count += 1
        else: 
            if sum == int(i):
                print("YES")
            else:
                print("NO")