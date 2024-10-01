/*
Trường đại học XYZ tuyển sinh theo hình thức xét điểm ba môn Toán-Lý-Hóa. Dể đơn giản, khu vực tuyển sinh được quy định
luôn bởi ba chữ cái đầu tiên trong mã thí sinh. Do rất thích các thí sinh đến từ khu vưc 3 nên trường XYZ tự quy định giá
trị điểm ưu tiên khu vực như trong bảng sau:

Bảng ưu tiên khu vực
Mã khu vực      Điểm ưu tiên
KV1                 0.5
KV2                 1.0 
KV3                 2.5 

Giả sử biết trước điểm chuẩn là 24. Hãy xác định tình trạng tuyển sinh của thí sinh.

Input Format
Chỉ bao gồm thông tin của một thí sinh trên 5 dòng lần lươt là: -Mã thí sinh -Họ tên -Điểm toán -Điểm lý -Điểm hóa

Constraints
Các giá trị điểm đều đảm bảo trong phạm vi [0, 10] và có thể có 1 chữ số phần thập phân.

Output Format
Ghi ra các thông tin: -Mã thí sinh -Họ tên -Khu vực -Tổng điểm -có tính ưu tiên(có thể có 1 chũ số thập phân),
trong trường hợp điểm là số thực với thập phân bằng 0 thì không in ra phần thập phân.
Trạng thái: TRUNG TUYEN hoặc TRUOT (sau khi đã tính cả điểm ưu tiên).

Sample Input 0
KV2B
Hoang Ngoc Long
3.4
9
0

Sample Output 0
KV2B Hoang Ngoc Long 2 13.4 TRUOT

*/

#include <bits/stdc++.h>
using namespace std;


class SinhVien
{
private:
    string ma, ten;
    double toan, ly, hoa;
public:
    void nhap()
    {
        cin >> ma;
        cin.ignore();
        getline(cin, ten);
        cin >> toan >> ly >> hoa;
    }
    void in()
    {
        cout << ma << " " << ten << " ";
        int kv = ma[2] - '0';
        double tong = toan + ly + hoa;
        if(kv == 1)
        {
            tong += 0.5;
        }
        else if(kv == 2)
        {
            tong += 1.0;
        }
        else
        {
            tong += 2.5;
        }
        cout << kv << " ";
        if(tong == (int)tong)
        {
            cout <<  (int)tong << " ";
        }
        else
        {
            cout << fixed << setprecision(1) << tong << " ";
        }
        if(tong >= 24) cout <<"TRUNG TUYEN\n";
        else cout << "TRUOT\n";
    }
};

int main(int argc, char const *argv[])
{
    SinhVien sv;
    sv.nhap();
    sv.in();
    return 0;
}
