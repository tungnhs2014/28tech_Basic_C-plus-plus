#include <bits/stdc++.h>
using namespace std;

// Xet 1 sinh vien
// - ten
// - msv
// - ngay sinh
// - GPA
// - Que quan


// CONSTRUCTOR: Ham khoi tao
// - Khong co kieu tra ve
// - Ten ham chinh la ten struct
// - Tu tim constructor phu hop de khoi tao
// - Tu khoi tao constructor mac dinh neu ta khong khai bao
struct SinhVien
{
    string ten, msv, ns, qq;
    double gpa;
    void in()
    {
        cout << ten << " " << msv << " " << ns << " " << qq << " " << gpa << endl;
    }
    void nhap()
    {
        getline(cin, ten);
        cin >> msv >> ns;
        cin.ignore();
        getline(cin, qq);
        cin >> gpa;
    }
    SinhVien()
    {
        msv = "18146401";
        ten = "Nguyen Huu Son Tung";
        ns = "04/01/2000";
        qq = "Dong Nai";
        gpa = 9.5;
    }
    SinhVien(string ten, string ma, string ngaysinh, string quequan, double diem)
    {
        this->ten = ten; // this -> SinhVien x <=> x.ten = ten
        msv = ma;
        ns = ngaysinh;
        qq = quequan;
        gpa = diem;
    }
    SinhVien(double diem)
    {
        msv = "20146401";
        ten = "Nguyen Huu Xuan Bach";
        ns = "17/04/2010";
        qq = "Dong Nai";
        gpa = diem;
    }
};

void Output(SinhVien a)
{
        cout << a.ten << " " << a.msv << " " << a.ns << " " << a.qq << " " << a.gpa << endl;
}

void Input(SinhVien &a)
{
    cin.ignore();
    getline(cin, a.ten);
    cin >> a.msv >> a.ns;
    cin.ignore();
    getline(cin, a.qq);
    cin >> a.gpa;
}

int main(int argc, char const *argv[])
{
    SinhVien sv;
    SinhVien Y{"Nguyen Thi Minh Thy", "19147293", "21/04/2001", "TP.HCM", 9.0};
    SinhVien Z(9.4);
    Output(sv);
    Output(Y);
    Output(Z);

    return 0;
}
