#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// ifstream: Đọc file
// ofstream: Ghi file
// fstream: Cả đọc và ghi file

// ios::in: Đọc file
// ios::out: Ghi file
// ios::binary: Mở kiểu nhị phân
// ios::app: Mở file lên để ghi nhưng mà ghi vào cuối file
// ios::ate: Đặt vị trí của con trỏ file vào cuối fil, nếu mà mode không được bật
// thì vị trí con trỏ sẽ là đầu file
// ios::trunc: Mở file để đọc, nhưng nội dung trước đó trong file sẽ bị mất hết
// trước ghi nội dung mới

int main(int argc, char const *argv[])
{
    ifstream in;
    ofstream out;
    in.open("File/src/input.txt", ios::in);
    out.open("File/src/output.txt", ios::out | ios::app);
    // if(in.is_open())
    // {
    //     cout << "OK!\n";
    // }
    // else{
    //     cout << "NOT OK!\n";
    // }

    // int n; in >> n;
    // int a[n];
    // for(int i = 0; i < n; i++)
    // {
    //     in >> a[i];
    // }
    // for(int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // out << "Nguyen Huu Son Tung \n";

    int n; in >> n;
    out << n << endl;

    for(int i = 0; i < n; i++)
    {
        int x; in >> x;
        out << x << ' ';
    }

    in.close();
    out.close();
    return 0;
}
