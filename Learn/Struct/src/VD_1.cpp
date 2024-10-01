#include <bits/stdc++.h>
using namespace std;

// Xet 1 sinh vien
// - ten
// - msv
// - ngay sinh
// - GPA
// - Que quan


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
    SinhVien Y{"Nguyen Thi Minh Thy", "1914729", "21/04/2001", "TP.HCM", 9.0};
    // getline(cin, sv.ten);
    // cin >> sv.msv >> sv.ns;
    // cin.ignore();
    // getline(cin, sv.qq);
    // cin >> sv.gpa;

    // sv.nhap();
    // sv.in();
    Input(sv);
    Output(sv);
    Y.in();
    return 0;
}
