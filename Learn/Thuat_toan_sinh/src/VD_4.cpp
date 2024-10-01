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

int n, k, a[100];
int check;

void ktao(){
    for(int i = 1; i <= k; i++) a[i] = i;
}

void sinh()
{
    int i = k;
    while(i >= 1 && a[i] == n - k + i)
    {
        --i;
    }
    if(i == 0)
    {
        check = 0; // day la cau hinh cuoi cung
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++)
        {
            a[j] = a[j -1] + 1; 
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> n >> k;
    check = 1;
    ktao();
    while(check)
    {
        for(int i = 1; i <= k; i++) cout << a[i];
        cout << endl;
        sinh();
    }
    return 0;
}