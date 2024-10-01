/*
Cho dãy số A[] gồm N phần tử. Ở mỗi thao tác bạn có thể tăng các phần tử trong mảng lên 1 vài đơn vị,
hãy xác định số dơn vị tối thiểu cân thêm vào các phân tử trong mảng sao cho mảng trở thành 1 đãy tăng 
chặt. Ví dụ: dãy 1 2 3 7 8 là một dãy tăng chặt. nhưng dãy 1 2 2 7 8 không phải lã 1 dãy tăng chặt.
Sameple Input 0
5
3 2 7 8 1
Sameple Output 0
10
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    ll ans = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] <= a[i-1])
        {
            int d = (a[i-1] - a[i] + 1);
            ans +=d;
            a[i] +=d;
        }
    }
    cout << ans << endl;
    for(ll x : a)
    {
        cout << x << " ";
    }
    return 0;
}


