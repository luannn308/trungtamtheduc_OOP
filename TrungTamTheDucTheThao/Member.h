#pragma once
#include<iostream>
#include"DichVu.h"
#include<string>
using namespace std;
class Member
{
protected:
	string HoTen;
	string CMND;
public:
	DichVu* Goi;
	Member();
	Member(string, string);
	~Member();
	void Nhap();
	void Xuat() const;
};

