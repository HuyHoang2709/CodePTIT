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
        self.rut_gon()
        print("{:.0f}/{:.0f}".format(self.tu, self.mau))


tu, mau = map(int, input().split())
PhanSo(tu, mau).to_string()