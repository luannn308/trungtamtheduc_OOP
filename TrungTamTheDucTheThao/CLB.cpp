#include "CLB.h"
CLB::CLB() {
	SoMember = 0;
}
CLB::~CLB(){}
void CLB::Nhap() {
	cout << "Nhap so Member dang ki: "; cin >> SoMember;
	cin.ignore();
	for (int i = 0; i < SoMember; i++)
	{
		DSM[i].Nhap();
	}
}
void CLB::Xuat() const {
	cout << "Danh Sach Member:" << "\n";
	for (int i = 0; i < SoMember; i++)
	{
		DSM[i].Xuat();
	}
}
void CLB::MemberTop() {
	int top;
	for (int i = 0; i < SoMember; i++)
	{
		top = DSM[0].Goi->Tong;
		if (DSM[i].Goi->Tong > top)
			top = DSM[i].Goi->Tong;
	}
	for (int i = 0; i < SoMember; i++)
	{
		if (top==DSM[i].Goi->Tong)
		{
			DSM[i].Xuat();
		}
	}
}