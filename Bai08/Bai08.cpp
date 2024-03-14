#include <iostream>
#include <cmath>
using namespace std;

class CDiem
{
private:
    float x;
    float y;
public:
    void Nhap();
    void Xuat();
    float KhoangCach(CDiem);
    void setX(float);
    void setY(float);
    float getX();
    float getY();

};

class CTamGiac
{
private:
    CDiem A;
    CDiem B;
    CDiem C;
public:
    void Nhap();
    void Xuat();
    float ChuVi();
    float DienTich();
    CDiem TrongTam();
};

int main()
{
    CTamGiac tg;
    cout << "Nhap toa do 3 diem cua tam giac: \n";
    tg.Nhap();
    tg.Xuat();

    cout << "Chu vi cua tam giac: " << tg.ChuVi() << endl;
    cout << "Dien tich cua tam giac: " << tg.DienTich() << endl;

    CDiem trongtam;
    trongtam = tg.TrongTam();
    cout << "Toa do trong tam cua tam giac: ";
    trongtam.Xuat();

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
    cout << "\nx = " << x;
    cout << "\ny = " << y;
}

float CDiem::KhoangCach(CDiem P)
{
    return sqrt((x - P.x) * (x - P.x)
        + (y - P.y) * (y - P.y));
}

void CTamGiac::Nhap()
{
    cout << "Nhap toa do diem A:\n";
    A.Nhap();
    cout << "Nhap toa do diem B:\n";
    B.Nhap();
    cout << "Nhap toa do diem C:\n";
    C.Nhap();
}

void CTamGiac::Xuat()
{
    cout << "Toa do diem A: ";
    A.Xuat();
    cout << endl;
    cout << "Toa do diem B: ";
    B.Xuat();
    cout << endl;
    cout << "Toa do diem C: ";
    C.Xuat();
    cout << endl;
}

float CTamGiac::ChuVi()
{
    float a = A.KhoangCach(B);
    float b = B.KhoangCach(C);
    float c = C.KhoangCach(A);
    return (a + b + c);
}

float CTamGiac::DienTich()
{
    float a = A.KhoangCach(B);
    float b = B.KhoangCach(C);
    float c = C.KhoangCach(A);
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void CDiem::setX(float x) {
    this->x = x;
}
void CDiem::setY(float y) {
    this->y = y;
}
float CDiem::getX()
{
    return x;
}
float CDiem::getY()
{
    return y;
}

CDiem CTamGiac::TrongTam()
{
    CDiem temp;
    float xA = A.getX();
    float yA = A.getY();
    float xB = B.getX();
    float yB = B.getY();
    float xC = C.getX();
    float yC = C.getY();

    temp.setX((xA + xB + xC) / 3.0);
    temp.setY((yA + yB + yC) / 3.0);

    return temp;
}