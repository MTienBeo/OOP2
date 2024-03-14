#include <iostream>
using namespace std;

class CDiem 
{
    private:
        float x;
        float y;
    public:
        void Nhap();
        void Xuat();
};

class CDuongTron 
{
    private:
        CDiem Tam;
        float BanKinh;
    public:
        void Nhap();
        void Xuat();
        float ChuVi();
        float DienTich();
};

int main() 
{
    CDuongTron c;
    c.Nhap();
    c.Xuat();

    cout << "\nChu vi la: " << c.ChuVi();
    cout << "\nDien tich la: " << c.DienTich() << endl;

    return 0;
}

void CDiem::Nhap() 
{
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
}

void CDiem::Xuat() 
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

void CDuongTron::Nhap() 
{
    cout << "Nhap tam: \n";
    Tam.Nhap();
    cout << "Nhap ban kinh: ";
    cin >> BanKinh;
}

void CDuongTron::Xuat() 
{
    cout << "\nDuong tron co tam la: \n";
    Tam.Xuat();
    cout << "Ban kinh: " << BanKinh << endl;
}

float CDuongTron::ChuVi()
{
    return (3.14 * 2 * BanKinh);
}

float CDuongTron::DienTich()
{
    return (3.14 * BanKinh * BanKinh);
}
