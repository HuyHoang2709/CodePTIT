class ThiSinh:
    def __init__(self, ho_ten, ngay_sinh, diem1, diem2, diem3):
        self.ho_ten = ho_ten
        self.ngay_sinh = ngay_sinh
        self.diem1 = diem1
        self.diem2 = diem2
        self.diem3 = diem3

    def show_info(self):
        print("{} {} {:.1f}".format(self.ho_ten, self.ngay_sinh, self.diem1 + self.diem2 + self.diem3))


ts = ThiSinh(input(), input(), float(input()), float(input()), float(input()))
ts.show_info()
