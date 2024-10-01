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
int check, dem;

void ktao(){
    dem = 1;
    a[1] = n;
}

void sinh()
{
    int i = dem;
    while(i >= 1 && a[i] == 1)
    {
        --i;
    }
    if(i == 0)
    {
        check = 0; // day la cau hinh cuoi cung
    }
    else{
        a[i]--;
        int thieu = dem - i + 1;
        dem = i;
        int q = thieu / a[i];
        int r = thieu % a[i]; 
        if(q != 0)
        {
            for(int j = 1; j <= q; j++)
            {
                a[++dem] = a[i];
            }
        }
        if(r != 0)
        {
            a[++dem] = r;
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> n;
    ktao();
    check = 1;
    while(check)
    {
        for(int i = 1; i <= dem; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}
