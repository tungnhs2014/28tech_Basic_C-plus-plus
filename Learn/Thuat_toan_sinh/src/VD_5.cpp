#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// brute force
// -- Bài toán sinh nhị phân có độ dài n
// -- Bài toán sinh tổ họp chập k của n phần tử 
// -- Sinh hoán vị: N!
// -- Sinh phân hoạch


// <Khởi tạo cấu hình đầu tiên>

// while(<Chưa phải cấu hình cuối cùng)
//      <Xử lí cầu hình hiện tại>
//      <Sinh ra cấu hình kế tiếp> 

int n, a[100];
int check;

void ktao(){
    for(int i = 1; i <= n; i++) a[i] = i;
}

void sinh()
{
    int i = n -1;
    while(i >= 1 && a[i] > a[i + 1])
    {
        --i;
    }
    if(i == 0)
    {
        check = 0; // day la cau hinh cuoi cung
    }
    else{
        // di tim a[j]: i + 1, n, > a[i] va nho nhat co the
        // i + 1 >= n giam dan
        int j = n;
        while(a[i] > a[j])
        {
            --j;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
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