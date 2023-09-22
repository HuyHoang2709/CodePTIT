import math


class PhanSo:
    def __init__(self, tu, mau):
        self.tu = tu
        self.mau = mau

    def rut_gon(self):
        usc = math.gcd(self.tu, self.mau)
        self.tu /= usc
        self.mau /= usc

    def to_string(self):
        print("{:.0f}/{:.0f}".format(self.tu, self.mau))


def tinh_tong(a: PhanSo, b: PhanSo) -> PhanSo:
    a.rut_gon()
    b.rut_gon()
    uoc_chung = math.gcd(int(a.mau), int(b.mau))
    mau_so = a.mau * b.mau / uoc_chung
    tu_so = a.tu * (mau_so / a.mau) + b.tu * (mau_so / b.mau)
    return PhanSo(tu_so, mau_so)


tu1, mau1, tu2, mau2 = map(int, input().split())
ps1 = PhanSo(tu1, mau1)
ps2 = PhanSo(tu2, mau2)
ps_tong = tinh_tong(ps1, ps2)
ps_tong.to_string()
