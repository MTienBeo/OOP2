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
		CPhanSo Tong(CPhanSo);
		CPhanSo Hieu(CPhanSo);
		CPhanSo Tich(CPhanSo);
		CPhanSo Thuong(CPhanSo);
};

int main()
{
	CPhanSo a, b, kq;
	cout << "Nhap phan so 1: \n";
	a.Nhap();
	cout << "\nNhap phan so 2: \n";
	b.Nhap();

	kq = a.Tong(b);
	cout << "\nTong hai phan so la: ";
	kq.Xuat();

	kq = a.Hieu(b);
	cout << "\n\nHieu hai phan so la: ";
	kq.Xuat();

	kq = a.Tich(b);
	cout << "\n\nTich hai phan so la: ";
	kq.Xuat();

	kq = a.Thuong(b);
	cout << "\n\nThuong hai phan so la: ";
	kq.Xuat();
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

CPhanSo CPhanSo::Tong(CPhanSo x)
{
	CPhanSo temp;
	temp.tu = tu * x.mau + mau * x.tu;
	temp.mau = mau * x.mau;
	return temp;
}

CPhanSo CPhanSo::Hieu(CPhanSo x)
{
	CPhanSo temp;
	temp.tu = tu * x.mau - mau * x.tu;
	temp.mau = mau * x.mau;
	return temp;
}

CPhanSo CPhanSo::Tich(CPhanSo x)
{
	CPhanSo temp;
	temp.tu = tu * x.tu;
	temp.mau = mau * x.mau;
	return temp;
}

CPhanSo CPhanSo::Thuong(CPhanSo x)
{
	CPhanSo temp;
	temp.tu = tu * x.mau;
	temp.mau = mau * x.tu;
	return temp;
}