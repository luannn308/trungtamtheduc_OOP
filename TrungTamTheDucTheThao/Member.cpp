#include "Member.h"
#include"DichVu.h"
#include"NonMember.h"
#include"Premium.h"
#include"Basic.h"
Member::Member(){
	HoTen = "";
	CMND = "";
}
Member::Member(string t, string cmnd) {
	HoTen = t;
	CMND = cmnd;
}
Member::~Member() {}
void Member::Nhap() {
	cout << "Nhap Ho Ten: "; getline(cin, HoTen);
	cout << "Nhap so CMND: "; getline(cin, CMND);
	int goi;
MENU:cout << "Chon goi dich vu: 1.Premium\t 2.Basic \t3.NonMember \t=>";
	cin >> goi;
	if (goi == 1) Goi = new Premium;
	else if (goi == 2) Goi = new Basic;
	else if (goi == 3) Goi = new NonMember;
	else goto MENU;
	Goi->Nhap();
}
void Member::Xuat() const {
	cout << HoTen << "\t" << CMND<<"\t";
	Goi->Xuat();
}