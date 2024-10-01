#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// --Ki thuat lap trinh huong doi tuong: Object Oriented Programming: OOP

// Class: Customer
// Object: instance

// Data field: Truong du lieu
// Method: Phuong thuc, hanh dong

// Class Account
// username, password, email
// checklogin
// changePassword

class SinhVien{
private:
    string ten, ngaysinh, lop;
    double gpa;
public:
    SinhVien()
    {
        cout << "Constructor mac dinh duoc goi \n";
    }
    // constructor day du tham so
    SinhVien(string name, string ns, string Lop, double diem)
    {
        this->ten = name;
        this->ngaysinh = ns;
        this->lop = Lop;
        this->gpa = diem;
    }
    void nhapThongTin();
    void xuatThongTin();
    string getTen();
    void setTen(string newName);
    // Destructor
    ~SinhVien()
    {
        cout << "Doi tuong duoc huy\n";
    }
};

// Implementation
void SinhVien::nhapThongTin()
{
    getline(cin, ten);
    cin >> ngaysinh >> lop >> gpa;
}

void SinhVien::xuatThongTin()
{
    cout << ten << ' ' << ngaysinh << ' ' << lop << ' ' << gpa << endl;
}

class Account{
private:
    string username, password;
public:
    bool checklogin();
};

// bool Account::checklogin()
// {

// }

// Getter, setter
// Getter
string SinhVien::getTen()
{
    return ten;
}

// Setter
void SinhVien::setTen(string newName)
{
    ten = newName;
}

int main(int argc, char const *argv[])
{
    SinhVien x; // constructor
    SinhVien y("Son Tung", "04/01/2000", "181462C", 9.25);
    y.xuatThongTin();
    return 0;
}
