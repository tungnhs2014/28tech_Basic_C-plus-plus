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
    double getTongDiem()
    {
        return this->d1 + this->d2 + this->d3;
    }

    bool operator < (SV other)
    {
        return d1 + d2 + d3 < other.d1 + other.d2 + other.d3;
    }
};


void SV::Nhap()
{    
    getchar();
    getline(cin, this->hoten);
    cin >> this->ngaysinh >> this->d1 >> this->d2 >> this->d3;
}

void SV::Xuat()
{
    cout << this->hoten << ' ' << this->ngaysinh << ' ' << fixed << setprecision(1) << (this->d1 + this->d2 + this->d3) << endl;
}

bool cmp(SV a, SV b)
{
    return a.getTongDiem() < b.getTongDiem();
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    SV a[n];
    for(int i = 0; i < n; i++)
    {
        a[i].Nhap();
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++)
    {
        a[i].Xuat();
    }
    return 0;
}
