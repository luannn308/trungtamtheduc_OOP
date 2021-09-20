#pragma once
#include"DichVu.h"
class NonMember:public DichVu
{
public:
	void Xuat()const;
	int TongChiPhi();
	bool DangKiPT();
	int DangKiLop();
	bool DangKiXongHoi();
};

