#include <iostream>
#include <cmath>
using namespace std;
class CDiemKhongGian
{
	private:
		float x;
		float y; 
		float z;
	public:	
		void Nhap();
		void Xuat();
		float KhoangCach(CDiemKhongGian);
};

int main()
{
	CDiemKhongGian A, B;
	cout << "Nhap diem A: \n";
	A.Nhap();
	cout << "Nhap diem B: \n";
	B.Nhap();
	float kq = A.KhoangCach(B);
	cout << "\nDiem A la: ";
	A.Xuat();
	cout << "\nDiem B la: ";
	B.Xuat();
	cout << "\n\nKhoang cach: " << kq;
	return 0;
}

void CDiemKhongGian::Nhap()
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
}

void CDiemKhongGian::Xuat()
{
	cout << "\nx = " << x;
	cout << "\ny = " << y;
	cout << "\nz = " << z;
}

float CDiemKhongGian::KhoangCach(CDiemKhongGian P)
{
	return sqrt((x - P.x) * (x - P.x) +
				(y - P.y) * (y - P.y) +
				(z - P.z) * (z - P.z));
}