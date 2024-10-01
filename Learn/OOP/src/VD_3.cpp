/*
Viết chương trình khai báo lớp thí sinh gồm các thông tin: Họ tên, ngày sinh, điểm môn 1, điểm môn 2, điểm môn 3 và tổng điểm. Đọc thông tin 1 thí sinh từ bán phím và in ra màn hình 3
thông tin: Họ tên, ngày sinh, tổng điểm.

Input:
Gồm 5 dòng lần lượt, mỗi dòng ghi 1 thông tin: Họ tên, Ngày sinh, Điểm môn, Điểm môn 2, Điểm môn 3. 

Constraints:
Các giá trị điểm là số thực (float). Họ tên không quá 50 chữ cái. Ngày sinh viết đúng chuẩn dd/mm/yyyy.

Ouput:
Ghi ra Họ tên, Ngày sinh và Tổng điểm. Mỗi thông tin cách nhau một khoảng trống. Điểm được ghi ra với 1 số sau dấu phẩy.

Sample Input:
Hoang Dinh Nam
28/09/2000
6.1
6.9
6.4

Sample Output:
Hoang Dinh Nam 28/09/2000 19.4

*/

#include <bits/stdc++.h>
using namespace std;

class SV{
private:
    string hoten, ngaysinh;
    double d1, d2, d3;
    static string tenTruong; // thuôc về lớp, chung cho tất cả đối tương => tên trường giống nhau cho tất cả đối tương được khởi tao
public:
    void Nhap();
    void Xuat();
    string getTenTruong();
    void setTenTruong(string tentruongMoi);
};

string SV::tenTruong = "UIT";

void SV::Nhap()
{
    getline(cin, this->hoten);
    cin >> this->ngaysinh >> this->d1 >> this->d2 >> this->d3;
}

void SV::Xuat()
{
    cout << this->hoten << ' ' << this->ngaysinh << ' ' << fixed << setprecision(1) << (this->d1 + this->d2 + this->d3) << endl;
}

string SV::getTenTruong()
{
    return this->tenTruong;
}

void SV::setTenTruong(string tentruongMoi)
{
    this->tenTruong = tentruongMoi;
}
int main(int argc, char const *argv[])
{
    SV x;
    x.setTenTruong("HCMUTE");
    cout << x.getTenTruong() << endl;
    SV y;
    y.setTenTruong("UEF");
    cout << x.getTenTruong() << endl;
    cout << y.getTenTruong() << endl;
    return 0;
}
