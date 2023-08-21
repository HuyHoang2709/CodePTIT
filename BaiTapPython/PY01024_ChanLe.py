def check(n):
    sum = 0
    nums = list(range(20))
    idx = 0
    while n > 0:
        tmp = n % 10
        sum += tmp
        nums[idx] = tmp
        if idx > 0:
            temp = abs(nums[idx] - nums[idx-1])
            if temp != 2:
                return False
        idx += 1
        n //= 10
    return sum % 10 == 0

t = int(input())
for i in range(t):
    n = int(input())
    if check(n):
        print("YES")
    else:
        print("NO")