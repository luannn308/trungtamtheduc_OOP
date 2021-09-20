#include "Basic.h"
int Basic::TongChiPhi() {
	PhiCoBan = 500;
	if (DKPT) {
		Tong = (PhiCoBan + SoLopDK * 200 + 100) * ThoiGian;
		return Tong;
	}
	else {
		Tong = (PhiCoBan + SoLopDK * 200) * ThoiGian;
		return Tong;
	}
}
int Basic::DangKiLop() {
	cout << "So lop dang ki them: ";
	cin >> SoLopDK;
	return SoLopDK;
}
bool Basic::DangKiPT() {
	int dangki;
MENU:cout << "Dang ki PT: 1. Dang ki\t 0.Khong Dang Ki\t =>";
	cin >> dangki;
	if (dangki == 1) {
		DKPT = true;
		return DKPT;
	}
	else if (dangki == 0) {
		DKPT = false;
		return DKPT;
	}
	else goto MENU;
}
void Basic::Xuat() const {
	cout << "Basic  " << " \t" << ThoiGian << " Thang" << " \tTongTien: " << Tong << "\n";

}
bool Basic::DangKiXongHoi(){
	return false;
}