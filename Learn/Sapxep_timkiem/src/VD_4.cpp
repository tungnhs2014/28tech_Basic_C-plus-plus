#include <bits/stdc++.h>
#include <algorithm>
// sort
// stable_sort
using namespace std;
using ll = long long;

// Sắp xếp
// Tìm kiếm

// [x, y] => sort(a + x, a +y + 1)
// [x, y] => sort(a.begin() + x, a.begin() + y + 1)

// --comparator: compare


// -- Sắp xếp theo tổng chữ số tăng dần, nếu 2 số có cùng tổng chữ số thì số lớn hơn sẽ đứng trước

int tongcs(int n)
{
    int res = 0;
    while(n != 0)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}
// intro sort: quick sort + heap sort: non-stable
// stable sort: merge sort: stable
bool cmp(int a, int b)
{
    return tongcs(a) < tongcs(b);
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    stable_sort(a, a + n, cmp);

    for(int x : a) cout << x << ' ';

    return 0;

}
