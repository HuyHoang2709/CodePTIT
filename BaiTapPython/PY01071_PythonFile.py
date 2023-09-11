def ktra(file_name):
    file_name += 'n'
    extension = file_name[-3:-1]
    if extension != 'py':
        return False
    for i in range(len(file_name) - 3):
        c = file_name[i]
        if ord(c) < 46 or (46 < ord(c) < 65) or (90 < ord(c) < 94) or (95 < ord(c) < 97) or ord(c) > 123:
            return False
    return True


file_name = input()
if ktra(file_name):
    print("YES")
else:
    print("NO")