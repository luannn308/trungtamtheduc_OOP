#pragma once
#include"Member.h"
#define MAX 1000
class CLB
{
protected:
	Member DSM[MAX];
	int SoMember;
public: 
	CLB();
	~CLB();
	void Nhap();
	void Xuat() const;
	void MemberTop();
};

