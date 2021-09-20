#include "NonMember.h"
int NonMember::TongChiPhi() {
	PhiCoBan = 200;
	if (DKPT) {
		Tong = (PhiCoBan + 200) * ThoiGian;
		return Tong;
	}
	else {
		Tong = PhiCoBan * ThoiGian;
		return Tong;
	}
}
bool NonMember::DangKiPT() {
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
void NonMember::Xuat() const {
	cout << "NonMember" << " \t" << ThoiGian << " Thang" << " \tTongTien: " << Tong << "\n";
}
int NonMember::DangKiLop() {
	return 0;
};
bool NonMember::DangKiXongHoi() {
	return false;
};