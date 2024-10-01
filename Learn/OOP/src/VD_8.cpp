/*
Xây dựng lớp Account gồm 2 thuộc tính Username và Password, các hàm tạo, hàm hủy, get, set.
Xây dựng lớp Date gồm 3 thuộc tính Day, Month và Year, các hàm tạo, hàm hủy, get, set.
Xây dựng lớp Person gồm 3 thuộc tính Name, Age, Address và DateOfBirth có kiểu là Date
    a. Lớp Student kế thừa lớp Person và có thêm thuộc tính ID, Gpa, Email, EmailPassword, Class, Acc có kiểu là Account 

Yêu cầu: Tiến hành xây dựng menu lựa chọn cho phép nhận thông tin của Student bao gồm các thông tin: Name, Class, Address, ID,
Gpa, DateOfBirth. Sau khi có đầy đủ thông tin Student tiến hành cấp mới Email sinh viên và mật khẩu truy cập,
mail của Student được cung cấp theo mẫu sau:

Ví dụ: Name: Nguyen Quang Huy, ID: B19DVT305 ->Email: huynq@ptit.edu.vn, EmailPassword: nguyenquanghuyb19dcvt305@
Account truy cập trang quản lý đào tạo của Student được cấp theo mẫu sau:
NGUYENQUANGHUY, Password: 15102001@

Hiển thị đầy đủ thông tin sinh viên có trong danh sách vừa nhập, bao gồm cả tài khoản truy cập trang quản lý đào tạo và Email sinh viên.

ID: B19DVT305
Name: Nguyen Quang Huy
Class: B19DVT03
Age: 19
DateOfBirth: 15/10/2001
Gpa: 2.85
Address: Kien Xuong, Thai Binh
Email:nguyenquanghuyb19dcvt305@
Account information:
Username: NGUYENQUANGHUY
Password: 15102001@

*/

#include <bits/stdc++.h>
using namespace std;

class Account
{
private:
    string username, password;
public:
    Account()
    {

    }
    Account(string username, string password)
    {
        this->username = username;
        this->password = password;
    }
    string getUsername()
    {
        return username;
    }
    string getPassword()
    {
        return password;
    }
    void setUsername(string username)
    {
        this->username = username;
    }
    void setPassword(string password)
    {
        this->password = password;
    }
};

class Date
{
private:
    int ngay, thang, nam;
public:
    Date()
    {

    }
    Date(int ngay, int thang, int nam)
    {
        this->ngay = ngay;
        this->thang = thang;
        this->nam = nam;
    }
    int getNgay()
    {
        return this->ngay;
    }
    int getThang()
    {
        return this->thang;
    }
    int getNam()
    {
        return this->nam;
    }
    void setNgay(int ngay)
    {
        this->ngay = ngay;
    }
    void setThang(int thang)
    {
        this->thang = thang;
    }
    void setNam(int nam)
    {
        this->nam = nam;
    }
};

class Person
{
private:
    string ten, diachi;
    int tuoi;
    Date ngaysinh;
public:
    Person(string ten, string diachi, int tuoi, Date ngaysinh)
    {
        this->ten = ten;
        this->diachi = diachi;
        this->tuoi = tuoi;
        this->ngaysinh = ngaysinh;
    }

    string getTen()
    {
        return this->ten;
    }

    string getDiachi()
    {
        return this->diachi;
    }

    Date getNgaysinh()
    {
        return this->ngaysinh;
    }

    void inthongtin()
    {
        cout << ten << ' ' << diachi << ' ' << tuoi << ' ' << ngaysinh.getNgay() << '/' << ngaysinh.getThang() << '/' << ngaysinh.getNam() << endl;
    }
    
};

class Student : public Person
{
private:
    string email, emailPassword, id, lop;
    double gpa;
    Account acc;
public:
    Student(string ten, string diachi, int tuoi, Date ngaysinh, string id, string lop, double gpa) : Person(ten, diachi, tuoi, ngaysinh)
    {
        this->id = id;
        this->lop = lop;
        this->gpa = gpa;
    }

    void setEmail()
    {
        string res = "";
        string tmp = Person::getTen();
        vector<string> v;
        stringstream ss(tmp);
        string token;
        while(ss >> token)
        {
            v.push_back(token);
        }
        for(char c : v.back())
        {
            res += tolower(c);
        }
        for(int i = 0; i < v.size() - 1; i++)
        {
            res += tolower(v[i][0]);
        }
        res += "@ptit.edu.vn";
        email = res;
    }
    void setEmailPassword()
    {
        string res = "";
        string tmp = Person::getTen();
        for(char x : tmp)
        {
            if(x != ' ')
                res += tolower(x);
        }
        for(char x : id)
        {
            res += tolower(x);
        }
        emailPassword = res;
    }
    void setAccount()
    {
        string user ="";
        string tmp = Person::getTen();
        for(char x : tmp)
        {
            if(x != ' ') user += toupper(x);
        }
        string pass = "";
        Date date = Person::getNgaysinh();
        pass += to_string(date.getNgay()) + to_string(date.getThang()) + to_string(date.getNam()) + "@";
        acc.setUsername(user);
        acc.setPassword(pass);
    }
    void inthongtin()
    {
        Person::inthongtin();
        cout << id << ' ' << lop << ' ' << gpa << ' ' << email << ' '<< emailPassword << endl;
        cout << acc.getUsername() << endl;
        cout << acc.getPassword() << endl;
    }
};

int main(int argc, char const *argv[])
{
    Date date(04, 01, 2000);
    Student s("Nguyen Huu Son Tung", "Dong Nai", 24, date,"1846401", "18462C", 9.5);
    s.setEmail();
    s.setEmailPassword();
    s.setAccount();
    s.inthongtin();
    return 0;
}
