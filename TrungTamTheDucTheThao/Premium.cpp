#include "Premium.h"
int Premium::TongChiPhi() {
	PhiCoBan = 1000;
	Tong = PhiCoBan * ThoiGian;
	return Tong;
}
int Premium::DangKiLop() {
	cout << "So lop dang ki them: ";
	cin >> SoLopDK;
	return SoLopDK;
}
bool Premium::DangKiPT() {
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
bool Premium::DangKiXongHoi() {
	int dangki;
MENU:cout << "Dang ki Xong: 1. Dang ki\t 0.Khong Dang Ki\t =>";
	cin >> dangki;
	if (dangki == 1) {
		DKXH = true;
		return DKXH;
	}
	else if (dangki == 0) {
		DKXH = false;
		return DKXH;
	}
	else goto MENU;
}
void Premium::Xuat() const {
		cout << "Premium" << " \t" << ThoiGian << " Thang" << " \tTongTien: "<<Tong<<"\n";
}