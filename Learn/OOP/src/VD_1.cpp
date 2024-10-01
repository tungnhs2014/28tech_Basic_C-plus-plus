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
    void nhapThongTin();
    void xuatThongTin();
    string getTen();
    void setTen(string newName);
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
    SinhVien x;
    x.nhapThongTin();
    x.xuatThongTin();
    x.setTen("Son Tung MTP");
    x.xuatThongTin();
    return 0;
}
