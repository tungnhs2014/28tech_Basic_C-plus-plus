#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// brute force
// -- Bài toán sinh nhị phân có độ dài n
// -- Bài toán sinh tổ họp chập k của n phần tử 
// -- Sinh hoán vị
// -- Sinh phân hoạch


// <Khởi tạo cấu hình đầu tiên>

// while(<Chưa phải cấu hình cuối cùng)
//      <Xử lí cầu hình hiện tại>
//      <Sinh ra cấu hình kế tiếp> 

int n, a[100];

int main(int argc, char const *argv[])
{
    cin >> n;
    for(int i = 0; i < pow(2, n); i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i & (1 << j))
            {
                cout << 1;
            }
            else cout << 0;
        }
        cout << endl;
    }
    return 0;
}
