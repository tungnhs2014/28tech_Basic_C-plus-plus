// Đếm tần suất của phần tử trong mảng thông qua mảng đếm phân phối
// Dùng mảng đếm: Bạn phải khai báo được 1 mảng mà chỉ số của mảng đó có
// thể bao quát được hết các giá trị trong mảng

// 0 <= a[i] <= 10^6 => Mảng đếm cỡ 10^6 + 1 phần tử
// 0 <= a[i] <= 10^7 => Mảng đếm cỡ 10^7 + 1 phần tử
// 0 <= a[i] <= 10^9 => chịu
// -10^6 <= a[i] <= 10^6 => chịu

#include <bits/stdc++.h>
using namespace std;

int dem[10000001] = {0};
// 0 => 10^7

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        dem[a[i]]++; // a[i] => chi so cho mang dem
    }
    for(int i = 0; i < n; i++)
    {
        if(dem[a[i]] !=0)
        {
            cout << a[i] << " xuat hien " << dem[a[i]] << " lan\n";
            dem[a[i]] = 0; // lan sau gap a[i] khong in nua
        }
    }
    return 0;
}