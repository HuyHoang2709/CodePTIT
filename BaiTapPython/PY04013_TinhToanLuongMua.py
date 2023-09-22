tram = {}

t = int(input())

cnt = 1

for i in range(t):
    ten_tram = input()
    bat_dau = input().split(':')
    ket_thuc = input().split(':')
    luong_mua = int(input())

    phut_bat_dau = int(bat_dau[0]) * 60 + int(bat_dau[1])
    phut_ket_thuc = int(ket_thuc[0]) * 60 + int(ket_thuc[1])
    tong_thoi_gian = phut_ket_thuc - phut_bat_dau

    if ten_tram in tram:
        tram[ten_tram]["luong mua"] += luong_mua
        tram[ten_tram]["thoi gian mua"] += tong_thoi_gian
    else:
        tram[ten_tram] = {"ma tram": f"T0{cnt}", "luong mua": luong_mua, "thoi gian mua": tong_thoi_gian}
        cnt += 1

for key in tram:
    luong_mua_tb = tram[key]["luong mua"] / (tram[key]["thoi gian mua"] / 60)
    print(f"{tram[key]['ma tram']} {key} {luong_mua_tb:.2f}")
