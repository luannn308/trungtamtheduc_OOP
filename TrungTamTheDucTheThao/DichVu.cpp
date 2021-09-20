#include "DichVu.h"
DichVu::DichVu(){
	ThoiGian = 0;
}
DichVu::DichVu(int tg) {

	ThoiGian = tg;
}
DichVu::~DichVu() {}
void DichVu::Nhap() {
	cout << "Thoi gian cua goi theo thang: ";
	cin >> ThoiGian;
	this->DangKiLop();
	this->DangKiPT();
	this->DangKiXongHoi();
	this->TongChiPhi();
	cin.ignore();
}
void DichVu::Xuat()const{}