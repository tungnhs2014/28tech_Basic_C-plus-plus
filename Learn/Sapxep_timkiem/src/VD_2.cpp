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

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end()); // sort(begin(a), end(a))
    for(int x : a) cout << x << ' ';

    return 0;


}
