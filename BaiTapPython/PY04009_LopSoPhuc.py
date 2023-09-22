class SoPhuc:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def to_string(self):
        if self.b > 0:
            return "{:.0f} + {:.0f}i".format(self.a, self.b)
        return "{:.0f} - {:.0f}i".format(self.a, self.b * (-1))


def tong_so_phuc(z1: SoPhuc, z2: SoPhuc) -> SoPhuc:
    return SoPhuc(z1.a + z2.a, z1.b + z2.b)


def tich_so_phuc(z1: SoPhuc, z2: SoPhuc) -> SoPhuc:
    return SoPhuc(z1.a * z2.a - z1.b * z2.b, z1.a * z2.b + z1.b * z2.a)


t = int(input())
for i in range(t):
    a1, b1, a2, b2 = map(int, input().split())
    z1 = SoPhuc(a1, b1)
    z2 = SoPhuc(a2, b2)
    tmp = tong_so_phuc(z1, z2)
    c = tich_so_phuc(tmp, z1)
    d = tich_so_phuc(tmp, tmp)
    print("{}, {}".format(c.to_string(), d.to_string()))
