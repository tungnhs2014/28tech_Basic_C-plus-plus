/*
Viết chương trình khai báo lớp Sinh Viên gồm các thông tin: Mã SV, Họ tên, Lớp, Ngày sinh và điểm GPA(dạng số thực float).
Hàm khởi tạo không có tham số, gán các giá trị thuộc tính ở trạng thái mặc dịnh (xâu ký tự rỗng, giá trị số bằng 0). Đọc thông tin
1 sinh viên từ bàn phím (không có mã sinh viên) và in ra màn hình. Trong đó Mã SV được gán là SV001. Ngày sinh được chuẩn hóa dạng
dd/mm/yyyy.

Input Format
Gồm 4 dòng: 1. Họ tên không quá 30 chữ cái. 2. Lớp là một chuỗi không có dấu cách. 3. Ngày sinh có đủ 3 phần ngày
tháng năm nhưng có thể chưa đúng chuẩn dd/mm/yyyy. 4. Điểm GPA đảm bảo trong thang điểm 4 với 2 nhiều nhất 2 số sau 
dấu phẩy

Constraints
N/A

Output Format
Ghi thông tin sinh viên trên 1 dòng, mỗi thông tin cách nhau 1 khoảng trống.

Sample Input 0
Nguyen Van Nam
CNTT1
16/8/2001
2.8

Sample Output 0
SV001 Nguyen van Nam 16/8/2001 2.8
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class SinhVien
{
private:
    string ma, hoten, lop, ngaysinh;
    double gpa;
public:
    SinhVien()
    {
        ma = hoten = lop = ngaysinh = "";
        gpa = 0;
    }
    void Nhap()
    {
        ma = "SV001";
        getline(cin, hoten);
        cin >> lop >> ngaysinh >> gpa;
        if(ngaysinh[2] !=  '/') ngaysinh = "0" + ngaysinh;
        if(ngaysinh[5] != '/') ngaysinh.insert(3, "0"); 
        cin.ignore();
    }
    void xuat()
    {
        cout << ma << " " << hoten << " " << lop << " " << ngaysinh << " " << fixed << setprecision(1) << gpa << endl;
    }
    
};

int main(int argc, char const *argv[])
{
    SinhVien sv;
    sv.Nhap();
    sv.xuat();
    return 0;
}
