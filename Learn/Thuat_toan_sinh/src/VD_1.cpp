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
int check;

void ktao(){
    for(int i = 1; i <= n; i++) a[i] = 0;
}

// bool check(){
//     for(int i = 1; i <= n; i++) if(a[i] == 0) return false;
//     return true;
// }

void sinh()
{
    // bat dau tu bit cuoi cung
    int i = n;
    while(i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    if(i == 0)
    {
        check = 0; // day la cau hinh cuoi cung
    }
    else a[i] = 1;
}

int main(int argc, char const *argv[])
{
    cin >> n;
    check = 1;
    ktao();
    while(check)
    {
        for(int i = 1; i <= n; i++) cout << a[i];
        cout << endl;
        sinh();
    }
    return 0;
}
