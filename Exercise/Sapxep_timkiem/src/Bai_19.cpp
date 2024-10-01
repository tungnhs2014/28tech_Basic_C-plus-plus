/*
Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng lớn hơn k.

Gợi ý : Sử dụng binary_search, đối với mỗi phần tử a[i] đếm số lượng phần tử trong mảng (đã sắp xếp) > k - a[i] 
bằng cách tìm vị trí đầu tiên của phần tử > k - a[i], từ vị trí này tới cuối dãy sẽ đều là các phần tử > k - a[i]

Input Format

Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng

Constraints

2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6;

Output Format

In ra số lượng cặp số có tổng lớn hơn k

Sample Input 0

4 5
2 3 4 5
Sample Output 0

5
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
        if(a[m] > x)
        {
            res = m;
            r = m - 1;
        }
        else 
            l = m + 1;
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
        ll pos = f(a, i + 1, n -1, k - a[i]);
        // pos => n - 1
        if(pos != -1) ans += n - pos;
    }
    cout << ans << endl;
    return 0;
}
