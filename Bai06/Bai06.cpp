#include <iostream>
using namespace std;

class CNgay
{
	private:
		int Ngay;
		int Thang;
		int Nam;
	public:
		void Nhap();
		void Xuat();
		bool ktNhuan();
		CNgay HomQua();
};

int main()
{
	CNgay a, hq;
	cout << "Nhap ngay: ";
	a.Nhap();
	cout << "\nNgay: ";
	a.Xuat();

	cout << "\nNgay hom qua: ";
	hq = a.HomQua();
	hq.Xuat();

	return 0;
}

void CNgay::Nhap()
{
	cout << "\nNhap ngay: ";
	cin >> Ngay;
	cout << "Nhap thang: ";
	cin >> Thang;
	cout << "Nhap Nam: ";
	cin >> Nam;
}

void CNgay::Xuat()
{
	cout << Ngay << "/" << Thang << "/" << Nam;
}

bool CNgay::ktNhuan()
{
	if (Nam % 4 == 0 && Nam % 100 != 0)
		return 1;
	if (Nam % 400 == 0)
		return 1;
	return 0;
}

CNgay CNgay::HomQua()
{
	CNgay temp;
	int NgayThang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	temp.Ngay = Ngay;
	temp.Thang = Thang;
	temp.Nam = Nam;

	if (temp.ktNhuan() == 1)
		NgayThang[1] = 29;

	temp.Ngay++;
	if (temp.Ngay > NgayThang[temp.Thang])
	{
		temp.Thang++;
		if (temp.Thang > 12)
		{
			temp.Nam++;
			temp.Thang = 1;
		}
		temp.Ngay = 1;
	}
	return temp;
}