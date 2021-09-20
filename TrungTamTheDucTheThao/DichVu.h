#pragma once
#include<iostream>
using namespace std;
class DichVu
{
	protected:
		int ThoiGian;
	public:
		int Tong=0;
		int PhiCoBan=0;
		int SoLopDK=0;
		bool DKPT = false;
		bool DKXH = false;
		DichVu();
		DichVu(int);
		~DichVu();
		void Nhap();
		virtual void Xuat()const;
		virtual int TongChiPhi() = 0;
		virtual int DangKiLop() = 0;
		virtual bool DangKiPT() = 0;
		virtual bool DangKiXongHoi() = 0;
};

