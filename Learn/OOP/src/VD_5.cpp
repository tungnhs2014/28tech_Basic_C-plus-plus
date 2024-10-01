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
public:
    void Nhap();
    void Xuat();
    friend istream& operator >> (istream &in, SV &x)
    {
        getline(in, x.hoten);
        in >> x.ngaysinh >> x.d1 >> x.d2 >> x.d3;
        return in;
    }
    friend ostream& operator << (ostream &out, SV x)
    {
        out << x.hoten << " " << x.ngaysinh << " " << fixed << setprecision(1) << (x.d1 + x.d2 + x.d3) << endl;
        return out;
    }
    bool operator < (SV other)
    {
        return (this->d1 + this->d2 + this->d3) < (other.d1 + other.d2 + other.d3);
    }

    // SV operator + (SV other)
    // {
    //     SV moi;
    //     moi.hoten = "Ten moi";
    //     moi.ngaysinh = "01/03/2000";
    //     moi.d1 = this->d1 + other.d1;
    //     moi.d2 = this->d2 + other.d2;
    //     moi.d3 = this->d3 + other.d3;
    //     return moi;
    // }

    friend SV operator + (SV a, SV b)
    {
        SV moi;
        moi.hoten = "Ten moi";
        moi.ngaysinh = "01/03/2000";
        moi.d1 = a.d1 + b.d1;
        moi.d2 = a.d2 + b.d2;
        moi.d3 = a.d3 + b.d3;
        return moi;
    }
};


void SV::Nhap()
{
    getline(cin, this->hoten);
    cin >> this->ngaysinh >> this->d1 >> this->d2 >> this->d3;
}

void SV::Xuat()
{
    cout << this->hoten << ' ' << this->ngaysinh << ' ' << fixed << setprecision(1) << (this->d1 + this->d2 + this->d3) << endl;
}

int main(int argc, char const *argv[])
{
    SV x, y;
    cin >> x;
    cin.ignore();
    cin >> y;
    if(x < y)
    {
        cout <<"X co tong diem nho hon Y !\n";
    }
    else{
        cout <<"X co tong diem lon hon Y !\n";
    }
    SV temp = x+y;
    cout << temp << endl;
    return 0;
}
