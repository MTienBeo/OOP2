#include <iostream>
using namespace std;

class CPhanSo
{
	private:
		int tu;
		int mau;
	public:
		void Nhap();
		void Xuat();
		int SoSanh(CPhanSo);
};

int main()
{
	CPhanSo a,b;
	cout << "Nhap phan so 1: \n";
	a.Nhap();
	cout << "\nNhap phan so 2: \n";
	b.Nhap();
	int kq = a.SoSanh(b);
	cout << "\nPhan so lon nhat la: ";
	if (kq >= 0)
		a.Xuat();
	else
		b.Xuat();
	return 0;
}

void CPhanSo::Nhap()
{
	cout << "Nhap tu: ";
	cin >> tu;
	cout << "Nhap mau: ";
	cin >> mau;
}

void CPhanSo::Xuat()
{
	cout << "\nTu: " << tu;
	cout << "\nMau: " << mau;
}

int CPhanSo::SoSanh(CPhanSo x)
{
	float a = (float)tu / mau;
	float b = (float)x.tu / x.mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}