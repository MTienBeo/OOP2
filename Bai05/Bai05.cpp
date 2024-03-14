#include <iostream>
using namespace std;

class CSoPhuc
{
	private:
		float thuc;
		float ao;
	public:
		void Nhap();
		void Xuat();
		CSoPhuc Tong(CSoPhuc);
		CSoPhuc Hieu(CSoPhuc);
		CSoPhuc Tich(CSoPhuc);
};

int main()
{
	CSoPhuc a, b, kq;
	cout << "Nhap so phuc 1: \n";
	a.Nhap();
	cout << "\nNhap so phuc 2: \n";
	b.Nhap();

	kq = a.Tong(b);
	cout << "\nTong hai so phuc la: ";
	kq.Xuat();

	kq = a.Hieu(b);
	cout << "\n\nHieu hai so phuc la: ";
	kq.Xuat();

	kq = a.Tich(b);
	cout << "\n\nTich hai so phuc la: ";
	kq.Xuat();

	return 0;
}

void CSoPhuc::Nhap()
{
	cout << "Nhap phan thuc: ";
	cin >> thuc;
	cout << "Nhap phan ao: ";
	cin >> ao;
}

void CSoPhuc::Xuat()
{
	cout << "Phan thuc: " << thuc << endl;
	cout << "Phan ao: " << ao << endl;
}

CSoPhuc CSoPhuc::Tong(CSoPhuc x)
{
	CSoPhuc temp;
	temp.thuc = thuc + x.thuc;
	temp.ao = ao + x.ao;
	return temp;
}

CSoPhuc CSoPhuc::Hieu(CSoPhuc x)
{
	CSoPhuc temp;
	temp.thuc = thuc - x.thuc;
	temp.ao = ao - x.ao;
	return temp;
}

CSoPhuc CSoPhuc:: Tich(CSoPhuc x)
{
	CSoPhuc temp;
	temp.thuc = thuc * x.thuc - ao * x.ao ;
	temp.ao = thuc * x.ao + ao * x.thuc;
	return temp;
}