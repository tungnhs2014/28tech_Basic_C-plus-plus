/*
Viết chương trình khai báo lớp Sinh Viên gồm các thông tin: Mã SV, Họ tên, Ngày sinh, Lớp và Điểm GPA (dạng số thực). 
Hàm khởi tạo không có tham số, gán các giá trị thuộc tính ở trạng thái mặc định (xâu ký tự rỗng, giá trị số bằng 0). 
Đọc thông tin N sinh viên từ bàn phím (không có mã sinh viên) và in ra lần lượt màn hình mỗi dòng 1 sinh viên theo đúng thứ tự ban đầu. 
Trong đó Mã SV được tự tạo ra theo quy tắc thêm mã SV sau đó là giá trị nguyên tự động tăng tính từ 001 (tối đa là 099).
Ngày sinh được chuẩn hóa về dạng dd/mm/yyyy

Input Format
Dòng đầu tiên ghi số sinh viên N (0 < N < 50). 
Mỗi sinh viên ghi trên 4 dòng lần lượt là Họ tên, Lớp, Ngày sinh và Điểm GPA. 
Trong đó: 
• Họ tên không quá 30 chữ cái. 
• Lớp là một chuỗi không có dấu cách.
• Ngày sinh có đủ 3 phần ngày tháng năm nhưng có thể chưa đúng chuẩn dd/mm/yyyy. 
• Điểm GPA đảm bảo trong thang điểm 4 với 2 nhiều nhất 2 số sau dấu phẩy.

Constraints
N/A

Output Format
Ghi ra danh sách lần lượt các sinh viên có đầy đủ Mã sinh viên, Họ tên, Lớp, Ngày sinh (đã chuẩn hóa về dạng dd/mm/yyyy), 
Điểm GPA (với đúng 2 số sau dấu phẩy). Mỗi sinh viên ghi trên 1 dòng, mỗi thông tin cách nhau 1 khoảng trống.

Sample Input 0
5
Nguyen Van A
CNTT2
19/11/2000
3.60
Nguyen Van B
CNTT1
19/3/1999
0.10
Nguyen Van C
DTVT2
21/11/2001
1.30
Nguyen Van D
DTVT2
20/1/2000
2.70
Nguyen Van E
DTVT2
17/5/2003
0.30
Sample Output 0
SV001 Nguyen Van A CNTT2 19/11/2000 3.60
SV002 Nguyen Van B CNTT1 19/03/1999 0.10
SV003 Nguyen Van C DTVT2 21/11/2001 1.30
SV004 Nguyen Van D DTVT2 20/01/2000 2.70
SV005 Nguyen Van E DTVT2 17/05/2003 0.30

*/

#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
private:    
    string ma, hoten, ngaysinh, lop;
    double gpa;
public:
    SinhVien()
    {
        ma = hoten = ngaysinh = lop = "";
        gpa = 0;
    }
    SinhVien(int stt, string hoten, string lop, string ngaysinh, double gpa)
    {
        ma = "SV";
        if(stt < 10)
        {
            ma = ma + "00" + to_string(stt);
        } 
        else if(stt < 100)
        {
            ma = ma + "0" + to_string(stt);
        }
        else 
        {
            ma += to_string(stt);
        }
        this->hoten = hoten;
        this->lop = lop;
        this->ngaysinh = ngaysinh;
        if(this->ngaysinh[2] != '/')
        {
            this->ngaysinh = "0" + this->ngaysinh;
        }
        else if(this->ngaysinh[5] != '/')
        {
            this->ngaysinh.insert(3, "0");
        }
        this->gpa = gpa;
    }
    void xuat()
    {
        cout << ma << ' ' << hoten << ' ' << lop << ' ' << ngaysinh << ' ' << fixed << setprecision(2) << gpa << endl;
    }
    ~SinhVien()
    {

    }
};
int main(int argc, char const *argv[])
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin.ignore();
        string hoten;
        getline(cin, hoten);
        string lop, ngaysinh;
        double gpa;
        cin >> lop >> ngaysinh >> gpa;
        SinhVien sv(i, hoten, lop, ngaysinh, gpa);
        sv.xuat();
    }
    return 0;
}
