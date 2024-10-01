/*
Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng bằng k.

Gợi ý : Sắp xếp mảng tăng dần sau đó với mỗi phần tử a[i] trong mảng tìm xem trong đoạn [i + 1, n - 1]
có bao nhiêu phần tử có giá trị là k - a[i], bằng cách tìm vị trí đầu tiên và vị trí cuối cùng của phần tử có giá trị là k - a[i] 
=> Số lượng

Input Format
Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng

Constraints
2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6;

Output Format
In ra số lượng cặp số có tổng bằng k

Sample Input 0
4 4
2 2 2 2
Sample Output 0

6
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int f(int a[], int l, int r, int x)
{
    int res = -1;
    while(l <= r)
    {
        int m = (l + r)/2;
        if(a[m] == x)
        {
            res = m;
            r = m - 1;
        }
        else if(a[m] < x)
        {
            l = m + 1;
        }
        else 
            r = m - 1;
    }
    return res;
}

int r(int a[], int l, int r, int x)
{
    int res = -1;
    while(l <= r)
    {
        int m = (l + r)/2;
        if(a[m] == x)
        {
            res = m;
            l = m + 1;
        }
        else if(a[m] < x)
        {
            l = m + 1;
        }
        else 
            r = m - 1;
    }
    return res;
}


int main(int argc, char const *argv[])
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        // int p1 = f(a, i + 1, n -1, k - a[i]);
        // int p2 = r(a, i + 1, n -1, k - a[i]);
        // if(p1 != -1) ans += p2 -p1 + 1;
        auto it1 = lower_bound(a + i + 1, a + n, k - a[i]);
        auto it2 = upper_bound(a + i + 1, a + n, k - a[i]);
        ans += it2 - it1;
    }
    cout << ans << endl;
    return 0;
}
