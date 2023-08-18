n = int(input())

for i in range(n):
    x = input()
    ok = True
    
    for i in x:
        if i != '4' and i != '7':
            ok = False
            break
    
    if ok:
        print("YES")
    else:
        print("NO")