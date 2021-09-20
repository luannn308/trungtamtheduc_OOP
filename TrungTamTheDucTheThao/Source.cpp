#include<iostream>
#include"CLB.h"
using namespace std; 
int main() {
	CLB A;
	A.Nhap();
	A.Xuat();
	cout << "Thanh vien co tong chi phi cao nhat: \n";
	A.MemberTop();
}