#pragma once
#include"DichVu.h"
class Basic:public DichVu
{
public:
	void Xuat()const;
	int TongChiPhi();
	int DangKiLop();
	bool DangKiPT();
	bool DangKiXongHoi();
};

