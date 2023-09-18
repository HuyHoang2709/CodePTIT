t = int(input())
ds = []
for i in range(t):
    name = input()
    ex, sub = map(int, input().split())
    ds.append({"name": name, "exercises": ex, "submits": sub})
ds = sorted(ds, key=lambda x: (-x["exercises"], x["submits"], x["name"]))
for i in ds:
    tmp = f'{i["name"]} {i["exercises"]} {i["submits"]}'
    print(tmp)
